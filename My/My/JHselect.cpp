// JHselect.cpp : 实现文件
//

#include "stdafx.h"
#include "My.h"
#include "JHselect.h"
#include "afxdialogex.h"


// CJHselect 对话框

IMPLEMENT_DYNAMIC(CJHselect, CDialogEx)

CJHselect::CJHselect(CWnd* pParent /*=NULL*/)
	: CDialogEx(CJHselect::IDD, pParent)
{

}

CJHselect::~CJHselect()
{
}

void CJHselect::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CJHselect, CDialogEx)
END_MESSAGE_MAP()


// CJHselect 消息处理程序
