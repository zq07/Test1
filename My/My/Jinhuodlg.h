#pragma once


// CJinhuodlg �Ի���

class CJinhuodlg : public CDialogEx
{
	DECLARE_DYNAMIC(CJinhuodlg)

public:
	CJinhuodlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CJinhuodlg();

// �Ի�������
	enum { IDD = IDD_jinhuodlg };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
