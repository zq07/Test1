#pragma once


// CQuanxiandlg 对话框

class CQuanxiandlg : public CDialogEx
{
	DECLARE_DYNAMIC(CQuanxiandlg)

public:
	CQuanxiandlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CQuanxiandlg();

// 对话框数据
	enum { IDD = IDD_quanxian };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
