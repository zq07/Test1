#pragma once


// CSpInfo �Ի���

class CSpInfo : public CDialogEx
{
	DECLARE_DYNAMIC(CSpInfo)

public:
	CSpInfo(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CSpInfo();

// �Ի�������
	enum { IDD = IDD_SPinfo };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
