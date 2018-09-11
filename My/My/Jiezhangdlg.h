#pragma once


// CJiezhangdlg 对话框

class CJiezhangdlg : public CDialogEx
{
	DECLARE_DYNAMIC(CJiezhangdlg)

public:
	CJiezhangdlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CJiezhangdlg();

// 对话框数据
	enum { IDD = IDD_jiezhangdlg };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
