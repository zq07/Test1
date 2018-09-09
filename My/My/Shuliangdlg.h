#pragma once


// CShuliangdlg 对话框

class CShuliangdlg : public CDialogEx
{
	DECLARE_DYNAMIC(CShuliangdlg)

public:
	CShuliangdlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CShuliangdlg();

// 对话框数据
	enum { IDD = IDD_shuliang };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtonOk();
	afx_msg void OnBnClickedButtonCancel();
	CString m_Shuliang;
	virtual BOOL OnInitDialog();
	virtual void OnOK();
};
