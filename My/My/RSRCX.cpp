// RSRCX.cpp : 实现文件
//

#include "stdafx.h"
#include "My.h"
#include "RSRCX.h"
#include "afxdialogex.h"


// CRSRCX 对话框

IMPLEMENT_DYNAMIC(CRSRCX, CDialogEx)

CRSRCX::CRSRCX(CWnd* pParent /*=NULL*/)
	: CDialogEx(CRSRCX::IDD, pParent)
{

}

CRSRCX::~CRSRCX()
{
}

void CRSRCX::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CRSRCX, CDialogEx)
END_MESSAGE_MAP()


// CRSRCX 消息处理程序
