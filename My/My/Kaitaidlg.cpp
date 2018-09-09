// Kaitaidlg.cpp : 实现文件
//

#include "stdafx.h"
#include "My.h"
#include "Kaitaidlg.h"
#include "afxdialogex.h"


// CKaitaidlg 对话框

IMPLEMENT_DYNAMIC(CKaitaidlg, CDialog)

CKaitaidlg::CKaitaidlg(CWnd* pParent /*=NULL*/)
	: CDialog(CKaitaidlg::IDD, pParent)
{

}

CKaitaidlg::~CKaitaidlg()
{
}

void CKaitaidlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CKaitaidlg, CDialog)
END_MESSAGE_MAP()


// CKaitaidlg 消息处理程序
