/**********
This library is free software; you can redistribute it and/or modify it under
the terms of the GNU Lesser General Public License as published by the
Free Software Foundation; either version 2.1 of the License, or (at your
option) any later version. (See <http://www.gnu.org/copyleft/lesser.html>.)

This library is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for
more details.

You should have received a copy of the GNU Lesser General Public License
along with this library; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
**********/
// "liveMedia"
// Copyright (c) 1996-2012 Live Networks, Inc.  All rights reserved.
// A RTSP server
// Implementation

#include "RTSPServer.hh"
#include "RTSPCommon.hh"
#include "Base64.hh"
#include <GroupsockHelper.hh>

#if defined(__WIN32__) || defined(_WIN32) || defined(_QNX4)
#else
#include <signal.h>
#define USE_SIGNALS 1
#endif

////////// RTSPServer implementation //////////

RTSPServer*
RTSPServer::createNew(UsageEnvironment& env, Port ourPort,
		      UserAuthenticationDatabase* authDatabase,
		      unsigned reclamationTestSeconds) {
  int ourSocket = setUpOurSocket(env, ourPort);
  if (ourSocket == -1) return NULL;

  return new RTSPServer(env, ourSocket, ourPort, authDatabase, reclamationTestSeconds);
}

Boolean RTSPServer::lookupByName(UsageEnvironment& env,
				 char const* name,
				 RTSPServer*& resultServer) {
  resultServer = NULL; // unless we succeed

  Medium* medium;
  if (!Medium::lookupByName(env, name, medium)) return False;

  if (!medium->isRTSPServer()) {
    env.setResultMsg(name, " is not a RTSP server");
    return False;
  }

  resultServer = (RTSPServer*)medium;
  return True;
}

void RTSPServer::addServerMediaSession(ServerMediaSession* serverMediaSession) {
  if (serverMediaSession == NULL) return;

  char const* sessionName = serverMediaSession->streamName();
  if (sessionName == NULL) sessionName = "";
  ServerMediaSession* existingSession
    = (ServerMediaSession*)(fServerMediaSessions->Add(sessionName, (void*)serverMediaSession));
  removeServerMediaSession(existingSession); // if any
}

ServerMediaSession* RTSPServer::lookupServerMediaSession(char const* streamName) {
  return (ServerMediaSession*)(fServerMediaSessions->Lookup(streamName));
}

void RTSPServer::removeServerMediaSession(ServerMediaSession* serverMediaSession) {
  if (serverMediaSession == NULL) return;

  fServerMediaSessions->Remove(serverMediaSession->streamName());
  if (serverMediaSession->referenceCount() == 0) {
    Medium::close(serverMediaSession);
  } else {
    serverMediaSession->deleteWhenUnreferenced() = True;
  }
}

void RTSPServer::removeServerMediaSession(char const* streamName) {
  removeServerMediaSession(lookupServerMediaSession(streamName));
}

char* RTSPServer
::rtspURL(ServerMediaSession const* serverMediaSession, int clientSocket) const {
  char* urlPrefix = rtspURLPrefix(clientSocket);
  char const* sessionName = serverMediaSession->streamName();

  char* resultURL = new char[strlen(urlPrefix) + strlen(sessionName) + 1];
  sprintf(resultURL, "%s%s", urlPrefix, sessionName);

  delete[] urlPrefix;
  return resultURL;
}

char* RTSPServer::rtspURLPrefix(int clientSocket) const {
  struct sockaddr_in ourAddress;
  if (clientSocket < 0) {
    // Use our default IP address in the URL:
    ourAddress.sin_addr.s_addr = ReceivingInterfaceAddr != 0
      ? ReceivingInterfaceAddr
      : ourIPAddress(envir()); // hack
  } else {
    SOCKLEN_T namelen = sizeof ourAddress;
    getsockname(clientSocket, (struct sockaddr*)&ourAddress, &namelen);
  }

  char urlBuffer[100]; // more than big enough for "rtsp://<ip-address>:<port>/"

  portNumBits portNumHostOrder = ntohs(fRTSPServerPort.num());
  if (portNumHostOrder == 554 /* the default port number */) {
    sprintf(urlBuffer, "rtsp://%s/", AddressString(ourAddress).val());
  } else {
    sprintf(urlBuffer, "rtsp://%s:%hu/",
	    AddressString(ourAddress).val(), portNumHostOrder);
  }

  return strDup(urlBuffer);
}

UserAuthenticationDatabase* RTSPServer::setAuthenticationDatabase(UserAuthenticationDatabase* newDB) {
  UserAuthenticationDatabase* oldDB = fAuthDB;
  fAuthDB = newDB;

  return oldDB;
}

Boolean RTSPServer::setUpTunnelingOverHTTP(Port httpPort) {
  fHTTPServerSocket = setUpOurSocket(envir(), httpPort);
  if (fHTTPServerSocket >= 0) {
    fHTTPServerPort = httpPort;
    envir().taskScheduler().turnOnBackgroundReadHandling(fHTTPServerSocket,
							 (TaskScheduler::BackgroundHandlerProc*)&incomingConnectionHandlerHTTP, this);
    return True;
  }

  return False;
}

portNumBits RTSPServer::httpServerPortNum() const {
  return ntohs(fHTTPServerPort.num());
}

#define LISTEN_BACKLOG_SIZE 20

int RTSPServer::setUpOurSocket(UsageEnvironment& env, Port& ourPort) {
  int ourSocket = -1;

  do {
    // The following statement is enabled by default.
    // Don't disable it (by defining ALLOW_RTSP_SERVER_PORT_REUSE) unless you know what you're doing.
#ifndef ALLOW_RTSP_SERVER_PORT_REUSE
    NoReuse dummy(env); // Don't use this socket if there's already a local server using it
#endif

    ourSocket = setupStreamSocket(env, ourPort);
    if (ourSocket < 0) break;

    // Make sure we have a big send buffer:
    if (!increaseSendBufferTo(env, ourSocket, 50*1024)) break;

    // Allow multiple simultaneous connections:
    if (listen(ourSocket, LISTEN_BACKLOG_SIZE) < 0) {
      env.setResultErrMsg("listen() failed: ");
      break;
    }

    if (ourPort.num() == 0) {
      // bind() will have chosen a port for us; return it also:
      if (!getSourcePort(env, ourSocket, ourPort)) break;
    }

    return ourSocket;
  } while (0);

  if (ourSocket != -1) ::closeSocket(ourSocket);
  return -1;
}

Boolean RTSPServer
::specialClientAccessCheck(int /*clientSocket*/, struct sockaddr_in& /*clientAddr*/, char const* /*urlSuffix*/) {
  // default implementation
  return True;
}

RTSPServer::RTSPServer(UsageEnvironment& env,
		       int ourSocket, Port ourPort,
		       UserAuthenticationDatabase* authDatabase,
		       unsigned reclamationTestSeconds)
  : Medium(env),
    fRTSPServerSocket(ourSocket), fRTSPServerPort(ourPort),
    fHTTPServerSocket(-1), fHTTPServerPort(0), fClientSessionsForHTTPTunneling(NULL),
    fAuthDB(authDatabase), fReclamationTestSeconds(reclamationTestSeconds),
    fServerMediaSessions(HashTable::create(STRING_HASH_KEYS)) {
#ifdef USE_SIGNALS
  // Ignore the SIGPIPE signal, so that clients on the same host that are killed
  // don't also kill us:
  signal(SIGPIPE, SIG_IGN);
#endif

  // Arrange to handle connections from others:
  env.taskScheduler().turnOnBackgroundReadHandling(fRTSPServerSocket,
						   (TaskScheduler::BackgroundHandlerProc*)&incomingConnectionHandlerRTSP, this);
}

RTSPServer::~RTSPServer() {
  // Turn off background read handling:
  envir().taskScheduler().turnOffBackgroundReadHandling(fRTSPServerSocket);
  ::closeSocket(fRTSPServerSocket);

  envir().taskScheduler().turnOffBackgroundReadHandling(fHTTPServerSocket);
  ::closeSocket(fHTTPServerSocket);

  delete fClientSessionsForHTTPTunneling;

  // Remove all server media sessions (they'll get deleted when they're finished):
  while (1) {
    ServerMediaSession* serverMediaSession
      = (ServerMediaSession*)fServerMediaSessions->RemoveNext();
    if (serverMediaSession == NULL) break;
    removeServerMediaSession(serverMediaSession);
  }

  // Finally, delete the session table itself:
  delete fServerMediaSessions;
}

Boolean RTSPServer::isRTSPServer() const {
  return True;
}

void RTSPServer::incomingConnectionHandlerRTSP(void* instance, int /*mask*/) {
  RTSPServer* server = (RTSPServer*)instance;
  server->incomingConnectionHandlerRTSP1();
}
void RTSPServer::incomingConnectionHandlerRTSP1() {
  incomingConnectionHandler(fRTSPServerSocket);
}

void RTSPServer::incomingConnectionHandlerHTTP(void* instance, int /*mask*/) {
  RTSPServer* server = (RTSPServer*)instance;
  server->incomingConnectionHandlerHTTP1();
}
void RTSPServer::incomingConnectionHandlerHTTP1() {
  incomingConnectionHandler(fHTTPServerSocket);
}

void RTSPServer::incomingConnectionHandler(int serverSocket) {
  struct sockaddr_in clientAddr;
  SOCKLEN_T clientAddrLen = sizeof clientAddr;
  int clientSocket = accept(serverSocket, (struct sockaddr*)&clientAddr, &clientAddrLen);
  if (clientSocket < 0) {
    int err = envir().getErrno();
    if (err != EWOULDBLOCK) {
        envir().setResultErrMsg("accept() failed: ");
    }
    return;
  }
  makeSocketNonBlocking(clientSocket);
  increaseSendBufferTo(envir(), clientSocket, 50*1024);

#ifdef DEBUG
  envir() << "accept()ed connection from " << AddressString(clientAddr).val() << "\n";
#endif

  // Create a new object for this RTSP session.
  // (Choose a random 32-bit integer for the session id (it will be encoded as a 8-digit hex number).  We don't bother checking for
  //  a collision; the probability of two concurrent sessions getting the same session id is very low.)
  // (We do, however, avoid choosing session id 0, because that has a special use (by "OnDemandServerMediaSubsession").)
  unsigned sessionId;
  do { sessionId = (unsigned)our_random32(); } while (sessionId == 0);
  (void)createNewClientSession(sessionId, clientSocket, clientAddr);
}


////////// RTSPServer::RTSPClientSession implementation //////////

RTSPServer::RTSPClientSession
::RTSPClientSession(RTSPServer& ourServer, unsigned sessionId, int clientSocket, struct sockaddr_in clientAddr)
  : fOurServer(ourServer), fOurSessionId(sessionId),
    fOurServerMediaSession(NULL),
    fClientInputSocket(clientSocket), fClientOutputSocket(clientSocket), fClientAddr(clientAddr),
    fSessionCookie(NULL), fLivenessCheckTask(NULL),
    fIsMulticast(False), fSessionIsActive(True), fStreamAfterSETUP(False),
    fTCPStreamIdCount(0), fNumStreamStates(0), fStreamStates(NULL), fRecursionCount(0) {
  // Arrange to handle incoming requests:
  resetRequestBuffer();
  envir().taskScheduler().turnOnBackgroundReadHandling(fClientInputSocket,
     (TaskScheduler::BackgroundHandlerProc*)&incomingRequestHandler, this);
  noteLiveness();
}

RTSPServer::RTSPClientSession::~RTSPClientSession() {
  closeSockets();

  if (fSessionCookie != NULL) {
    // We were being used for RTSP-over-HTTP tunneling.  Remove ourselves from the 'session cookie' hash table before we go:
    fOurServer.fClientSessionsForHTTPTunneling->Remove(fSessionCookie);
    delete[] fSessionCookie;
  }

  reclaimStreamStates();

  if (fOurServerMediaSession != NULL) {
    fOurServerMediaSession->decrementReferenceCount();
    if (fOurServerMediaSession->referenceCount() == 0
	&& fOurServerMediaSession->deleteWhenUnreferenced()) {
      fOurServer.removeServerMediaSession(fOurServerMediaSession);
      fOurServerMediaSession = NULL;
    }
  }
}

void RTSPServer::RTSPClientSession::closeSockets() {
  // Turn off any liveness checking:
  envir().taskScheduler().unscheduleDelayedTask(fLivenessCheckTask);

  // Turn off background read handling:
  envir().taskScheduler().turnOffBackgroundReadHandling(fClientInputSocket);

  if (fClientOutputSocket != fClientInputSocket) ::closeSocket(fClientOutputSocket);
  ::closeSocket(fClientInputSocket);

  fClientInputSocket = fClientOutputSocket = -1;
}

void RTSPServer::RTSPClientSession::reclaimStreamStates() {
  for (unsigned i = 0; i < fNumStreamStates; ++i) {
    if (fStreamStates[i].subsession != NULL) {
      fStreamStates[i].subsession->deleteStream(fOurSessionId,
						fStreamStates[i].streamToken);
    }
  }
  delete[] fStreamStates; fStreamStates = NULL;
  fNumStreamStates = 0;
}

void RTSPServer::RTSPClientSession::resetRequestBuffer() {
  fRequestBytesAlreadySeen = 0;
  fRequestBufferBytesLeft = sizeof fRequestBuffer;
  fLastCRLF = &fRequestBuffer[-3]; // hack: Ensures that we don't think we have end-of-msg if the data starts with <CR><LF>
  fBase64RemainderCount = 0;
}

void RTSPServer::RTSPClientSession::incomingRequestHandler(void* instance, int /*mask*/) {
  RTSPClientSession* session = (RTSPClientSession*)instance;
  session->incomingRequestHandler1();
}

void RTSPServer::RTSPClientSession::incomingRequestHandler1() {
  struct sockaddr_in dummy; // 'from' address, meaningless in this case

  int bytesRead = readSocket(envir(), fClientInputSocket, &fRequestBuffer[fRequestBytesAlreadySeen], fRequestBufferBytesLeft, dummy);
  handleRequestBytes(bytesRead);
}

void RTSPServer::RTSPClientSession::handleAlternativeRequestByte(void* instance, u_int8_t requestByte) {
  RTSPClientSession* session = (RTSPClientSession*)instance;
  session->handleAlternativeRequestByte1(requestByte);
}

void RTSPServer::RTSPClientSession::handleAlternativeRequestByte1(u_int8_t requestByte) {
  // Add this character to our buffer; then try to handle the data that we have buffered so far:
  if (fRequestBufferBytesLeft == 0|| fRequestBytesAlreadySeen >= RTSP_BUFFER_SIZE) return;
  fRequestBuffer[fRequestBytesAlreadySeen] = requestByte;
  handleRequestBytes(1);
}

void RTSPServer::RTSPClientSession::handleRequestBytes(int newBytesRead) {
  ++fRecursionCount;

  do {
    noteLiveness();
    
    if (newBytesRead <= 0 || (unsigned)newBytesRead >= fRequestBufferBytesLeft) {
      // Either the client socket has died, or the request was too big for us.
      // Terminate this connection:
#ifdef DEBUG
      fprintf(stderr, "RTSPClientSession[%p]::handleRequestBytes() read %d new bytes (of %d); terminating connection!\n", this, newBytesRead, fRequestBufferBytesLeft);
#endif
      fSessionIsActive = False;
      break;
    }
    
    Boolean endOfMsg = False;
    unsigned char* ptr = &fRequestBuffer[fRequestBytesAlreadySeen];
#ifdef DEBUG
    ptr[newBytesRead] = '\0';
    fprintf(stderr, "RTSPClientSession[%p]::handleRequestBytes() read %d new bytes:%s\n", this, newBytesRead, ptr);
#endif
    
    if (fClientOutputSocket != fClientInputSocket) {
      // We're doing RTSP-over-HTTP tunneling, and input commands are assumed to have been Base64-encoded.
      // We therefore Base64-decode as much of this new data as we can (i.e., up to a multiple of 4 bytes):
      unsigned numBytesToDecode = fBase64RemainderCount + newBytesRead;
      unsigned newBase64RemainderCount = numBytesToDecode%4;
      numBytesToDecode -= newBase64RemainderCount;
      if (numBytesToDecode > 0) {
	ptr[newBytesRead] = '\0';
	unsigned decodedSize;
	unsigned char* decodedBytes = base64Decode((char*)(ptr-fBase64RemainderCount), decodedSize);
#ifdef DEBUG
	fprintf(stderr, "Base64-decoded %d input bytes into %d new bytes:", numBytesToDecode, decodedSize);
	for (unsigned k = 0; k < decodedSize; ++k) fprintf(stderr, "%c", decodedBytes[k]);
	fprintf(stderr, "\n");
#endif
	
	// Copy the new decoded bytes in place of the old ones (we can do this because there are fewer decoded bytes than original):
	unsigned char* to = ptr-fBase64RemainderCount;
	for (unsigned i = 0; i < decodedSize; ++i) *to++ = decodedBytes[i];
	
	// Then copy any remaining (undecoded) bytes to the end:
	for (unsigned j = 0; j < newBase64RemainderCount; ++j) *to++ = (ptr-fBase64RemainderCount+numBytesToDecode)[j];
	
	newBytesRead = decodedSize + newBase64RemainderCount; // adjust to allow for the size of the new decoded data (+ remainder)
	delete[] decodedBytes;
      }
      fBase64RemainderCount = newBase64RemainderCount;
      if (fBase64RemainderCount > 0) break; // because we know that we have more input bytes still to receive
    }
    
    // Look for the end of the message: <CR><LF><CR><LF>
    unsigned char *tmpPtr = fLastCRLF + 2;
    if (tmpPtr < fRequestBuffer) tmpPtr = fRequestBuffer;
    while (tmpPtr < &ptr[newBytesRead-1]) {
      if (*tmpPtr == '\r' && *(tmpPtr+1) == '\n') {
	if (tmpPtr - fLastCRLF == 2) { // This is it:
	  endOfMsg = True;
	  break;
	}
	fLastCRLF = tmpPtr;
      }
      ++tmpPtr;
    }
    
    fRequestBufferBytesLeft -= newBytesRead;
    fRequestBytesAlreadySeen += newBytesRead;
    
    if (!endOfMsg) break; // subsequent reads will be needed to complete the request
    
    // Parse the request string into command name and 'CSeq', then handle the command:
    fRequestBuffer[fRequestBytesAlreadySeen] = '\0';
    char cmdName[RTSP_PARAM_STRING_MAX];
    char urlPreSuffix[RTSP_PARAM_STRING_MAX];
    char urlSuffix[RTSP_PARAM_STRING_MAX];
    char cseq[RTSP_PARAM_STRING_MAX];
    unsigned contentLength;
    if (parseRTSPRequestString((char*)fRequestBuffer, fRequestBytesAlreadySeen,
			       cmdName, sizeof cmdName,
			       urlPreSuffix, sizeof urlPreSuffix,
			       urlSuffix, sizeof urlSuffix,
			       cseq, sizeof cseq,
			       contentLength)) {
#ifdef DEBUG
      fprintf(stderr, "parseRTSPRequestString() succeeded, returning cmdName \"%s\", urlPreSuffix \"%s\", urlSuffix \"%s\", CSeq \"%s\", Content-Length %u, with %d bytes following the message.\n", cmdName, urlPreSuffix, urlSuffix, cseq, contentLength, ptr + newBytesRead - (tmpPtr + 2));
#endif
      // If there was a "Content-Length:" header, then make sure we've received all of the data that it specified:
      if (ptr + newBytesRead < tmpPtr + 2 + contentLength) break; // we still need more data; subsequent reads will give it to us 
      
      if (strcmp(cmdName, "OPTIONS") == 0) {
	handleCmd_OPTIONS(cseq);
      } else if (strcmp(cmdName, "DESCRIBE") == 0) {
	handleCmd_DESCRIBE(cseq, urlPreSuffix, urlSuffix, (char const*)fRequestBuffer);
      } else if (strcmp(cmdName, "SETUP") == 0) {
	handleCmd_SETUP(cseq, urlPreSuffix, urlSuffix, (char const*)fRequestBuffer);
      } else if (strcmp(cmdName, "TEARDOWN") == 0
		 || strcmp(cmdName, "PLAY") == 0
		 || strcmp(cmdName, "PAUSE") == 0
		 || strcmp(cmdName, "GET_PARAMETER") == 0
		 || strcmp(cmdName, "SET_PARAMETER") == 0) {
	handleCmd_withinSession(cmdName, urlPreSuffix, urlSuffix, cseq, (char const*)fRequestBuffer);
      } else {
	handleCmd_notSupported(cseq);
      }
    } else {
#ifdef DEBUG
      fprintf(stderr, "parseRTSPRequestString() failed\n");
#endif
      // The request was not (valid) RTSP, but check for a special case: HTTP commands (for setting up RTSP-over-HTTP tunneling):
      char sessionCookie[RTSP_PARAM_STRING_MAX];
      char acceptStr[RTSP_PARAM_STRING_MAX];
      if (parseHTTPRequestString(cmdName, sizeof cmdName,
				 urlSuffix, sizeof urlPreSuffix,
				 sessionCookie, sizeof sessionCookie,
				 acceptStr, sizeof acceptStr)) {
#ifdef DEBUG
	fprintf(stderr, "parseHTTPRequestString() succeeded, returning cmdName \"%s\", urlSuffix \"%s\", sessionCookie \"%s\", acceptStr \"%s\"\n", cmdName, urlSuffix, sessionCookie, acceptStr);
#endif
	// Check that the HTTP command is valid for RTSP-over-HTTP tunneling: There must be a 'session cookie'.
	Boolean isValidHTTPCmd = True;
	if (sessionCookie[0] == '\0') {
	  // There was no "x-sessionCookie:" header.  If there was an "Accept: application/x-rtsp-tunnelled" header,
	  // then this is a bad tunneling request.  Otherwise, assume that it's an attempt to access the stream via HTTP.
	  if (strcmp(acceptStr, "application/x-rtsp-tunnelled") == 0) {
	    isValidHTTPCmd = False;
	  } else {
	    handleHTTPCmd_StreamingGET(urlSuffix, (char const*)fRequestBuffer);
	  }
	} else if (strcmp(cmdName, "GET") == 0) {
	  handleHTTPCmd_TunnelingGET(sessionCookie);
	} else if (strcmp(cmdName, "POST") == 0) {
	  // We might have received additional data following the HTTP "POST" command - i.e., the first Base64-encoded RTSP command.
	  // Check for this, and handle it if it exists:
	  unsigned char const* extraData = fLastCRLF+4;
	  unsigned extraDataSize = &fRequestBuffer[fRequestBytesAlreadySeen] - extraData;
	  if (handleHTTPCmd_TunnelingPOST(sessionCookie, extraData, extraDataSize)) {
	    // We don't respond to the "POST" command, and we go away:
	    fSessionIsActive = False;
	    break;
	  }
	} else {
	  isValidHTTPCmd = False;
	}
	if (!isValidHTTPCmd) {
	  handleHTTPCmd_notSupported();
	}
      } else {
#ifdef DEBUG
	fprintf(stderr, "parseHTTPRequestString() failed!\n");
#endif
	handleCmd_bad(cseq);
      }
    }
    
#ifdef DEBUG
    fprintf(stderr, "sending response: %s", fResponseBuffer);
#endif
    send(fClientOutputSocket, (char const*)fResponseBuffer, strlen((char*)fResponseBuffer), 0);
    
    if (strcmp(cmdName, "SETUP") == 0 && fStreamAfterSETUP) {
      // The client has asked for streaming to commence now, rather than after a
      // subsequent "PLAY" command.  So, simulate the effect of a "PLAY" command:
      handleCmd_withinSession("PLAY", urlPreSuffix, urlSuffix, cseq,
			      (char const*)fRequestBuffer);
    }
    
    resetRequestBuffer(); // to prepare for any subsequent request
  } while (0);

  --fRecursionCount;
  if (!fSessionIsActive) {
    if (fRecursionCount > 0) closeSockets(); else delete this;
    // Note: The "fRecursionCount" test is for a pathological situation where we got called recursively while handling a command.
    // In such a case we don't want to actually delete ourself until we leave the outermost call.
  }
}

// Handler routines for specific RTSP commands:

static char const* allowedCommandNames
= "OPTIONS, DESCRIBE, SETUP, TEARDOWN, PLAY, PAUSE, GET_PARAMETER, SET_PARAMETER";

void RTSPServer::RTSPClientSession::handleCmd_bad(char const* /*cseq*/) {
  // Don't do anything with "cseq", because it might be nonsense
  snprintf((char*)fResponseBuffer, sizeof fResponseBuffer,
	   "RTSP/1.0 400 Bad Request\r\n%sAllow: %s\r\n\r\n",
	   dateHeader(), allowedCommandNames);
}

void RTSPServer::RTSPClientSession::handleCmd_notSupported(char const* cseq) {
  snprintf((char*)fResponseBuffer, sizeof fResponseBuffer,
	   "RTSP/1.0 405 Method Not Allowed\r\nCSeq: %s\r\n%sAllow: %s\r\n\r\n",
	   cseq, dateHeader(), allowedCommandNames);
}

void RTSPServer::RTSPClientSession::handleCmd_notFound(char const* cseq) {
  snprintf((char*)fResponseBuffer, sizeof fResponseBuffer,
	   "RTSP/1.0 404 Stream Not Found\r\nCSeq: %s\r\n%s\r\n",
	   cseq, dateHeader());
  fSessionIsActive = False; // triggers deletion of ourself after responding
}

void RTSPServer::RTSPClientSession::handleCmd_unsupportedTransport(char const* cseq) {
  snprintf((char*)fResponseBuffer, sizeof fResponseBuffer,
	   "RTSP/1.0 461 Unsupported Transport\r\nCSeq: %s\r\n%s\r\n",
	   cseq, dateHeader());
  fSessionIsActive = False; // triggers deletion of ourself after responding
}

void RTSPServer::RTSPClientSession::handleCmd_OPTIONS(char const* cseq) {
  snprintf((char*)fResponseBuffer, sizeof fResponseBuffer,
	   "RTSP/1.0 200 OK\r\nCSeq: %s\r\n%sPublic: %s\r\n\r\n",
	   cseq, dateHeader(), allowedCommandNames);
}

void RTSPServer::RTSPClientSession
::handleCmd_DESCRIBE(char const* cseq,
		     char const* urlPreSuffix, char const* urlSuffix,
		     char const* fullRequestStr) {
  char* sdpDescription = NULL;
  char* rtspURL = NULL;
  do {
    char urlTotalSuffix[RTSP_PARAM_STRING_MAX];
    if (strlen(urlPreSuffix) + strlen(urlSuffix) + 2 > sizeof urlTotalSuffix) {
      handleCmd_bad(cseq);
      break;
    }
    urlTotalSuffix[0] = '\0';
    if (urlPreSuffix[0] != '\0') {
      strcat(urlTotalSuffix, urlPreSuffix);
      strcat(urlTotalSuffix, "/");
    }
    strcat(urlTotalSuffix, urlSuffix);
      
    if (!authenticationOK("DESCRIBE", cseq, urlTotalSuffix, fullRequestStr)) break;
    
    // We should really check that the request contains an "Accept:" #####
    // for "application/sdp", because that's what we're sending back #####
    
    // Begin by looking up the "ServerMediaSession" object for the specified "urlTotalSuffix":
    ServerMediaSession* session = fOurServer.lookupServerMediaSession(urlTotalSuffix);
    if (session == NULL) {
      handleCmd_notFound(cseq);
      break;
    }
    
    // Then, assemble a SDP description for this session:
    sdpDescription = session->generateSDPDescription();
    if (sdpDescription == NULL) {
      // This usually means that a file name that was specified for a
      // "ServerMediaSubsession" does not exist.
      snprintf((char*)fResponseBuffer, sizeof fResponseBuffer,
	       "RTSP/1.0 404 File Not Found, Or In Incorrect Format\r\n"
	       "CSeq: %s\r\n"
	       "%s\r\n",
	       cseq,
	       dateHeader());
      break;
    }
    unsigned sdpDescriptionSize = strlen(sdpDescription);
    
    // Also, generate our RTSP URL, for the "Content-Base:" header
    // (which is necessary to ensure that the correct URL gets used in
    // subsequent "SETUP" requests).
    rtspURL = fOurServer.rtspURL(session, fClientInputSocket);
    
    snprintf((char*)fResponseBuffer, sizeof fResponseBuffer,
	     "RTSP/1.0 200 OK\r\nCSeq: %s\r\n"
	     "%s"
	     "Content-Base: %s/\r\n"
	     "Content-Type: application/sdp\r\n"
	     "Content-Length: %d\r\n\r\n"
	     "%s",
	     cseq,
	     dateHeader(),
	     rtspURL,
	     sdpDescriptionSize,
	     sdpDescription);
  } while (0);

  delete[] sdpDescription;
  delete[] rtspURL;
}

typedef enum StreamingMode {
  RTP_UDP,
  RTP_TCP,
  RAW_UDP
} StreamingMode;

static void parseTransportHeader(char const* buf,
				 StreamingMode& streamingMode,
				 char*& streamingModeString,
				 char*& destinationAddressStr,
				 u_int8_t& destinationTTL,
				 portNumBits& clientRTPPortNum, // if UDP
				 portNumBits& clientRTCPPortNum, // if UDP
				 unsigned char& rtpChannelId, // if TCP
				 unsigned char& rtcpChannelId // if TCP
				 ) {
  // Initialize the result parameters to default values:
  streamingMode = RTP_UDP;
  streamingModeString = NULL;
  destinationAddressStr = NULL;
  destinationTTL = 255;
  clientRTPPortNum = 0;
  clientRTCPPortNum = 1;
  rtpChannelId = rtcpChannelId = 0xFF;

  portNumBits p1, p2;
  unsigned ttl, rtpCid, rtcpCid;

  // First, find "Transport:"
  while (1) {
    if (*buf == '\0') return; // not found
    if (_strncasecmp(buf, "Transport: ", 11) == 0) break;
    ++buf;
  }

  // Then, run through each of the fields, looking for ones we handle:
  char const* fields = buf + 11;
  char* field = strDupSize(fields);
  while (sscanf(fields, "%[^;]", field) == 1) {
    if (strcmp(field, "RTP/AVP/TCP") == 0) {
      streamingMode = RTP_TCP;
    } else if (strcmp(field, "RAW/RAW/UDP") == 0 ||
	       strcmp(field, "MP2T/H2221/UDP") == 0) {
      streamingMode = RAW_UDP;
      streamingModeString = strDup(field);
    } else if (_strncasecmp(field, "destination=", 12) == 0) {
      delete[] destinationAddressStr;
      destinationAddressStr = strDup(field+12);
    } else if (sscanf(field, "ttl%u", &ttl) == 1) {
      destinationTTL = (u_int8_t)ttl;
    } else if (sscanf(field, "client_port=%hu-%hu", &p1, &p2) == 2) {
	clientRTPPortNum = p1;
	clientRTCPPortNum = streamingMode == RAW_UDP ? 0 : p2; // ignore the second port number if the client asked for raw UDP
    } else if (sscanf(field, "client_port=%hu", &p1) == 1) {
	clientRTPPortNum = p1;
	clientRTCPPortNum = streamingMode == RAW_UDP ? 0 : p1 + 1;
    } else if (sscanf(field, "interleaved=%u-%u", &rtpCid, &rtcpCid) == 2) {
      rtpChannelId = (unsigned char)rtpCid;
      rtcpChannelId = (unsigned char)rtcpCid;
    }

    fields += strlen(field);
    while (*fields == ';') ++fields; // skip over separating ';' chars
    if (*fields == '\0' || *fields == '\r' || *fields == '\n') break;
  }
  delete[] field;
}

static Boolean parsePlayNowHeader(char const* buf) {
  // Find "x-playNow:" header, if present
  while (1) {
    if (*buf == '\0') return False; // not found
    if (_strncasecmp(buf, "x-playNow:", 10) == 0) break;
    ++buf;
  }

  return True;
}

void RTSPServer::RTSPClientSession
::handleCmd_SETUP(char const* cseq,
		  char const* urlPreSuffix, char const* urlSuffix,
		  char const* fullRequestStr) {
  // Normally, "urlPreSuffix" should be the session (stream) name, and "urlSuffix" should be the subsession (track) name.
  // However (being "liberal in what we accept"), we also handle 'aggregate' SETUP requests (i.e., without a track name),
  // in the special case where we have only a single track.  I.e., in this case, we also handle:
  //    "urlPreSuffix" is empty and "urlSuffix" is the session (stream) name, or
  //    "urlPreSuffix" concatenated with "urlSuffix" (with "/" inbetween) is the session (stream) name.
  char const* streamName = urlPreSuffix; // in the normal case
  char const* trackId = urlSuffix; // in the normal case
  char* concatenatedStreamName = NULL; // in the normal case

  do {
    // First, make sure the specified stream name exists:
    fOurServerMediaSession = fOurServer.lookupServerMediaSession(streamName);
    if (fOurServerMediaSession == NULL) {
      // Check for the special case (noted above), before we up:
      if (urlPreSuffix[0] == '\0') {
	streamName = urlSuffix;
      } else {
	concatenatedStreamName = new char[strlen(urlPreSuffix) + strlen(urlSuffix) + 2]; // allow for the "/" and the trailing '\0'
	sprintf(concatenatedStreamName, "%s/%s", urlPreSuffix, urlSuffix);
	streamName = concatenatedStreamName;
      }
      trackId = NULL;

      // Check again:
      fOurServerMediaSession = fOurServer.lookupServerMediaSession(streamName);
    }
    if (fOurServerMediaSession == NULL) {
      handleCmd_notFound(cseq);
      break;
    }

    fOurServerMediaSession->incrementReferenceCount();

    if (fStreamStates == NULL) {
      // This is the first "SETUP" for this session.  Set up our array of states for all of this session's subsessions (tracks):
      ServerMediaSubsessionIterator iter(*fOurServerMediaSession);
      for (fNumStreamStates = 0; iter.next() != NULL; ++fNumStreamStates) {} // begin by counting the number of subsessions (tracks)

      fStreamStates = new struct streamState[fNumStreamStates];

      iter.reset();
      ServerMediaSubsession* subsession;
      for (unsigned i = 0; i < fNumStreamStates; ++i) {
	subsession = iter.next();
	fStreamStates[i].subsession = subsession;
	fStreamStates[i].streamToken = NULL; // for now; it may be changed by the "getStreamParameters()" call that comes later
      }
    }

    // Look up information for the specified subsession (track):
    ServerMediaSubsession* subsession = NULL;
    unsigned streamNum;
    if (trackId != NULL && trackId[0] != '\0') { // normal case
      for (streamNum = 0; streamNum < fNumStreamStates; ++streamNum) {
	subsession = fStreamStates[streamNum].subsession;
	if (subsession != NULL && strcmp(trackId, subsession->trackId()) == 0) break;
      }
      if (streamNum >= fNumStreamStates) {
	// The specified track id doesn't exist, so this request fails:
	handleCmd_notFound(cseq);
	break;
      }
    } else {
      // Weird case: there was no track id in the URL.
      // This works only if we have only one subsession:
      if (fNumStreamStates != 1) {
	handleCmd_bad(cseq);
	break;
      }
      streamNum = 0;
      subsession = fStreamStates[streamNum].subsession;
    }
    // ASSERT: subsession != NULL

    // Look for a "Transport:" header in the request string, to extract client parameters:
    StreamingMode streamingMode;
    char* streamingModeString = NULL; // set when RAW_UDP streaming is specified
    char* clientsDestinationAddressStr;
    u_int8_t clientsDestinationTTL;
    portNumBits clientRTPPortNum, clientRTCPPortNum;
    unsigned char rtpChannelId, rtcpChannelId;
    parseTransportHeader(fullRequestStr, streamingMode, streamingModeString,
			 clientsDestinationAddressStr, clientsDestinationTTL,
			 clientRTPPortNum, clientRTCPPortNum,
			 rtpChannelId, rtcpChannelId);
    if (streamingMode == RTP_TCP && rtpChannelId == 0xFF ||
	streamingMode != RTP_TCP && fClientOutputSocket != fClientInputSocket) {
      // An anomolous situation, caused by a buggy client.  Either:
      //     1/ TCP streaming was requested, but with no "interleaving=" fields.  (QuickTime Player sometimes does this.), or
      //     2/ TCP streaming was not requested, but we're doing RTSP-over-HTTP tunneling (which implies TCP streaming).
      // In either case, we assume TCP streaming, and set the RTP and RTCP channel ids to proper values:
      streamingMode = RTP_TCP;
      rtpChannelId = fTCPStreamIdCount; rtcpChannelId = fTCPStreamIdCount+1;
    }
    fTCPStreamIdCount += 2;

    Port clientRTPPort(clientRTPPortNum);
    Port clientRTCPPort(clientRTCPPortNum);

    // Next, check whether a "Range:" header is present in the request.
    // This isn't legal, but some clients do this to combine "SETUP" and "PLAY":
    double rangeStart = 0.0, rangeEnd = 0.0;
    fStreamAfterSETUP = parseRangeHeader(fullRequestStr, rangeStart, rangeEnd) || parsePlayNowHeader(fullRequestStr);

    // Then, get server parameters from the 'subsession':
    int tcpSocketNum = streamingMode == RTP_TCP ? fClientOutputSocket : -1;
    netAddressBits destinationAddress = 0;
    u_int8_t destinationTTL = 255;
#ifdef RTSP_ALLOW_CLIENT_DESTINATION_SETTING
    if (clientsDestinationAddressStr != NULL) {
      // Use the client-provided "destination" address.
      // Note: This potentially allows the server to be used in denial-of-service
      // attacks, so don't enable this code unless you're sure that clients are
      // trusted.
      destinationAddress = our_inet_addr(clientsDestinationAddressStr);
    }
    // Also use the client-provided TTL.
    destinationTTL = clientsDestinationTTL;
#endif
    delete[] clientsDestinationAddressStr;
    Port serverRTPPort(0);
    Port serverRTCPPort(0);

    // Make sure that we transmit on the same interface that's used by the client (in case we're a multi-homed server):
    struct sockaddr_in sourceAddr; SOCKLEN_T namelen = sizeof sourceAddr;
    getsockname(fClientInputSocket, (struct sockaddr*)&sourceAddr, &namelen);
    netAddressBits origSendingInterfaceAddr = SendingInterfaceAddr;
    netAddressBits origReceivingInterfaceAddr = ReceivingInterfaceAddr;
    // NOTE: The following might not work properly, so we ifdef it out for now:
#ifdef HACK_FOR_MULTIHOMED_SERVERS
    ReceivingInterfaceAddr = SendingInterfaceAddr = sourceAddr.sin_addr.s_addr;
#endif

    subsession->getStreamParameters(fOurSessionId, fClientAddr.sin_addr.s_addr,
				    clientRTPPort, clientRTCPPort,
				    tcpSocketNum, rtpChannelId, rtcpChannelId,
				    destinationAddress, destinationTTL, fIsMulticast,
				    serverRTPPort, serverRTCPPort,
				    fStreamStates[streamNum].streamToken);
    SendingInterfaceAddr = origSendingInterfaceAddr;
    ReceivingInterfaceAddr = origReceivingInterfaceAddr;
    
    AddressString destAddrStr(destinationAddress);
    AddressString sourceAddrStr(sourceAddr);
    if (fIsMulticast) {
      switch (streamingMode) {
        case RTP_UDP:
	  snprintf((char*)fResponseBuffer, sizeof fResponseBuffer,
		   "RTSP/1.0 200 OK\r\n"
		   "CSeq: %s\r\n"
		   "%s"
		   "Transport: RTP/AVP;multicast;destination=%s;source=%s;port=%d-%d;ttl=%d\r\n"
		   "Session: %08X\r\n\r\n",
		   cseq,
		   dateHeader(),
		   destAddrStr.val(), sourceAddrStr.val(), ntohs(serverRTPPort.num()), ntohs(serverRTCPPort.num()), destinationTTL,
		   fOurSessionId);
	  break;
        case RTP_TCP:
	  // multicast streams can't be sent via TCP
	  handleCmd_unsupportedTransport(cseq);
	  break;
        case RAW_UDP:
	  snprintf((char*)fResponseBuffer, sizeof fResponseBuffer,
		   "RTSP/1.0 200 OK\r\n"
		   "CSeq: %s\r\n"
		   "%s"
		   "Transport: %s;multicast;destination=%s;source=%s;port=%d;ttl=%d\r\n"
		   "Session: %08X\r\n\r\n",
		   cseq,
		   dateHeader(),
		   streamingModeString, destAddrStr.val(), sourceAddrStr.val(), ntohs(serverRTPPort.num()), destinationTTL,
		   fOurSessionId);
	  break;
      }
    } else {
      switch (streamingMode) {
        case RTP_UDP: {
	  snprintf((char*)fResponseBuffer, sizeof fResponseBuffer,
		   "RTSP/1.0 200 OK\r\n"
		   "CSeq: %s\r\n"
		   "%s"
		   "Transport: RTP/AVP;unicast;destination=%s;source=%s;client_port=%d-%d;server_port=%d-%d\r\n"
		   "Session: %08X\r\n\r\n",
		   cseq,
		   dateHeader(),
		   destAddrStr.val(), sourceAddrStr.val(), ntohs(clientRTPPort.num()), ntohs(clientRTCPPort.num()), ntohs(serverRTPPort.num()), ntohs(serverRTCPPort.num()),
		   fOurSessionId);
	  break;
	}
        case RTP_TCP: {
	  snprintf((char*)fResponseBuffer, sizeof fResponseBuffer,
		   "RTSP/1.0 200 OK\r\n"
		   "CSeq: %s\r\n"
		   "%s"
		   "Transport: RTP/AVP/TCP;unicast;destination=%s;source=%s;interleaved=%d-%d\r\n"
		   "Session: %08X\r\n\r\n",
		   cseq,
		   dateHeader(),
		   destAddrStr.val(), sourceAddrStr.val(), rtpChannelId, rtcpChannelId,
		   fOurSessionId);
	  break;
	}
        case RAW_UDP: {
	  snprintf((char*)fResponseBuffer, sizeof fResponseBuffer,
		   "RTSP/1.0 200 OK\r\n"
		   "CSeq: %s\r\n"
		   "%s"
		   "Transport: %s;unicast;destination=%s;source=%s;client_port=%d;server_port=%d\r\n"
		   "Session: %08X\r\n\r\n",
		   cseq,
		   dateHeader(),
		   streamingModeString, destAddrStr.val(), sourceAddrStr.val(), ntohs(clientRTPPort.num()), ntohs(serverRTPPort.num()),
		   fOurSessionId);
	  break;
	}
      }
    }
    delete[] streamingModeString;
  } while (0);

  delete[] concatenatedStreamName;
}

void RTSPServer::RTSPClientSession
::handleCmd_withinSession(char const* cmdName,
			  char const* urlPreSuffix, char const* urlSuffix,
			  char const* cseq, char const* fullRequestStr) {
  // This will either be:
  // - an operation on the entire server, if "urlPreSuffix" is "", and "urlSuffix" is "*" (i.e., the special "*" URL), or
  // - a non-aggregated operation, if "urlPreSuffix" is the session (stream)
  //   name and "urlSuffix" is the subsession (track) name, or
  // - an aggregated operation, if "urlSuffix" is the session (stream) name,
  //   or "urlPreSuffix" is the session (stream) name, and "urlSuffix" is empty,
  //   or "urlPreSuffix" and "urlSuffix" are both nonempty, but when concatenated, (with "/") form the session (stream) name.
  // Begin by figuring out which of these it is:
  ServerMediaSubsession* subsession;
  if (urlPreSuffix[0] == '\0' && urlSuffix[0] == '*' && urlSuffix[1] == '\0') {
    // An operation on the entire server.  This works only for GET_PARAMETER and SET_PARAMETER:
    if (strcmp(cmdName, "GET_PARAMETER") == 0) {
      handleCmd_GET_PARAMETER(NULL, cseq, fullRequestStr);
    } else if (strcmp(cmdName, "SET_PARAMETER") == 0) {
      handleCmd_SET_PARAMETER(NULL, cseq, fullRequestStr);
    } else {
      handleCmd_notSupported(cseq);
    }
    return;
  } else if (fOurServerMediaSession == NULL) { // There wasn't a previous SETUP!
    handleCmd_notSupported(cseq);
    return;
  } else if (urlSuffix[0] != '\0' && strcmp(fOurServerMediaSession->streamName(), urlPreSuffix) == 0) {
    // Non-aggregated operation.
    // Look up the media subsession whose track id is "urlSuffix":
    ServerMediaSubsessionIterator iter(*fOurServerMediaSession);
    while ((subsession = iter.next()) != NULL) {
      if (strcmp(subsession->trackId(), urlSuffix) == 0) break; // success
    }
    if (subsession == NULL) { // no such track!
      handleCmd_notFound(cseq);
      return;
    }
  } else if (strcmp(fOurServerMediaSession->streamName(), urlSuffix) == 0 ||
	     (urlSuffix[0] == '\0' && strcmp(fOurServerMediaSession->streamName(), urlPreSuffix) == 0)) {
    // Aggregated operation
    subsession = NULL;
  } else if (urlPreSuffix[0] != '\0' && urlSuffix[0] != '\0') {
    // Aggregated operation, if <urlPreSuffix>/<urlSuffix> is the session (stream) name:
    unsigned const urlPreSuffixLen = strlen(urlPreSuffix);
    if (strncmp(fOurServerMediaSession->streamName(), urlPreSuffix, urlPreSuffixLen) == 0 &&
	fOurServerMediaSession->streamName()[urlPreSuffixLen] == '/' &&
	strcmp(&(fOurServerMediaSession->streamName())[urlPreSuffixLen+1], urlSuffix) == 0) {
      subsession = NULL;
    } else {
      handleCmd_notFound(cseq);
      return;
    }
  } else { // the request doesn't match a known stream and/or track at all!
    handleCmd_notFound(cseq);
    return;
  }

  if (strcmp(cmdName, "TEARDOWN") == 0) {
    handleCmd_TEARDOWN(subsession, cseq);
  } else if (strcmp(cmdName, "PLAY") == 0) {
    handleCmd_PLAY(subsession, cseq, fullRequestStr);
  } else if (strcmp(cmdName, "PAUSE") == 0) {
    handleCmd_PAUSE(subsession, cseq);
  } else if (strcmp(cmdName, "GET_PARAMETER") == 0) {
    handleCmd_GET_PARAMETER(subsession, cseq, fullRequestStr);
  } else if (strcmp(cmdName, "SET_PARAMETER") == 0) {
    handleCmd_SET_PARAMETER(subsession, cseq, fullRequestStr);
  }
}

void RTSPServer::RTSPClientSession
::handleCmd_TEARDOWN(ServerMediaSubsession* /*subsession*/, char const* cseq) {
  snprintf((char*)fResponseBuffer, sizeof fResponseBuffer,
	   "RTSP/1.0 200 OK\r\nCSeq: %s\r\n%s\r\n",
	   cseq, dateHeader());
  fSessionIsActive = False; // triggers deletion of ourself after responding
}

static Boolean parseScaleHeader(char const* buf, float& scale) {
  // Initialize the result parameter to a default value:
  scale = 1.0;

  // First, find "Scale:"
  while (1) {
    if (*buf == '\0') return False; // not found
    if (_strncasecmp(buf, "Scale: ", 7) == 0) break;
    ++buf;
  }

  // Then, run through each of the fields, looking for ones we handle:
  char const* fields = buf + 7;
  while (*fields == ' ') ++fields;
  float sc;
  if (sscanf(fields, "%f", &sc) == 1) {
    scale = sc;
  } else {
    return False; // The header is malformed
  }

  return True;
}

void RTSPServer::RTSPClientSession
  ::handleCmd_PLAY(ServerMediaSubsession* subsession, char const* cseq,
		   char const* fullRequestStr) {
  char* rtspURL = fOurServer.rtspURL(fOurServerMediaSession, fClientInputSocket);
  unsigned rtspURLSize = strlen(rtspURL);

  // Parse the client's "Scale:" header, if any:
  float scale;
  Boolean sawScaleHeader = parseScaleHeader(fullRequestStr, scale);

  // Try to set the stream's scale factor to this value:
  if (subsession == NULL /*aggregate op*/) {
    fOurServerMediaSession->testScaleFactor(scale);
  } else {
    subsession->testScaleFactor(scale);
  }

  char buf[100];
  char* scaleHeader;
  if (!sawScaleHeader) {
    buf[0] = '\0'; // Because we didn't see a Scale: header, don't send one back
  } else {
    sprintf(buf, "Scale: %f\r\n", scale);
  }
  scaleHeader = strDup(buf);

  // Parse the client's "Range:" header, if any:
  double rangeStart = 0.0, rangeEnd = 0.0;
  Boolean sawRangeHeader = parseRangeHeader(fullRequestStr, rangeStart, rangeEnd);

  // Use this information, plus the stream's duration (if known), to create
  // our own "Range:" header, for the response:
  float duration = subsession == NULL /*aggregate op*/
    ? fOurServerMediaSession->duration() : subsession->duration();
  if (duration < 0.0) {
    // We're an aggregate PLAY, but the subsessions have different durations.
    // Use the largest of these durations in our header
    duration = -duration;
  }

  // Make sure that "rangeStart" and "rangeEnd" (from the client's "Range:" header) have sane values
  // before we send back our own "Range:" header in our response:
  if (rangeStart < 0.0) rangeStart = 0.0;
  else if (rangeStart > duration) rangeStart = duration;
  if (rangeEnd < 0.0) rangeEnd = 0.0;
  else if (rangeEnd > duration) rangeEnd = duration;
  if ((scale > 0.0 && rangeStart > rangeEnd && rangeEnd > 0.0) ||
      (scale < 0.0 && rangeStart < rangeEnd)) {
    // "rangeStart" and "rangeEnd" were the wrong way around; swap them:
    double tmp = rangeStart;
    rangeStart = rangeEnd;
    rangeEnd = tmp;
  }

  // Create a "RTP-Info:" line.  It will get filled in from each subsession's state:
  char const* rtpInfoFmt =
    "%s" // "RTP-Info:", plus any preceding rtpInfo items
    "%s" // comma separator, if needed
    "url=%s/%s"
    ";seq=%d"
    ";rtptime=%u"
    ;
  unsigned rtpInfoFmtSize = strlen(rtpInfoFmt);
  char* rtpInfo = strDup("RTP-Info: ");
  unsigned i, numRTPInfoItems = 0;

  // Do any required seeking/scaling on each subsession, before starting streaming:
  for (i = 0; i < fNumStreamStates; ++i) {
    if (subsession == NULL /* means: aggregated operation */
	|| subsession == fStreamStates[i].subsession) {
      if (sawScaleHeader) {
	fStreamStates[i].subsession->setStreamScale(fOurSessionId,
						    fStreamStates[i].streamToken,
						    scale);
      }
      if (sawRangeHeader) {
	double streamDuration = 0.0; // by default; means: stream until the end of the media
	if (rangeEnd > 0.0 && (rangeEnd+0.001) < duration) { // the 0.001 is because we limited the values to 3 decimal places
	  // We want the stream to end early.  Set the duration we want:
	  streamDuration = rangeEnd - rangeStart;
	  if (streamDuration < 0.0) streamDuration = -streamDuration; // should happen only if scale < 0.0
	}
	u_int64_t numBytes;
	fStreamStates[i].subsession->seekStream(fOurSessionId,
						fStreamStates[i].streamToken,
						rangeStart, streamDuration, numBytes);
      }
    }
  }

  // Create the "Range:" header that we'll send back in our response.
  // (Note that we do this after seeking, in case the seeking operation changed the range start time.)
  char* rangeHeader;
  if (!sawRangeHeader) {
    buf[0] = '\0'; // Because we didn't see a Range: header, don't send one back
  } else if (rangeEnd == 0.0 && scale >= 0.0) {
    sprintf(buf, "Range: npt=%.3f-\r\n", rangeStart);
  } else {
    sprintf(buf, "Range: npt=%.3f-%.3f\r\n", rangeStart, rangeEnd);
  }
  rangeHeader = strDup(buf);

  // Now, start streaming:
  for (i = 0; i < fNumStreamStates; ++i) {
    if (subsession == NULL /* means: aggregated operation */
	|| subsession == fStreamStates[i].subsession) {
      unsigned short rtpSeqNum = 0;
      unsigned rtpTimestamp = 0;
      fStreamStates[i].subsession->startStream(fOurSessionId,
					       fStreamStates[i].streamToken,
					       (TaskFunc*)noteClientLiveness, this,
					       rtpSeqNum, rtpTimestamp,
					       handleAlternativeRequestByte, this);
      const char *urlSuffix = fStreamStates[i].subsession->trackId();
      char* prevRTPInfo = rtpInfo;
      unsigned rtpInfoSize = rtpInfoFmtSize
	+ strlen(prevRTPInfo)
	+ 1
	+ rtspURLSize + strlen(urlSuffix)
	+ 5 /*max unsigned short len*/
	+ 10 /*max unsigned (32-bit) len*/
	+ 2 /*allows for trailing \r\n at final end of string*/;
      rtpInfo = new char[rtpInfoSize];
      sprintf(rtpInfo, rtpInfoFmt,
	      prevRTPInfo,
	      numRTPInfoItems++ == 0 ? "" : ",",
	      rtspURL, urlSuffix,
	      rtpSeqNum,
	      rtpTimestamp
	      );
      delete[] prevRTPInfo;
    }
  }
  if (numRTPInfoItems == 0) {
    rtpInfo[0] = '\0';
  } else {
    unsigned rtpInfoLen = strlen(rtpInfo);
    rtpInfo[rtpInfoLen] = '\r';
    rtpInfo[rtpInfoLen+1] = '\n';
    rtpInfo[rtpInfoLen+2] = '\0';
  }

  // Fill in the response:
  snprintf((char*)fResponseBuffer, sizeof fResponseBuffer,
	   "RTSP/1.0 200 OK\r\n"
	   "CSeq: %s\r\n"
	   "%s"
	   "%s"
	   "%s"
	   "Session: %08X\r\n"
	   "%s\r\n",
	   cseq,
	   dateHeader(),
	   scaleHeader,
	   rangeHeader,
	   fOurSessionId,
	   rtpInfo);
  delete[] rtpInfo; delete[] rangeHeader;
  delete[] scaleHeader; delete[] rtspURL;
}

void RTSPServer::RTSPClientSession
  ::handleCmd_PAUSE(ServerMediaSubsession* subsession, char const* cseq) {
  for (unsigned i = 0; i < fNumStreamStates; ++i) {
    if (subsession == NULL /* means: aggregated operation */
	|| subsession == fStreamStates[i].subsession) {
      fStreamStates[i].subsession->pauseStream(fOurSessionId,
					       fStreamStates[i].streamToken);
    }
  }
  snprintf((char*)fResponseBuffer, sizeof fResponseBuffer,
	   "RTSP/1.0 200 OK\r\nCSeq: %s\r\n%sSession: %08X\r\n\r\n",
	   cseq, dateHeader(), fOurSessionId);
}

void RTSPServer::RTSPClientSession
::handleCmd_GET_PARAMETER(ServerMediaSubsession* /*subsession*/, char const* cseq,
			  char const* /*fullRequestStr*/) {
  // By default, we implement "GET_PARAMETER" just as a 'keep alive', and send back an empty response.
  // (If you want to handle "GET_PARAMETER" properly, you can do so by defining a subclass of "RTSPServer"
  // and "RTSPServer::RTSPClientSession", and then reimplement this virtual function in your subclass.)
  snprintf((char*)fResponseBuffer, sizeof fResponseBuffer,
	   "RTSP/1.0 200 OK\r\nCSeq: %s\r\n%sSession: %08X\r\n\r\n",
	   cseq, dateHeader(), fOurSessionId);
}

void RTSPServer::RTSPClientSession
::handleCmd_SET_PARAMETER(ServerMediaSubsession* /*subsession*/, char const* cseq,
			  char const* /*fullRequestStr*/) {
  // By default, we implement "SET_PARAMETER" just as a 'keep alive', and send back an empty response.
  // (If you want to handle "SET_PARAMETER" properly, you can do so by defining a subclass of "RTSPServer"
  // and "RTSPServer::RTSPClientSession", and then reimplement this virtual function in your subclass.)
  snprintf((char*)fResponseBuffer, sizeof fResponseBuffer,
	   "RTSP/1.0 200 OK\r\nCSeq: %s\r\n%sSession: %08X\r\n\r\n",
	   cseq, dateHeader(), fOurSessionId);
}

static void lookForHeader(char const* headerName, char const* source, unsigned sourceLen, char* resultStr, unsigned resultMaxSize) {
  resultStr[0] = '\0';  // by default, return an empty string
  unsigned headerNameLen = strlen(headerName);
  for (int i = 0; i < (int)(sourceLen-headerNameLen); ++i) {
    if (strncmp(&source[i], headerName, headerNameLen) == 0 && source[i+headerNameLen] == ':') {
      // We found the header.  Skip over any whitespace, then copy the rest of the line to "resultStr":
      for (i += headerNameLen+1; i < (int)sourceLen && (source[i] == ' ' || source[i] == '\t'); ++i) {}
      for (unsigned j = i; j < sourceLen; ++j) {
	if (source[j] == '\r' || source[j] == '\n') {
	  // We've found the end of the line.  Copy it to the result (if it will fit):
	  if (j-i+1 > resultMaxSize) break;
	  char const* resultSource = &source[i];
	  char const* resultSourceEnd = &source[j];
	  while (resultSource < resultSourceEnd) *resultStr++ = *resultSource++;
	  *resultStr = '\0';
	  break;
	}
      }
    }
  }
}

Boolean RTSPServer::RTSPClientSession::parseHTTPRequestString(char* resultCmdName, unsigned resultCmdNameMaxSize,
							      char* urlSuffix, unsigned urlSuffixMaxSize,
							      char* sessionCookie, unsigned sessionCookieMaxSize,
							      char* acceptStr, unsigned acceptStrMaxSize) {
  // Check for the limited HTTP requests that we expect for specifying RTSP-over-HTTP tunneling.
  // This parser is currently rather dumb; it should be made smarter #####
  char const* reqStr = (char const*)fRequestBuffer;
  unsigned const reqStrSize = fRequestBytesAlreadySeen;

  // Read everything up to the first space as the command name:
  Boolean parseSucceeded = False;
  unsigned i;
  for (i = 0; i < resultCmdNameMaxSize-1 && i < reqStrSize; ++i) {
    char c = reqStr[i];
    if (c == ' ' || c == '\t') {
      parseSucceeded = True;
      break;
    }

    resultCmdName[i] = c;
  }
  resultCmdName[i] = '\0';
  if (!parseSucceeded) return False;

  // Look for the string "HTTP/", before the first \r or \n:
  parseSucceeded = False;
  for (; i < reqStrSize-5 && reqStr[i] != '\r' && reqStr[i] != '\n'; ++i) {
    if (reqStr[i] == 'H' && reqStr[i+1] == 'T' && reqStr[i+2]== 'T' && reqStr[i+3]== 'P' && reqStr[i+4]== '/') {
      i += 5; // to advance past the "HTTP/"
      parseSucceeded = True;
      break;
    }
  }
  if (!parseSucceeded) return False;

  // Get the 'URL suffix' that occurred before this:
  unsigned k = i-6;
  while (k > 0 && reqStr[k] == ' ') --k; // back up over white space
  unsigned j = k;
  while (j > 0 && reqStr[j] != ' ' && reqStr[j] != '/') --j;
  // The URL suffix is in position (j,k]:
  if (k - j + 1 > urlSuffixMaxSize) return False; // there's no room> 
  unsigned n = 0;
  while (++j <= k) urlSuffix[n++] = reqStr[j];
  urlSuffix[n] = '\0';

  // Look for various headers that we're interested in:
  lookForHeader("x-sessioncookie", &reqStr[i], reqStrSize-i, sessionCookie, sessionCookieMaxSize);
  lookForHeader("Accept", &reqStr[i], reqStrSize-i, acceptStr, acceptStrMaxSize);

  return True;
}

void RTSPServer::RTSPClientSession::handleHTTPCmd_notSupported() {
  snprintf((char*)fResponseBuffer, sizeof fResponseBuffer,
	   "HTTP/1.0 405 Method Not Allowed\r\n%s\r\n\r\n",
	   dateHeader());
}

void RTSPServer::RTSPClientSession::handleHTTPCmd_notFound() {
  snprintf((char*)fResponseBuffer, sizeof fResponseBuffer,
	   "HTTP/1.0 404 Not Found\r\n%s\r\n\r\n",
	   dateHeader());
}

void RTSPServer::RTSPClientSession::handleHTTPCmd_TunnelingGET(char const* sessionCookie) {
  // Record ourself as having this 'session cookie', so that a subsequent HTTP "POST" command (with the same 'session cookie')
  // can find us:
  if (fOurServer.fClientSessionsForHTTPTunneling == NULL) {
    fOurServer.fClientSessionsForHTTPTunneling = HashTable::create(STRING_HASH_KEYS);
  }
  fOurServer.fClientSessionsForHTTPTunneling->Add(sessionCookie, (void*)this);
#ifdef DEBUG
  fprintf(stderr, "Handled HTTP \"GET\" request (client output socket: %d)\n", fClientOutputSocket);
#endif

  // Construct our response:
  snprintf((char*)fResponseBuffer, sizeof fResponseBuffer,
	   "HTTP/1.0 200 OK\r\n"
	   "Date: Thu, 19 Aug 1982 18:30:00 GMT\r\n"
	   "Cache-Control: no-cache\r\n"
	   "Pragma: no-cache\r\n"
	   "Content-Type: application/x-rtsp-tunnelled\r\n"
	   "\r\n");
}

Boolean RTSPServer::RTSPClientSession
::handleHTTPCmd_TunnelingPOST(char const* sessionCookie, unsigned char const* extraData, unsigned extraDataSize) {
  // Use the "sessionCookie" string to look up the separate "RTSPClientSession" object that should have been used to handle
  // an earlier HTTP "GET" request:
  RTSPServer::RTSPClientSession* prevClientSession
    = (RTSPServer::RTSPClientSession*)(fOurServer.fClientSessionsForHTTPTunneling->Lookup(sessionCookie));
  if (prevClientSession == NULL) {
    // There was no previous HTTP "GET" request; treat this "POST" request as bad:
    handleHTTPCmd_notSupported();
    fSessionIsActive = False; // triggers deletion of ourself
    return False;
  }
#ifdef DEBUG
  fprintf(stderr, "Handled HTTP \"POST\" request (client input socket: %d)\n", fClientInputSocket);
#endif

  // Change the previous "RTSPClientSession" object's input socket to ours.  It will be used for subsequent requests:
  prevClientSession->changeClientInputSocket(fClientInputSocket, extraData, extraDataSize);
  fClientInputSocket = fClientOutputSocket = -1; // so the socket doesn't get closed when we get deleted
  return True;
}

void RTSPServer::RTSPClientSession::handleHTTPCmd_StreamingGET(char const* /*urlSuffix*/, char const* /*fullRequestStr*/) {
  // By default, we don't support requests to access streams via HTTP:
  handleHTTPCmd_notSupported();
}

static Boolean parseAuthorizationHeader(char const* buf,
					char const*& username,
					char const*& realm,
					char const*& nonce, char const*& uri,
					char const*& response) {
  // Initialize the result parameters to default values:
  username = realm = nonce = uri = response = NULL;

  // First, find "Authorization:"
  while (1) {
    if (*buf == '\0') return False; // not found
    if (_strncasecmp(buf, "Authorization: Digest ", 22) == 0) break;
    ++buf;
  }

  // Then, run through each of the fields, looking for ones we handle:
  char const* fields = buf + 22;
  while (*fields == ' ') ++fields;
  char* parameter = strDupSize(fields);
  char* value = strDupSize(fields);
  while (1) {
    value[0] = '\0';
    if (sscanf(fields, "%[^=]=\"%[^\"]\"", parameter, value) != 2 &&
	sscanf(fields, "%[^=]=\"\"", parameter) != 1) {
      break;
    }
    if (strcmp(parameter, "username") == 0) {
      username = strDup(value);
    } else if (strcmp(parameter, "realm") == 0) {
      realm = strDup(value);
    } else if (strcmp(parameter, "nonce") == 0) {
      nonce = strDup(value);
    } else if (strcmp(parameter, "uri") == 0) {
      uri = strDup(value);
    } else if (strcmp(parameter, "response") == 0) {
      response = strDup(value);
    }

    fields += strlen(parameter) + 2 /*="*/ + strlen(value) + 1 /*"*/;
    while (*fields == ',' || *fields == ' ') ++fields;
        // skip over any separating ',' and ' ' chars
    if (*fields == '\0' || *fields == '\r' || *fields == '\n') break;
  }
  delete[] parameter; delete[] value;
  return True;
}

Boolean RTSPServer::RTSPClientSession
::authenticationOK(char const* cmdName, char const* cseq,
		   char const* urlSuffix, char const* fullRequestStr) {

  if (!fOurServer.specialClientAccessCheck(fClientInputSocket, fClientAddr, urlSuffix)) {
    snprintf((char*)fResponseBuffer, sizeof fResponseBuffer,
             "RTSP/1.0 401 Unauthorized\r\n"
             "CSeq: %s\r\n"
             "%s"
             "\r\n",
             cseq, dateHeader());
    return False;
  }

  // If we weren't set up with an authentication database, we're OK:
  if (fOurServer.fAuthDB == NULL) return True;

  char const* username = NULL; char const* realm = NULL; char const* nonce = NULL;
  char const* uri = NULL; char const* response = NULL;
  Boolean success = False;

  do {
    // To authenticate, we first need to have a nonce set up
    // from a previous attempt:
    if (fCurrentAuthenticator.nonce() == NULL) break;

    // Next, the request needs to contain an "Authorization:" header,
    // containing a username, (our) realm, (our) nonce, uri,
    // and response string:
    if (!parseAuthorizationHeader(fullRequestStr,
				  username, realm, nonce, uri, response)
	|| username == NULL
	|| realm == NULL || strcmp(realm, fCurrentAuthenticator.realm()) != 0
	|| nonce == NULL || strcmp(nonce, fCurrentAuthenticator.nonce()) != 0
	|| uri == NULL || response == NULL) {
      break;
    }

    // Next, the username has to be known to us:
    char const* password = fOurServer.fAuthDB->lookupPassword(username);
#ifdef DEBUG
    fprintf(stderr, "lookupPassword(%s) returned password %s\n", username, password);
#endif
    if (password == NULL) break;
    fCurrentAuthenticator.
      setUsernameAndPassword(username, password,
			     fOurServer.fAuthDB->passwordsAreMD5());

    // Finally, compute a digest response from the information that we have,
    // and compare it to the one that we were given:
    char const* ourResponse
      = fCurrentAuthenticator.computeDigestResponse(cmdName, uri);
    success = (strcmp(ourResponse, response) == 0);
    fCurrentAuthenticator.reclaimDigestResponse(ourResponse);
  } while (0);

  delete[] (char*)username; delete[] (char*)realm; delete[] (char*)nonce;
  delete[] (char*)uri; delete[] (char*)response;
  if (success) return True;

  // If we get here, there was some kind of authentication failure.
  // Send back a "401 Unauthorized" response, with a new random nonce:
  fCurrentAuthenticator.setRealmAndRandomNonce(fOurServer.fAuthDB->realm());
  snprintf((char*)fResponseBuffer, sizeof fResponseBuffer,
	   "RTSP/1.0 401 Unauthorized\r\n"
	   "CSeq: %s\r\n"
	   "%s"
	   "WWW-Authenticate: Digest realm=\"%s\", nonce=\"%s\"\r\n\r\n",
	   cseq,
	   dateHeader(),
	   fCurrentAuthenticator.realm(), fCurrentAuthenticator.nonce());
  return False;
}

void RTSPServer::RTSPClientSession::noteLiveness() {
#ifdef DEBUG
  fprintf(stderr, "Liveness indication from client at %s\n", AddressString(fClientAddr).val());
#endif
  if (fOurServer.fReclamationTestSeconds > 0) {
    envir().taskScheduler()
      .rescheduleDelayedTask(fLivenessCheckTask,
			     fOurServer.fReclamationTestSeconds*1000000,
			     (TaskFunc*)livenessTimeoutTask, this);
  }
}

void RTSPServer::RTSPClientSession
::noteClientLiveness(RTSPClientSession* clientSession) {
  clientSession->noteLiveness();
}

void RTSPServer::RTSPClientSession
::livenessTimeoutTask(RTSPClientSession* clientSession) {
  // If this gets called, the client session is assumed to have timed out,
  // so delete it:
#ifdef DEBUG
  fprintf(stderr, "RTSP client session from %s has timed out (due to inactivity)\n", AddressString(clientSession->fClientAddr).val());
#endif
  delete clientSession;
}

RTSPServer::RTSPClientSession*
RTSPServer::createNewClientSession(unsigned sessionId, int clientSocket, struct sockaddr_in clientAddr) {
  return new RTSPClientSession(*this, sessionId, clientSocket, clientAddr);
}

void RTSPServer::RTSPClientSession
::changeClientInputSocket(int newSocketNum, unsigned char const* extraData, unsigned extraDataSize) {
  envir().taskScheduler().turnOffBackgroundReadHandling(fClientInputSocket);
  fClientInputSocket = newSocketNum;
  envir().taskScheduler().turnOnBackgroundReadHandling(fClientInputSocket,
     (TaskScheduler::BackgroundHandlerProc*)&incomingRequestHandler, this);

  // Also write any extra data to our buffer, and handle it:
  if (extraDataSize > 0 && extraDataSize <= fRequestBufferBytesLeft/*sanity check; should always be true*/) {
    unsigned char* ptr = &fRequestBuffer[fRequestBytesAlreadySeen];
    for (unsigned i = 0; i < extraDataSize; ++i) {
      ptr[i] = extraData[i];
    }
    handleRequestBytes(extraDataSize);
  }
}


////////// ServerMediaSessionIterator implementation //////////

RTSPServer::ServerMediaSessionIterator
::ServerMediaSessionIterator(RTSPServer& server)
  : fOurIterator((server.fServerMediaSessions == NULL)
		 ? NULL : HashTable::Iterator::create(*server.fServerMediaSessions)) {
}

RTSPServer::ServerMediaSessionIterator::~ServerMediaSessionIterator() {
  delete fOurIterator;
}

ServerMediaSession* RTSPServer::ServerMediaSessionIterator::next() {
  if (fOurIterator == NULL) return NULL;

  char const* key; // dummy
  return (ServerMediaSession*)(fOurIterator->next(key));
}


////////// UserAuthenticationDatabase implementation //////////

UserAuthenticationDatabase::UserAuthenticationDatabase(char const* realm,
						       Boolean passwordsAreMD5)
  : fTable(HashTable::create(STRING_HASH_KEYS)),
    fRealm(strDup(realm == NULL ? "LIVE555 Streaming Media" : realm)),
    fPasswordsAreMD5(passwordsAreMD5) {
}

UserAuthenticationDatabase::~UserAuthenticationDatabase() {
  delete[] fRealm;

  // Delete the allocated 'password' strings that we stored in the table, and then the table itself:
  char* password;
  while ((password = (char*)fTable->RemoveNext()) != NULL) {
    delete[] password;
  }
  delete fTable;
}

void UserAuthenticationDatabase::addUserRecord(char const* username,
					       char const* password) {
  fTable->Add(username, (void*)(strDup(password)));
}

void UserAuthenticationDatabase::removeUserRecord(char const* username) {
  char* password = (char*)(fTable->Lookup(username));
  fTable->Remove(username);
  delete[] password;
}

char const* UserAuthenticationDatabase::lookupPassword(char const* username) {
  return (char const*)(fTable->Lookup(username));
}
