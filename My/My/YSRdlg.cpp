// YSRdlg.cpp : 实现文件
//

#include "stdafx.h"
#include "My.h"
#include "YSRdlg.h"
#include "afxdialogex.h"


// CYSRdlg 对话框

IMPLEMENT_DYNAMIC(CYSRdlg, CDialogEx)

CYSRdlg::CYSRdlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CYSRdlg::IDD, pParent)
{

}

CYSRdlg::~CYSRdlg()
{
}

void CYSRdlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CYSRdlg, CDialogEx)
	ON_BN_CLICKED(ID_BUTTON_chaxun, &CYSRdlg::OnBnClickedButtonchaxun)
END_MESSAGE_MAP()


// CYSRdlg 消息处理程序


void CYSRdlg::OnBnClickedButtonchaxun()
{
	// TODO:  在此添加控件通知处理程序代码
}
