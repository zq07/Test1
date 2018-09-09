#pragma once
#include "afxcmn.h"


// CDiancaidlg 对话框

class CDiancaidlg : public CDialogEx
{
	DECLARE_DYNAMIC(CDiancaidlg)

public:
	CDiancaidlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDiancaidlg();

// 对话框数据
	enum { IDD = IDD_diancai };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CString m_ZhuoHao;
	CListCtrl m_CaidanList;
	CListCtrl m_CaidanCheck;
	afx_msg void OnBnClickedButtonsub();
	afx_msg void OnBnClickedButtonadd();
	afx_msg void OnBnClickedButtonOk();
	afx_msg void OnBnClickedButtonCancel();
	virtual BOOL OnInitDialog();
	virtual void OnOK();
};
