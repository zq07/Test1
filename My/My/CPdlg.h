#pragma once


// CCPdlg �Ի���

class CCPdlg : public CDialogEx
{
	DECLARE_DYNAMIC(CCPdlg)

public:
	CCPdlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CCPdlg();

// �Ի�������
	enum { IDD = IDD_CPinfo };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
