// DLL_MFC.cpp : Defines the initialization routines for the DLL.
//

#include "stdafx.h"

#define  _MFC_DLL_
#include "DLL_MFC.h"
#include "DailogTest.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

#ifndef _cplusplus
extern "C"
#endif
DLL_MFC_API void DialogCall()
{
	DailogTest tempTest;
	tempTest.DoModal();
}
//
//TODO: If this DLL is dynamically linked against the MFC DLLs,
//		any functions exported from this DLL which call into
//		MFC must have the AFX_MANAGE_STATE macro added at the
//		very beginning of the function.
//
//		For example:
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// normal function body here
//		}
//
//		It is very important that this macro appear in each
//		function, prior to any calls into MFC.  This means that
//		it must appear as the first statement within the 
//		function, even before any object variable declarations
//		as their constructors may generate calls into the MFC
//		DLL.
//
//		Please see MFC Technical Notes 33 and 58 for additional
//		details.
//

// CDLL_MFCApp

BEGIN_MESSAGE_MAP(CDLL_MFCApp, CWinApp)
END_MESSAGE_MAP()


// CDLL_MFCApp construction

CDLL_MFCApp::CDLL_MFCApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only CDLL_MFCApp object

CDLL_MFCApp theApp;


// CDLL_MFCApp initialization

BOOL CDLL_MFCApp::InitInstance()
{
	CWinApp::InitInstance();

	return TRUE;
}
