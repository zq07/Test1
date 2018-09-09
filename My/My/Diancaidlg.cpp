// Diancaidlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "My.h"
#include "Diancaidlg.h"
#include "afxdialogex.h"
#include "Shuliangdlg.h"


// CDiancaidlg �Ի���

IMPLEMENT_DYNAMIC(CDiancaidlg, CDialogEx)

CDiancaidlg::CDiancaidlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CDiancaidlg::IDD, pParent)
	, m_ZhuoHao(_T(""))
{

}

CDiancaidlg::~CDiancaidlg()
{
}

void CDiancaidlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_zhuohao, m_ZhuoHao);
	DDX_Control(pDX, IDC_LIST1, m_CaidanList);
	DDX_Control(pDX, IDC_LIST2, m_CaidanCheck);
}


BEGIN_MESSAGE_MAP(CDiancaidlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON_sub, &CDiancaidlg::OnBnClickedButtonsub)
	ON_BN_CLICKED(IDC_BUTTON_add, &CDiancaidlg::OnBnClickedButtonadd)
	ON_BN_CLICKED(IDC_BUTTON_OK, &CDiancaidlg::OnBnClickedButtonOk)
	ON_BN_CLICKED(IDC_BUTTON_CANCEL, &CDiancaidlg::OnBnClickedButtonCancel)
END_MESSAGE_MAP()


// CDiancaidlg ��Ϣ�������


void CDiancaidlg::OnBnClickedButtonsub()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	int i = m_CaidanCheck.GetSelectionMark();
	m_CaidanCheck.DeleteItem(i);
}


void CDiancaidlg::OnBnClickedButtonadd()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	int i = m_CaidanList.GetSelectionMark();
	if (i >= 0)
	{
		CShuliangdlg shuliang;
		if (shuliang.DoModal() == IDOK)
		{
			CString str = m_CaidanList.GetItemText(i, 0);
			m_CaidanCheck.InsertItem(0, _T(""));
			m_CaidanCheck.SetItemText(0, 0, str);
			m_CaidanCheck.SetItemText(0, 1, shuliang.m_Shuliang);
		}	
	}
	
}


void CDiancaidlg::OnBnClickedButtonOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData();
	int i = m_CaidanCheck.GetItemCount();
	if (i == 0)
	{
		MessageBox(_T("���ˣ�"));
		return;
	}
	MessageBox(_T("��˳ɹ���"));
	CDialogEx::OnOK();
}


void CDiancaidlg::OnBnClickedButtonCancel()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnCancel();
}


BOOL CDiancaidlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	SetIcon(LoadIcon(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDI_ICON_diancai)), TRUE);
	m_CaidanList.SetExtendedStyle(LVS_EX_FLATSB | LVS_EX_FULLROWSELECT | LVS_EX_HEADERDRAGDROP | LVS_EX_ONECLICKACTIVATE | LVS_EX_GRIDLINES);
	m_CaidanList.InsertColumn(0, _T("����"), LVCFMT_LEFT, 100, 0);
	m_CaidanList.InsertColumn(1, _T("�˼�(Ԫ)"), LVCFMT_LEFT, 100, 0);
	m_CaidanList.InsertItem(0, _T(""));
	m_CaidanList.SetItemText(0, 0, _T("���ű�"));
	m_CaidanList.SetItemText(0, 1, _T("10"));

	m_CaidanCheck.SetExtendedStyle(LVS_EX_FLATSB | LVS_EX_FULLROWSELECT | LVS_EX_HEADERDRAGDROP | LVS_EX_ONECLICKACTIVATE | LVS_EX_GRIDLINES);
	m_CaidanCheck.InsertColumn(0, _T("����"), LVCFMT_LEFT, 100, 0);
	m_CaidanCheck.InsertColumn(1, _T("����(��)"), LVCFMT_LEFT, 100, 0);

	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣:  OCX ����ҳӦ���� FALSE
}


void CDiancaidlg::OnOK()
{
	// TODO:  �ڴ����ר�ô����/����û���

	OnBnClickedButtonOk();
}
