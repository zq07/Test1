// Shuliangdlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "My.h"
#include "Shuliangdlg.h"
#include "afxdialogex.h"


// CShuliangdlg �Ի���

IMPLEMENT_DYNAMIC(CShuliangdlg, CDialogEx)

CShuliangdlg::CShuliangdlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CShuliangdlg::IDD, pParent)
	, m_Shuliang(_T(""))
{

}

CShuliangdlg::~CShuliangdlg()
{
}

void CShuliangdlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_Shuliang);
}


BEGIN_MESSAGE_MAP(CShuliangdlg, CDialogEx)
	ON_BN_CLICKED(ID_BUTTON_OK, &CShuliangdlg::OnBnClickedButtonOk)
	ON_BN_CLICKED(ID_BUTTON_CANCEL, &CShuliangdlg::OnBnClickedButtonCancel)
END_MESSAGE_MAP()


// CShuliangdlg ��Ϣ�������


void CShuliangdlg::OnBnClickedButtonOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData();
	if (m_Shuliang.IsEmpty() || m_Shuliang == _T("0"))
	{
		MessageBox(_T("��������Ϊ1"));
		return;
	}
	CDialogEx::OnOK();
}


void CShuliangdlg::OnBnClickedButtonCancel()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnCancel();
}


BOOL CShuliangdlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	SetIcon(LoadIcon(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDI_ICON_sl)), TRUE);
	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣:  OCX ����ҳӦ���� FALSE
}


void CShuliangdlg::OnOK()
{
	// TODO:  �ڴ����ר�ô����/����û���

	OnBnClickedButtonOk();
}
