#pragma once


// CZhucedlg 对话框

class CZhucedlg : public CDialogEx
{
	DECLARE_DYNAMIC(CZhucedlg)

public:
	CZhucedlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CZhucedlg();

// 对话框数据
	enum { IDD = IDD_zhucedlg };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
