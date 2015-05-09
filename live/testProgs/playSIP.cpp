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
// Copyright (c) 1996-2012, Live Networks, Inc.  All rights reserved
// A SIP client test program that opens a SIP URL argument,
// and extracts the data from each incoming RTP stream.

#include "playCommon.hh"
#include "SIPClient.hh"

SIPClient* ourSIPClient = NULL;
Medium* createClient(UsageEnvironment& env, char const* /*url*/, int verbosityLevel, char const* applicationName) {
  // First, trim any directory prefixes from "applicationName":
  char const* suffix = &applicationName[strlen(applicationName)];
  while (suffix != applicationName) {
    if (*suffix == '/' || *suffix == '\\') {
      applicationName = ++suffix;
      break;
    }
    --suffix;
  }

  extern unsigned char desiredAudioRTPPayloadFormat;
  extern char* mimeSubtype;
  return ourSIPClient = SIPClient::createNew(env, desiredAudioRTPPayloadFormat, mimeSubtype, verbosityLevel, applicationName);
}

void getOptions(RTSPClient::responseHandler* afterFunc) { 
  ourSIPClient->envir().setResultMsg("NOT SUPPORTED IN CLIENT");
  afterFunc(NULL, -1, strDup(ourSIPClient->envir().getResultMsg()));
}

void getSDPDescription(RTSPClient::responseHandler* afterFunc) {
  extern char* proxyServerName;
  if (proxyServerName != NULL) {
    // Tell the SIP client about the proxy:
    NetAddressList addresses(proxyServerName);
    if (addresses.numAddresses() == 0) {
      ourSIPClient->envir() << "Failed to find network address for \"" << proxyServerName << "\"\n";
    } else {
      NetAddress address = *(addresses.firstAddress());
      unsigned proxyServerAddress // later, allow for IPv6 #####
	= *(unsigned*)(address.data());
      extern unsigned short proxyServerPortNum;
      if (proxyServerPortNum == 0) proxyServerPortNum = 5060; // default

      ourSIPClient->setProxyServer(proxyServerAddress, proxyServerPortNum);
    }
  }

  extern unsigned short desiredPortNum;
  unsigned short clientStartPortNum = desiredPortNum;
  if (clientStartPortNum == 0) clientStartPortNum = 8000; // default
  ourSIPClient->setClientStartPortNum(clientStartPortNum);

  extern char const* streamURL;
  char const* username = ourAuthenticator->username();
  char const* password = ourAuthenticator->password();
  char* result;
  if (username != NULL && password != NULL) {
    result = ourSIPClient->inviteWithPassword(streamURL, username, password);
  } else {
    result = ourSIPClient->invite(streamURL);
  }

  int resultCode = result == NULL ? -1 : 0;
  afterFunc(NULL, resultCode, strDup(result));
}

void setupSubsession(MediaSubsession* subsession, Boolean /*streamUsingTCP*/, RTSPClient::responseHandler* afterFunc) {
  subsession->sessionId = "mumble"; // anything that's non-NULL will work

  afterFunc(NULL, 0, NULL);
}

void startPlayingSession(MediaSession* /*session*/, double /*start*/, double /*end*/, float /*scale*/, RTSPClient::responseHandler* afterFunc) {
  if (ourSIPClient->sendACK()) {
    //##### This isn't quite right, because we should really be allowing
    //##### for the possibility of this ACK getting lost, by retransmitting
    //##### it *each time* we get a 2xx response from the server.
    afterFunc(NULL, 0, NULL);
  } else {
    afterFunc(NULL, -1, strDup(ourSIPClient->envir().getResultMsg()));
  }
}

void tearDownSession(MediaSession* /*session*/, RTSPClient::responseHandler* afterFunc) {
  if (ourSIPClient == NULL || ourSIPClient->sendBYE()) {
    afterFunc(NULL, 0, NULL);
  } else {
    afterFunc(NULL, -1, strDup(ourSIPClient->envir().getResultMsg()));
  }
}

Boolean allowProxyServers = True;
Boolean controlConnectionUsesTCP = False;
Boolean supportCodecSelection = True;
char const* clientProtocolName = "SIP";
