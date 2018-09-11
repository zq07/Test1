#pragma once
#include "afxwin.h"
#include "afxcmn.h"


// CJiacaidlg 对话框

class CJiacaidlg : public CDialogEx
{
	DECLARE_DYNAMIC(CJiacaidlg)

public:
	CJiacaidlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CJiacaidlg();

// 对话框数据
	enum { IDD = IDD_jiacai };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
	CComboBox m_ZhuohaoCombo;
	CListCtrl m_CaidanList;
	CListCtrl m_CaidanCheck;
	afx_msg void OnCbnSelchangeCombo1();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButtonOk();
	afx_msg void OnBnClickedButtonCancel();
};
