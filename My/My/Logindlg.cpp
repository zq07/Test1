// Logindlg.cpp : 实现文件
//

#include "stdafx.h"
#include "My.h"
#include "Logindlg.h"
#include "afxdialogex.h"


// CLogindlg 对话框

IMPLEMENT_DYNAMIC(CLogindlg, CDialogEx)

CLogindlg::CLogindlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CLogindlg::IDD, pParent)
	, m_Uname(_T(""))
	, m_Upasswd(_T(""))
{

}

CLogindlg::~CLogindlg()
{
}

void CLogindlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_Uname);
	DDX_Text(pDX, IDC_EDIT2, m_Upasswd);
}


BEGIN_MESSAGE_MAP(CLogindlg, CDialogEx)
END_MESSAGE_MAP()


// CLogindlg 消息处理程序


void CLogindlg::OnOK()
{
	// TODO:  在此添加专用代码和/或调用基类
	UpdateData();
	if (!m_Uname.IsEmpty() || !m_Uname.IsEmpty())
	{
		if (m_Uname == _T("zq") && m_Upasswd == _T("123"))
		{
			CDialogEx::OnOK();
		}
		else
		{
			MessageBox(_T("用户名或密码错误！"));
		}
	}
	else
	{
		MessageBox(_T("用户名或密码为空！"));
	}

}


void CLogindlg::OnCancel()
{
	// TODO:  在此添加专用代码和/或调用基类

	CDialogEx::OnCancel();
}


BOOL CLogindlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  在此添加额外的初始化
	SetIcon(LoadIcon(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDI_ICON_login)), TRUE);
	return TRUE;  // return TRUE unless you set the focus to a control
	// 异常:  OCX 属性页应返回 FALSE
}
