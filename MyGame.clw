; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CMyGameDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "MyGame.h"

ClassCount=3
Class1=CMyGameApp
Class2=CMyGameDlg
Class3=CAboutDlg

ResourceCount=3
Resource1=IDD_ABOUTBOX
Resource2=IDR_MAINFRAME
Resource3=IDD_MYGAME_DIALOG

[CLS:CMyGameApp]
Type=0
HeaderFile=MyGame.h
ImplementationFile=MyGame.cpp
Filter=N

[CLS:CMyGameDlg]
Type=0
HeaderFile=MyGameDlg.h
ImplementationFile=MyGameDlg.cpp
Filter=D
LastObject=IDC_BTN_SUB
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=MyGameDlg.h
ImplementationFile=MyGameDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_MYGAME_DIALOG]
Type=1
Class=CMyGameDlg
ControlCount=3
Control1=IDC_EDIT_BLOOD,edit,1350633601
Control2=IDC_BTN_ADD,button,1342242816
Control3=IDC_BTN_SUB,button,1342242816

