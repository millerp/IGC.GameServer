#ifndef ANTIHACK_H
#define ANTIHACK_H
void CheckSH();
void AHCheckGetTickHook();
HMODULE GetCurrentModule();
int PrintModules( DWORD processID );
extern BYTE originalqueryperformancecounter[5];
extern HANDLE hCheckThread;
void AHCheckSwapBufferMod();
void PrintRenderThreadTime();
int CheckHitHack();
#endif