// MyGameRemoteCall.h : main header file for the MYGAMEREMOTECALL application
//

#if !defined(AFX_MYGAMEREMOTECALL_H__7611482A_2B22_435F_97B0_A6387CD8E12D__INCLUDED_)
#define AFX_MYGAMEREMOTECALL_H__7611482A_2B22_435F_97B0_A6387CD8E12D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMyGameRemoteCallApp:
// See MyGameRemoteCall.cpp for the implementation of this class
//

class CMyGameRemoteCallApp : public CWinApp
{
public:
	CMyGameRemoteCallApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyGameRemoteCallApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMyGameRemoteCallApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYGAMEREMOTECALL_H__7611482A_2B22_435F_97B0_A6387CD8E12D__INCLUDED_)
