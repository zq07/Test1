#pragma once


// CYSRdlg �Ի���

class CYSRdlg : public CDialogEx
{
	DECLARE_DYNAMIC(CYSRdlg)

public:
	CYSRdlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CYSRdlg();

// �Ի�������
	enum { IDD = IDD_YSRCX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonchaxun();
};
