#pragma once


// CRSRCX 对话框

class CRSRCX : public CDialogEx
{
	DECLARE_DYNAMIC(CRSRCX)

public:
	CRSRCX(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CRSRCX();

// 对话框数据
	enum { IDD = IDD_RSRCX };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
