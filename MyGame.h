// MyGame.h : main header file for the MYGAME application
//

#if !defined(AFX_MYGAME_H__E04709CD_463B_48D1_AFB1_5DF82E1C6F4F__INCLUDED_)
#define AFX_MYGAME_H__E04709CD_463B_48D1_AFB1_5DF82E1C6F4F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMyGameApp:
// See MyGame.cpp for the implementation of this class
//

class CMyGameApp : public CWinApp
{
public:
	CMyGameApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyGameApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMyGameApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYGAME_H__E04709CD_463B_48D1_AFB1_5DF82E1C6F4F__INCLUDED_)
