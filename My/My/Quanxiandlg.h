#pragma once


// CQuanxiandlg �Ի���

class CQuanxiandlg : public CDialogEx
{
	DECLARE_DYNAMIC(CQuanxiandlg)

public:
	CQuanxiandlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CQuanxiandlg();

// �Ի�������
	enum { IDD = IDD_quanxian };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
