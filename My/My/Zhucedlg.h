#pragma once


// CZhucedlg �Ի���

class CZhucedlg : public CDialogEx
{
	DECLARE_DYNAMIC(CZhucedlg)

public:
	CZhucedlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CZhucedlg();

// �Ի�������
	enum { IDD = IDD_zhucedlg };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
