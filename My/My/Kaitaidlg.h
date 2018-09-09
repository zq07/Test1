#pragma once
#include "afxcmn.h"


// CKaitaidlg 对话框

class CKaitaidlg : public CDialog
{
	DECLARE_DYNAMIC(CKaitaidlg)

public:
	CKaitaidlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CKaitaidlg();

// 对话框数据
	enum { IDD = IDD_kaitaidlg };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

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
