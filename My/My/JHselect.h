#pragma once


// CJHselect 对话框

class CJHselect : public CDialogEx
{
	DECLARE_DYNAMIC(CJHselect)

public:
	CJHselect(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CJHselect();

// 对话框数据
	enum { IDD = IDD_jinhuoselect };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
