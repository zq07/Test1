#pragma once


// CShuliangdlg �Ի���

class CShuliangdlg : public CDialogEx
{
	DECLARE_DYNAMIC(CShuliangdlg)

public:
	CShuliangdlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CShuliangdlg();

// �Ի�������
	enum { IDD = IDD_shuliang };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonOk();
	afx_msg void OnBnClickedButtonCancel();
	CString m_Shuliang;
	virtual BOOL OnInitDialog();
	virtual void OnOK();
};
