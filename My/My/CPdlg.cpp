// CPdlg.cpp : 实现文件
//

#include "stdafx.h"
#include "My.h"
#include "CPdlg.h"
#include "afxdialogex.h"


// CCPdlg 对话框

IMPLEMENT_DYNAMIC(CCPdlg, CDialogEx)

CCPdlg::CCPdlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CCPdlg::IDD, pParent)
{

}

CCPdlg::~CCPdlg()
{
}

void CCPdlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CCPdlg, CDialogEx)
END_MESSAGE_MAP()


// CCPdlg 消息处理程序
