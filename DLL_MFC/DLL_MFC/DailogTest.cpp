// DailogTest.cpp : implementation file
//

#include "stdafx.h"
#include "DLL_MFC.h"
#include "DailogTest.h"
#include "afxdialogex.h"


// DailogTest dialog

IMPLEMENT_DYNAMIC(DailogTest, CDialogEx)

DailogTest::DailogTest(CWnd* pParent /*=NULL*/)
	: CDialogEx(DailogTest::IDD, pParent)
{

}

DailogTest::~DailogTest()
{
}

void DailogTest::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(DailogTest, CDialogEx)
END_MESSAGE_MAP()


// DailogTest message handlers
