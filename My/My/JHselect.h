#pragma once


// CJHselect �Ի���

class CJHselect : public CDialogEx
{
	DECLARE_DYNAMIC(CJHselect)

public:
	CJHselect(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CJHselect();

// �Ի�������
	enum { IDD = IDD_jinhuoselect };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
