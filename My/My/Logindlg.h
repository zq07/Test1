#pragma once
#include "afxwin.h"


// CLogindlg 对话框

class CLogindlg : public CDialogEx
{
	DECLARE_DYNAMIC(CLogindlg)

public:
	CLogindlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CLogindlg();

// 对话框数据
	enum { IDD = IDD_logindlg };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
	virtual void OnOK();
	virtual void OnCancel();
public:
	virtual BOOL OnInitDialog();

	CString m_Uname;
	CString m_Upasswd;
};
