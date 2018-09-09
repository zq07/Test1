// Logindlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "My.h"
#include "Logindlg.h"
#include "afxdialogex.h"


// CLogindlg �Ի���

IMPLEMENT_DYNAMIC(CLogindlg, CDialogEx)

CLogindlg::CLogindlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CLogindlg::IDD, pParent)
	, m_Uname(_T(""))
	, m_Upasswd(_T(""))
{

}

CLogindlg::~CLogindlg()
{
}

void CLogindlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_Uname);
	DDX_Text(pDX, IDC_EDIT2, m_Upasswd);
}


BEGIN_MESSAGE_MAP(CLogindlg, CDialogEx)
END_MESSAGE_MAP()


// CLogindlg ��Ϣ�������


void CLogindlg::OnOK()
{
	// TODO:  �ڴ����ר�ô����/����û���
	UpdateData();
	if (!m_Uname.IsEmpty() || !m_Uname.IsEmpty())
	{
		if (m_Uname == _T("zq") && m_Upasswd == _T("123"))
		{
			CDialogEx::OnOK();
		}
		else
		{
			MessageBox(_T("�û������������"));
		}
	}
	else
	{
		MessageBox(_T("�û���������Ϊ�գ�"));
	}

}


void CLogindlg::OnCancel()
{
	// TODO:  �ڴ����ר�ô����/����û���

	CDialogEx::OnCancel();
}


BOOL CLogindlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	SetIcon(LoadIcon(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDI_ICON_login)), TRUE);
	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣:  OCX ����ҳӦ���� FALSE
}
