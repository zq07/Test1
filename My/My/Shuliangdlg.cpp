// Shuliangdlg.cpp : 实现文件
//

#include "stdafx.h"
#include "My.h"
#include "Shuliangdlg.h"
#include "afxdialogex.h"


// CShuliangdlg 对话框

IMPLEMENT_DYNAMIC(CShuliangdlg, CDialogEx)

CShuliangdlg::CShuliangdlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CShuliangdlg::IDD, pParent)
	, m_Shuliang(_T(""))
{

}

CShuliangdlg::~CShuliangdlg()
{
}

void CShuliangdlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_Shuliang);
}


BEGIN_MESSAGE_MAP(CShuliangdlg, CDialogEx)
	ON_BN_CLICKED(ID_BUTTON_OK, &CShuliangdlg::OnBnClickedButtonOk)
	ON_BN_CLICKED(ID_BUTTON_CANCEL, &CShuliangdlg::OnBnClickedButtonCancel)
END_MESSAGE_MAP()


// CShuliangdlg 消息处理程序


void CShuliangdlg::OnBnClickedButtonOk()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData();
	if (m_Shuliang.IsEmpty() || m_Shuliang == _T("0"))
	{
		MessageBox(_T("数量至少为1"));
		return;
	}
	CDialogEx::OnOK();
}


void CShuliangdlg::OnBnClickedButtonCancel()
{
	// TODO:  在此添加控件通知处理程序代码
	CDialogEx::OnCancel();
}


BOOL CShuliangdlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	SetIcon(LoadIcon(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDI_ICON_sl)), TRUE);
	return TRUE;  // return TRUE unless you set the focus to a control
	// 异常:  OCX 属性页应返回 FALSE
}


void CShuliangdlg::OnOK()
{
	// TODO:  在此添加专用代码和/或调用基类

	OnBnClickedButtonOk();
}
