// Zhucedlg.cpp : 实现文件
//

#include "stdafx.h"
#include "My.h"
#include "Zhucedlg.h"
#include "afxdialogex.h"


// CZhucedlg 对话框

IMPLEMENT_DYNAMIC(CZhucedlg, CDialogEx)

CZhucedlg::CZhucedlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CZhucedlg::IDD, pParent)
{

}

CZhucedlg::~CZhucedlg()
{
}

void CZhucedlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CZhucedlg, CDialogEx)
END_MESSAGE_MAP()


// CZhucedlg 消息处理程序
