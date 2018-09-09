// Diancaidlg.cpp : 实现文件
//

#include "stdafx.h"
#include "My.h"
#include "Diancaidlg.h"
#include "afxdialogex.h"


// CDiancaidlg 对话框

IMPLEMENT_DYNAMIC(CDiancaidlg, CDialogEx)

CDiancaidlg::CDiancaidlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDiancaidlg::IDD, pParent)
	, m_ZhuoHao(_T(""))
{

}

CDiancaidlg::~CDiancaidlg()
{
}

void CDiancaidlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_zhuohao, m_ZhuoHao);
	DDX_Control(pDX, IDC_LIST1, m_CaidanList);
	DDX_Control(pDX, IDC_LIST2, m_CaidanCheck);
}


BEGIN_MESSAGE_MAP(CDiancaidlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_sub, &CDiancaidlg::OnBnClickedButtonsub)
	ON_BN_CLICKED(IDC_BUTTON_add, &CDiancaidlg::OnBnClickedButtonadd)
	ON_BN_CLICKED(IDC_BUTTON_OK, &CDiancaidlg::OnBnClickedButtonOk)
	ON_BN_CLICKED(IDC_BUTTON_CANCEL, &CDiancaidlg::OnBnClickedButtonCancel)
END_MESSAGE_MAP()


// CDiancaidlg 消息处理程序


void CDiancaidlg::OnBnClickedButtonsub()
{
	// TODO:  在此添加控件通知处理程序代码
	int i = m_CaidanCheck.GetSelectionMark();
	m_CaidanCheck.DeleteItem(i);
}


void CDiancaidlg::OnBnClickedButtonadd()
{
	// TODO:  在此添加控件通知处理程序代码
	int i = m_CaidanList.GetSelectionMark();
	CString str = m_CaidanList.GetItemText(i, 0);
	m_CaidanCheck.InsertItem(0, _T(""));
	m_CaidanCheck.SetItemText(0, 0, str);
	m_CaidanCheck.SetItemText(0, 1, _T("1"));
}


void CDiancaidlg::OnBnClickedButtonOk()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData();
	int i = m_CaidanCheck.GetItemCount();
	if (i == 0)
	{
		MessageBox(_T("请点菜！"));
		return;
	}
	MessageBox(_T("点菜成功！"));
	CDialogEx::OnOK();
}


void CDiancaidlg::OnBnClickedButtonCancel()
{
	// TODO:  在此添加控件通知处理程序代码
	CDialogEx::OnCancel();
}


BOOL CDiancaidlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	SetIcon(LoadIcon(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDI_ICON_diancai)), TRUE);
	m_CaidanList.SetExtendedStyle(LVS_EX_FLATSB | LVS_EX_FULLROWSELECT | LVS_EX_HEADERDRAGDROP | LVS_EX_ONECLICKACTIVATE | LVS_EX_GRIDLINES);
	m_CaidanList.InsertColumn(0, _T("菜名"), LVCFMT_LEFT, 100, 0);
	m_CaidanList.InsertColumn(1, _T("菜价(元)"), LVCFMT_LEFT, 100, 0);
	m_CaidanList.InsertItem(0, _T(""));
	m_CaidanList.SetItemText(0, 0, _T("老婆饼"));
	m_CaidanList.SetItemText(0, 1, _T("10"));

	m_CaidanCheck.SetExtendedStyle(LVS_EX_FLATSB | LVS_EX_FULLROWSELECT | LVS_EX_HEADERDRAGDROP | LVS_EX_ONECLICKACTIVATE | LVS_EX_GRIDLINES);
	m_CaidanCheck.InsertColumn(0, _T("菜名"), LVCFMT_LEFT, 100, 0);
	m_CaidanCheck.InsertColumn(1, _T("菜量(盘)"), LVCFMT_LEFT, 100, 0);

	return TRUE;  // return TRUE unless you set the focus to a control
	// 异常:  OCX 属性页应返回 FALSE
}


void CDiancaidlg::OnOK()
{
	// TODO:  在此添加专用代码和/或调用基类

	OnBnClickedButtonOk();
}
