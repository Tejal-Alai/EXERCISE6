// EXERCISE4.h : main header file for the EXERCISE6 DLL
//

#pragma once

#ifndef __AFXWIN_H__

#error "include 'pch.h' before including this file for PCH"

#endif

#include "resource.h"		// main symbols

#include <Windows.h>

#include<arxHeaders.h>

#include <dbents.h>

//

class CEXERCISE6App : public CWinApp

{

public:

	CEXERCISE6App();

	// Overrides

public:

	virtual BOOL InitInstance();

	// Member function to add a line

	static void listObjects();

	DECLARE_MESSAGE_MAP()

};

// Entry point function
static int AcRxEntryPoint(AcRx::AppMsgCode Msg, void* pkt);