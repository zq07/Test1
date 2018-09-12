// SpInfo.cpp : 实现文件
//

#include "stdafx.h"
#include "My.h"
#include "SpInfo.h"
#include "afxdialogex.h"


// CSpInfo 对话框

IMPLEMENT_DYNAMIC(CSpInfo, CDialogEx)

CSpInfo::CSpInfo(CWnd* pParent /*=NULL*/)
	: CDialogEx(CSpInfo::IDD, pParent)
{

}

CSpInfo::~CSpInfo()
{
}

void CSpInfo::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSpInfo, CDialogEx)
END_MESSAGE_MAP()


// CSpInfo 消息处理程序
