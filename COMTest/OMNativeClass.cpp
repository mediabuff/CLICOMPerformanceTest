#include "stdafx.h"
#include "OMNativeClass.h"
#include <Windows.h>

COMNativeClass::COMNativeClass(void)
{
}


COMNativeClass::~COMNativeClass(void)
{
}


int COMNativeClass::GetWindowsVersion(int numberOfExecutions)
{
	OSVERSIONINFO osvi;
   
	for(int x = 0; x < numberOfExecutions; x++)
	{
		ZeroMemory(&osvi, sizeof(OSVERSIONINFO));
		osvi.dwOSVersionInfoSize = sizeof(OSVERSIONINFO);
		GetVersionEx(&osvi);
	}
    
	return osvi.dwBuildNumber;
}
