// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define DLL_VERSION "9.5.1.13"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>
#include <mmsystem.h>
#include <string>
#include <sstream>
#include <vector>
#include <list>
#include <stdio.h>
#include <math.h>
#include <WindowsX.h>
#include <ShellAPI.h>
#include <tlhelp32.h>
#include <mpir.h>
#include <gmp.h>
#include <WinSock2.h>
#include <GLee.h>
#include <Psapi.h>
#include <tchar.h>
#include <wingdi.h>
#include <map>

#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "mpir.lib")

#include <gl\GL.h>
#include <gl\GLU.h>

#pragma comment(lib, "Opengl32.lib")
#pragma comment(lib, "glu32.lib")
#pragma comment(lib, "Glee.lib")
#pragma comment(lib, "psapi.lib")
//#include "SecureEngineSDK.h"
//#pragma comment(lib, "SecureEngineSDK32.lib")		// wait
// TODO: reference additional headers your program requires here

