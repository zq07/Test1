#pragma once


// CJinhuodlg 对话框

class CJinhuodlg : public CDialogEx
{
	DECLARE_DYNAMIC(CJinhuodlg)

public:
	CJinhuodlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CJinhuodlg();

// 对话框数据
	enum { IDD = IDD_jinhuodlg };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
