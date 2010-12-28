// MyGameRemoteCallDlg.h : header file
//

#if !defined(AFX_MYGAMEREMOTECALLDLG_H__1980668E_404C_45B6_83EE_44CACFBB4075__INCLUDED_)
#define AFX_MYGAMEREMOTECALLDLG_H__1980668E_404C_45B6_83EE_44CACFBB4075__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMyGameRemoteCallDlg dialog

class CMyGameRemoteCallDlg : public CDialog
{
// Construction
public:
	void RemoteAction(int addr);
	CMyGameRemoteCallDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMyGameRemoteCallDlg)
	enum { IDD = IDD_MYGAMEREMOTECALL_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyGameRemoteCallDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMyGameRemoteCallDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnBtnRemoteAdd();
	afx_msg void OnBtnRemoteSub();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYGAMEREMOTECALLDLG_H__1980668E_404C_45B6_83EE_44CACFBB4075__INCLUDED_)
