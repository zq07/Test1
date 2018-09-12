// Copydlg.cpp : 实现文件
//

#include "stdafx.h"
#include "My.h"
#include "Copydlg.h"
#include "afxdialogex.h"


// CCopydlg 对话框

IMPLEMENT_DYNAMIC(CCopydlg, CDialogEx)

CCopydlg::CCopydlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CCopydlg::IDD, pParent)
{

}

CCopydlg::~CCopydlg()
{
}

void CCopydlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CCopydlg, CDialogEx)
END_MESSAGE_MAP()


// CCopydlg 消息处理程序
