// DLL_MFC.h : main header file for the DLL_MFC DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CDLL_MFCApp
// See DLL_MFC.cpp for the implementation of this class
//
#ifdef _MFC_DLL_
#define  DLL_MFC_API _declspec(dllexport)
#else
#define DLL_MFC_API _declspec(dllimport)
#endif

#ifndef _cplusplus
extern "C"{
#endif
DLL_MFC_API void DialogCall();
#ifndef _cplusplus
};
#endif

class CDLL_MFCApp : public CWinApp
{
public:
	CDLL_MFCApp();

// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
