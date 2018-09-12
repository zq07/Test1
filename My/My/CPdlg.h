#pragma once


// CCPdlg 对话框

class CCPdlg : public CDialogEx
{
	DECLARE_DYNAMIC(CCPdlg)

public:
	CCPdlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CCPdlg();

// 对话框数据
	enum { IDD = IDD_CPinfo };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
