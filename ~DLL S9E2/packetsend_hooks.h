#ifndef ENCRYPTPROTO_H
#define ENCRYPTPROTO_H

FARPROC GetProcedureAddress(HANDLE hModule, char* pszProcName);
void DoHooks();
extern CRITICAL_SECTION nSend_criti;
#endif