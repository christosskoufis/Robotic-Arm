#ifndef VARIABLES_H
#define VARIABLES_H

char dataReceive='!';
char dataSend='@';
char dataReceived='#';
static boolean recvInProgress = false;
static byte ndx = 0;
char startMarker = '<';
char endMarker = '>';
char rc;
const byte numChars = 32;
char receivedChars[numChars];
char tempChars[numChars];
int  data[numChars];
boolean newData = false;

#endif
