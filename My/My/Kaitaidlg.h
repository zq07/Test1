#pragma once


// CKaitaidlg �Ի���

class CKaitaidlg : public CDialog
{
	DECLARE_DYNAMIC(CKaitaidlg)

public:
	CKaitaidlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CKaitaidlg();

// �Ի�������
	enum { IDD = IDD_kaitaidlg };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
};
