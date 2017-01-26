
// ExceptionError.h : main header file for the ExceptionError application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CExceptionErrorApp:
// See ExceptionError.cpp for the implementation of this class
//

class CExceptionErrorApp : public CWinApp
{
public:
	CExceptionErrorApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CExceptionErrorApp theApp;
