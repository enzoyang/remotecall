// MyGameDlg.h : header file
//

#if !defined(AFX_MYGAMEDLG_H__A16F635A_524D_4983_99E4_7EB20B435FF9__INCLUDED_)
#define AFX_MYGAMEDLG_H__A16F635A_524D_4983_99E4_7EB20B435FF9__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMyGameDlg dialog

class CMyGameDlg : public CDialog
{
// Construction
public:
	CMyGameDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMyGameDlg)
	enum { IDD = IDD_MYGAME_DIALOG };
	CEdit	m_blood;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyGameDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMyGameDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnBtnAdd();
	afx_msg void OnBtnSub();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYGAMEDLG_H__A16F635A_524D_4983_99E4_7EB20B435FF9__INCLUDED_)
