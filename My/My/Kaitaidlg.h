#pragma once
#include "afxcmn.h"


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
public:
	CListCtrl m_ZhuoList;
	CString m_ZhuoHao;
	afx_msg void OnBnClickedButtonOk();
	afx_msg void OnBnClickedButtonreturn();
	afx_msg void OnNMDblclkList2(NMHDR *pNMHDR, LRESULT *pResult);
	virtual BOOL OnInitDialog();
	virtual void OnOK();
	afx_msg void OnNMClickList2(NMHDR *pNMHDR, LRESULT *pResult);
};
