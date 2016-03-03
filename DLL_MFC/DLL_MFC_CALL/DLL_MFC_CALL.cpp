// DLL_MFC_CALL.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>

typedef  void (* mfcDialog)();
int _tmain(int argc, _TCHAR* argv[])
{
	HMODULE hDll = LoadLibraryA("DLL_MFC.dll");
	mfcDialog tempDialog;
	tempDialog = (mfcDialog)GetProcAddress(hDll, "DialogCall");
	tempDialog();
	return 0;
}

