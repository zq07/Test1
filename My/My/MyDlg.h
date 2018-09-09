
// MyDlg.h : 头文件
//

#pragma once


// CMyDlg 对话框
class CMyDlg : public CDialogEx
{
// 构造
public:
	CMyDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_MY_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

public:
	CImageList m_Imagelist;
	CToolBar m_Toolbar;
	CStatusBar m_Statusbar;
	CMenu m_Menu;
	afx_msg void OnMenulogin();
	afx_msg void OnMenukaitai();
	afx_msg void OnMenuaddcai();
	afx_msg void OnMenujiezhang();
	afx_msg void Onjiesuan();
	afx_msg void OnMenujinhuo();
	afx_msg void OnMenuyuangong();
	afx_msg void OnMenuSpinfo();
	afx_msg void OnMenuCp();
	afx_msg void OnMenurishouru();
	afx_msg void OnMenuyueshouru();
	afx_msg void OnMenujinhuoselect();
	afx_msg void OnMenusqlcopy();
	afx_msg void OnMenureturn();
	afx_msg void OnMenunew();
	afx_msg void OnMenuquanxian();
	afx_msg void Onabout();
};
