
// MyDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "My.h"
#include "MyDlg.h"
#include "afxdialogex.h"
#include "Logindlg.h"
#include "Kaitaidlg.h"
#include "Jiacaidlg.h"
#include "Jiezhangdlg.h"
#include "Zhucedlg.h"
#include "JHselect.h"
#include "RSRCX.h"
#include "YSRdlg.h"
#include "Quanxiandlg.h"	
#include "Copydlg.h"
#include "Returndlg.h"
#include "Spinfo.h"
#include "Jinhuodlg.h"
#include "CPdlg.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMyDlg 对话框



CMyDlg::CMyDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMyDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMyDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_COMMAND(ID_MENU_login, &CMyDlg::OnMenulogin)
	ON_COMMAND(ID_MENU_kaitai, &CMyDlg::OnMenukaitai)
	ON_COMMAND(ID_MENU_addcai, &CMyDlg::OnMenuaddcai)
	ON_COMMAND(ID_MENU_jiezhang, &CMyDlg::OnMenujiezhang)
	ON_COMMAND(ID_jiesuan, &CMyDlg::Onjiesuan)
	ON_COMMAND(ID_MENU_jinhuo, &CMyDlg::OnMenujinhuo)
	ON_COMMAND(ID_MENU_yuangong, &CMyDlg::OnMenuyuangong)
	ON_COMMAND(ID_MENU_SPInfo, &CMyDlg::OnMenuSpinfo)
	ON_COMMAND(ID_MENU_CP, &CMyDlg::OnMenuCp)
	ON_COMMAND(ID_MENU_rishouru, &CMyDlg::OnMenurishouru)
	ON_COMMAND(ID_MENU_yueshouru, &CMyDlg::OnMenuyueshouru)
	ON_COMMAND(ID_MENU_jinhuoselect, &CMyDlg::OnMenujinhuoselect)
	ON_COMMAND(ID_MENU_sqlcopy, &CMyDlg::OnMenusqlcopy)
	ON_COMMAND(ID_MENU_return, &CMyDlg::OnMenureturn)
	ON_COMMAND(ID_MENU_new, &CMyDlg::OnMenunew)
	ON_COMMAND(ID_MENU_quanxian, &CMyDlg::OnMenuquanxian)
	ON_COMMAND(ID_about, &CMyDlg::Onabout)
	ON_COMMAND(IDB_login, &CMyDlg::OnMenulogin)
	ON_COMMAND(IDB_kaitai, &CMyDlg::OnMenukaitai)
	ON_COMMAND(IDB_add, &CMyDlg::OnMenuaddcai)
	ON_COMMAND(IDB_pay, &CMyDlg::OnMenujiezhang)
	ON_COMMAND(IDB_rishouru, &CMyDlg::Onrishouru)
	ON_COMMAND(IDB_reg, &CMyDlg::OnMenuyuangong)
	ON_COMMAND(IDB_cancel, &CMyDlg::OnCancel)
END_MESSAGE_MAP()


// CMyDlg 消息处理程序

BOOL CMyDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO:  在此添加额外的初始化代码
	SetIcon(LoadIcon(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDR_MAINFRAME)), TRUE);

	m_Menu.LoadMenu(IDR_MENU1);
	SetMenu(&m_Menu);

	CTime Time;
	Time = CTime::GetCurrentTime();
	CString Str = Time.Format("%Y-%m-%d");

	m_Imagelist.Create(32, 32, ILC_COLOR24 | ILC_MASK, 1, 1);
	m_Imagelist.Add(AfxGetApp()->LoadIcon(IDI_ICON_login));
	m_Imagelist.Add(AfxGetApp()->LoadIcon(IDI_ICON_open));
	m_Imagelist.Add(AfxGetApp()->LoadIcon(IDI_ICON_add));
	m_Imagelist.Add(AfxGetApp()->LoadIcon(IDI_ICON_pay));
	m_Imagelist.Add(AfxGetApp()->LoadIcon(IDI_ICON_rishouru));
	m_Imagelist.Add(AfxGetApp()->LoadIcon(IDI_ICON_reg));
	m_Imagelist.Add(AfxGetApp()->LoadIcon(IDI_ICON_cancel));
	UINT Array[7];
	for (int i = 0; i<7; i++)
	{
		Array[i] = 9000 + i;
	}
	m_Toolbar.Create(this);
	m_Toolbar.SetButtons(Array, 7);
	m_Toolbar.SetButtonText(0, _T("系统登录"));
	m_Toolbar.SetButtonText(1, _T("开台"));
	m_Toolbar.SetButtonText(2, _T("加减菜"));
	m_Toolbar.SetButtonText(3, _T("顾客买单"));
	m_Toolbar.SetButtonText(4, _T("本日收入"));
	m_Toolbar.SetButtonText(5, _T("员工注册"));
	m_Toolbar.SetButtonText(6, _T("退出系统"));
	m_Toolbar.GetToolBarCtrl().SetButtonWidth(60, 120);
	m_Toolbar.GetToolBarCtrl().SetImageList(&m_Imagelist);
	m_Toolbar.SetSizes(CSize(70, 60), CSize(28, 40));


	for (int i = 0; i<4; i++)
	{
		Array[i] = 10000 + 1;
	}
	m_Statusbar.Create(this);
	m_Statusbar.SetIndicators(Array, 4);
	for (int n = 0; n<3; n++)
	{
		m_Statusbar.SetPaneInfo(n, Array[n], 0, 80);
	}
	m_Statusbar.SetPaneInfo(1, Array[1], 0, 200);
	m_Statusbar.SetPaneInfo(2, Array[2], 0, 800);
	m_Statusbar.SetPaneText(2, _T("当前时间") + Str);
	m_Statusbar.SetPaneText(0, _T("餐饮管理系统"));
	RepositionBars(AFX_IDW_CONTROLBAR_FIRST, AFX_IDW_CONTROLBAR_LAST, 0);

	m_Toolbar.GetToolBarCtrl().EnableButton(IDB_kaitai, false);
	m_Toolbar.GetToolBarCtrl().EnableButton(IDB_pay, false);
	m_Toolbar.GetToolBarCtrl().EnableButton(IDB_rishouru, false);
	m_Toolbar.GetToolBarCtrl().EnableButton(IDB_reg, false);
	m_Toolbar.GetToolBarCtrl().EnableButton(IDB_add, false);
	CMenu* pMenu = GetMenu();
	pMenu->GetSubMenu(1)->EnableMenuItem(0, MF_BYPOSITION | MF_GRAYED);
	pMenu->GetSubMenu(1)->EnableMenuItem(1, MF_BYPOSITION | MF_GRAYED);
	pMenu->GetSubMenu(2)->EnableMenuItem(0, MF_BYPOSITION | MF_GRAYED);
	pMenu->GetSubMenu(2)->EnableMenuItem(1, MF_BYPOSITION | MF_GRAYED);
	pMenu->GetSubMenu(2)->EnableMenuItem(2, MF_BYPOSITION | MF_GRAYED);
	pMenu->GetSubMenu(3)->EnableMenuItem(0, MF_BYPOSITION | MF_GRAYED);
	pMenu->GetSubMenu(3)->EnableMenuItem(1, MF_BYPOSITION | MF_GRAYED);
	//CString Sql;
	//Sql = "select * from shouru where 时间='" + Str + "'";
	//m_pRs = theApp.m_pCon->Execute((_bstr_t)Sql, NULL, adCmdText);
	//if (m_pRs->adoEOF)
	//{

	//	theApp.m_pCon->Execute((_bstr_t)("insert into shouru(时间)values('" + Str + "')"), NULL, adCmdText);
	//}


	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CMyDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CMyDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CMyDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMyDlg::OnMenulogin()
{
	// TODO:  在此添加命令处理程序代码
	CLogindlg login;
	if (login.DoModal() == IDOK)
	{
		CMenu* pMenu = GetMenu();
		pMenu->GetSubMenu(1)->EnableMenuItem(0, MF_BYPOSITION | MF_ENABLED);
		pMenu->GetSubMenu(1)->EnableMenuItem(1, MF_BYPOSITION | MF_ENABLED);
		pMenu->GetSubMenu(2)->EnableMenuItem(0, MF_BYPOSITION | MF_ENABLED);
		pMenu->GetSubMenu(2)->EnableMenuItem(1, MF_BYPOSITION | MF_ENABLED);
		pMenu->GetSubMenu(2)->EnableMenuItem(2, MF_BYPOSITION | MF_ENABLED);
		pMenu->GetSubMenu(3)->EnableMenuItem(0, MF_BYPOSITION | MF_ENABLED);
		pMenu->GetSubMenu(3)->EnableMenuItem(1, MF_BYPOSITION | MF_ENABLED);
		m_Toolbar.GetToolBarCtrl().EnableButton(IDB_kaitai, true);
		m_Toolbar.GetToolBarCtrl().EnableButton(IDB_pay, true);
		m_Toolbar.GetToolBarCtrl().EnableButton(IDB_rishouru, true);
		m_Toolbar.GetToolBarCtrl().EnableButton(IDB_reg, true);
		m_Toolbar.GetToolBarCtrl().EnableButton(IDB_add, true);
	}
	return;
}


void CMyDlg::OnMenukaitai()
{
	// TODO:  在此添加命令处理程序代码
	CKaitaidlg kaitai;
	kaitai.DoModal();
	return;
}


void CMyDlg::OnMenuaddcai()
{
	// TODO:  在此添加命令处理程序代码
	CJiacaidlg jiacai;
	jiacai.DoModal();
	return;
}


void CMyDlg::OnMenujiezhang()
{
	// TODO:  在此添加命令处理程序代码
	CJiezhangdlg jiezhang;
	jiezhang.DoModal();
	return;
}


void CMyDlg::Onjiesuan()
{
	// TODO:  在此添加命令处理程序代码
	MessageBox(_T("结算成功"));
	return;
}


void CMyDlg::OnMenujinhuo()
{
	// TODO:  在此添加命令处理程序代码
	MessageBox(_T("进货成功"));
	return;
}


void CMyDlg::OnMenuyuangong()
{
	// TODO:  在此添加命令处理程序代码
	CZhucedlg zhuce;
	zhuce.DoModal();
	return;
}


void CMyDlg::OnMenuSpinfo()
{
	// TODO:  在此添加命令处理程序代码
	MessageBox(_T("商品信息"));
	return;
}


void CMyDlg::OnMenuCp()
{
	// TODO:  在此添加命令处理程序代码
	MessageBox(_T("菜价信息"));
	return;
}


void CMyDlg::OnMenurishouru()
{
	// TODO:  在此添加命令处理程序代码
	MessageBox(_T("日收入"));
	return;
}

void CMyDlg::Onrishouru()
{
	// TODO:  在此添加命令处理程序代码
	MessageBox(_T("本日营业额为：12元"), _T("日收入"));
	return;
}

void CMyDlg::OnMenuyueshouru()
{
	// TODO:  在此添加命令处理程序代码
	MessageBox(_T("月收入"));
	return;
}


void CMyDlg::OnMenujinhuoselect()
{
	// TODO:  在此添加命令处理程序代码
	MessageBox(_T("进货查询"));
	return;
}


void CMyDlg::OnMenusqlcopy()
{
	// TODO:  在此添加命令处理程序代码
	MessageBox(_T("数据库拷贝"));
	return;
}


void CMyDlg::OnMenureturn()
{
	// TODO:  在此添加命令处理程序代码
	MessageBox(_T("数据库还原"));
	return;
}


void CMyDlg::OnMenunew()
{
	// TODO:  在此添加命令处理程序代码
	MessageBox(_T("新建数据"));
	return;
}


void CMyDlg::OnMenuquanxian()
{
	// TODO:  在此添加命令处理程序代码
	MessageBox(_T("权限管理"));
	return;
}


void CMyDlg::Onabout()
{
	// TODO:  在此添加命令处理程序代码
	MessageBox(_T("关于。。。"));
	return;
}
