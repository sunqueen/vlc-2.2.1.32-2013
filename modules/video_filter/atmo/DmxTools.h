/*
* DmxTools.h: functions to convert , or ; separated numbers into an integer array
 *
 * See the README.txt file for copyright information and how to reach the author(s).
 *
 * $Id: 0640ca59d8c116d0f8f885e69ee6f736fbbdb3ba $
 */

#ifndef _dmxtools_h_
#define _dmxtools_h_

int *ConvertDmxStartChannelsToInt(int numChannels, char *startChannels);
char *ConvertDmxStartChannelsToString(int numChannels, int *startChannels);
int IsValidDmxStartString(char *startChannels);

#endif
