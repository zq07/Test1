#pragma once


// CCopydlg �Ի���

class CCopydlg : public CDialogEx
{
	DECLARE_DYNAMIC(CCopydlg)

public:
	CCopydlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CCopydlg();

// �Ի�������
	enum { IDD = IDD_COPY };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
