#pragma once
#include "afxwin.h"


// CLogindlg �Ի���

class CLogindlg : public CDialogEx
{
	DECLARE_DYNAMIC(CLogindlg)

public:
	CLogindlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CLogindlg();

// �Ի�������
	enum { IDD = IDD_logindlg };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
	virtual void OnOK();
	virtual void OnCancel();
public:
	virtual BOOL OnInitDialog();

	CString m_Uname;
	CString m_Upasswd;
};
