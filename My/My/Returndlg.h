#pragma once


// CReturndlg �Ի���

class CReturndlg : public CDialogEx
{
	DECLARE_DYNAMIC(CReturndlg)

public:
	CReturndlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CReturndlg();

// �Ի�������
	enum { IDD = IDD_DIALOG_return };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
