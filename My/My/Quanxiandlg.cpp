// Quanxiandlg.cpp : 实现文件
//

#include "stdafx.h"
#include "My.h"
#include "Quanxiandlg.h"
#include "afxdialogex.h"


// CQuanxiandlg 对话框

IMPLEMENT_DYNAMIC(CQuanxiandlg, CDialogEx)

CQuanxiandlg::CQuanxiandlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CQuanxiandlg::IDD, pParent)
{

}

CQuanxiandlg::~CQuanxiandlg()
{
}

void CQuanxiandlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CQuanxiandlg, CDialogEx)
END_MESSAGE_MAP()


// CQuanxiandlg 消息处理程序
