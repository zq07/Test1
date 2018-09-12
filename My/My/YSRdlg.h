#pragma once


// CYSRdlg 对话框

class CYSRdlg : public CDialogEx
{
	DECLARE_DYNAMIC(CYSRdlg)

public:
	CYSRdlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CYSRdlg();

// 对话框数据
	enum { IDD = IDD_YSRCX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonchaxun();
};
