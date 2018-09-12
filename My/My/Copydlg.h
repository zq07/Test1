#pragma once


// CCopydlg 对话框

class CCopydlg : public CDialogEx
{
	DECLARE_DYNAMIC(CCopydlg)

public:
	CCopydlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CCopydlg();

// 对话框数据
	enum { IDD = IDD_COPY };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
