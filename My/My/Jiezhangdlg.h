#pragma once


// CJiezhangdlg �Ի���

class CJiezhangdlg : public CDialogEx
{
	DECLARE_DYNAMIC(CJiezhangdlg)

public:
	CJiezhangdlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CJiezhangdlg();

// �Ի�������
	enum { IDD = IDD_jiezhangdlg };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
