#pragma once
#include "Windows.h"

void DoHTTPCrossProtocolRelay(wchar_t*, wchar_t*, wchar_t*, wchar_t*, wchar_t*);
SOCKET CreateRPCSocketListen(const wchar_t*);
SOCKET CreateRPCSocketReflect(const wchar_t*, const wchar_t*);
SOCKET CreateHTTPSocket(const wchar_t*, const wchar_t*);
char* ForgeHTTPRequestType1(char*, int, int*, wchar_t*);
char* ForgeHTTPRequestType3(char*, int, int*, wchar_t*);
void ExtractType2FromHttp(char*, int, char*, int*);
void ForgeAndAlterType2Rpc(char*, int, int, char*, int, char*);
void ExtractType3FromRpc(char*, int, char*, int*);
void ParseUsernameFromType3(char*, int);
int findNTLMBytes(char*, int);
int findBase64NTLM(char*, int, char*, int*);
char* base64Encode(char*, int, int*);
char* base64Decode(char*, int, int*);

//debug
void hexDump2(char*, void*, int);