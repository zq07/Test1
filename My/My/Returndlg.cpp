// Returndlg.cpp : 实现文件
//

#include "stdafx.h"
#include "My.h"
#include "Returndlg.h"
#include "afxdialogex.h"


// CReturndlg 对话框

IMPLEMENT_DYNAMIC(CReturndlg, CDialogEx)

CReturndlg::CReturndlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CReturndlg::IDD, pParent)
{

}

CReturndlg::~CReturndlg()
{
}

void CReturndlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CReturndlg, CDialogEx)
END_MESSAGE_MAP()


// CReturndlg 消息处理程序
