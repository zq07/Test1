#pragma once


// CSpInfo 对话框

class CSpInfo : public CDialogEx
{
	DECLARE_DYNAMIC(CSpInfo)

public:
	CSpInfo(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CSpInfo();

// 对话框数据
	enum { IDD = IDD_SPinfo };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
