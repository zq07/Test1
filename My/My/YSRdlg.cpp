// YSRdlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "My.h"
#include "YSRdlg.h"
#include "afxdialogex.h"


// CYSRdlg �Ի���

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


// CYSRdlg ��Ϣ�������


void CYSRdlg::OnBnClickedButtonchaxun()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}
