#pragma once


// CRSRCX �Ի���

class CRSRCX : public CDialogEx
{
	DECLARE_DYNAMIC(CRSRCX)

public:
	CRSRCX(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CRSRCX();

// �Ի�������
	enum { IDD = IDD_RSRCX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
