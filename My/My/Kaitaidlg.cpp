// Kaitaidlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "My.h"
#include "Kaitaidlg.h"
#include "afxdialogex.h"
#include "Diancaidlg.h"


// CKaitaidlg �Ի���

IMPLEMENT_DYNAMIC(CKaitaidlg, CDialog)

CKaitaidlg::CKaitaidlg(CWnd* pParent /*=NULL*/)
	: CDialog(CKaitaidlg::IDD, pParent)
	, m_ZhuoHao(_T(""))
{

}

CKaitaidlg::~CKaitaidlg()
{
}

void CKaitaidlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST2, m_ZhuoList);
	DDX_Text(pDX, IDC_EDIT1, m_ZhuoHao);
}


BEGIN_MESSAGE_MAP(CKaitaidlg, CDialog)
	ON_BN_CLICKED(IDC_BUTTON_OK, &CKaitaidlg::OnBnClickedButtonOk)
	ON_BN_CLICKED(IDC_BUTTON_return, &CKaitaidlg::OnBnClickedButtonreturn)
	ON_NOTIFY(NM_DBLCLK, IDC_LIST2, &CKaitaidlg::OnNMDblclkList2)
END_MESSAGE_MAP()


// CKaitaidlg ��Ϣ�������


void CKaitaidlg::OnBnClickedButtonOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	UpdateData();
	if (m_ZhuoHao.IsEmpty())
	{
		MessageBox(_T("���Ų���Ϊ��"));
	}
	else
	{
		CDiancaidlg diancai;
		diancai.m_ZhuoHao = m_ZhuoHao;
		diancai.DoModal();
		CDialog::OnOK();
	}
}


void CKaitaidlg::OnBnClickedButtonreturn()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CDialog::OnCancel();
}


void CKaitaidlg::OnNMDblclkList2(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMITEMACTIVATE pNMItemActivate = reinterpret_cast<LPNMITEMACTIVATE>(pNMHDR);
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CString str;
	str = m_ZhuoList.GetItemText(m_ZhuoList.GetSelectionMark(), 0);
	m_ZhuoHao = str;
	UpdateData(false);
	*pResult = 0;
}


BOOL CKaitaidlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	SetIcon(LoadIcon(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDI_ICON_kaitai)), TRUE);
	m_ZhuoList.SetExtendedStyle(LVS_EX_FLATSB | LVS_EX_FULLROWSELECT | LVS_EX_HEADERDRAGDROP | LVS_EX_ONECLICKACTIVATE | LVS_EX_GRIDLINES);
	m_ZhuoList.InsertColumn(0, _T("����"), LVCFMT_LEFT, 140, 0);
	m_ZhuoList.InsertColumn(1, _T("״̬"), LVCFMT_LEFT, 140, 1);
	m_ZhuoList.InsertItem(0, _T(""));
	m_ZhuoList.SetItemText(0, 0, _T("1001"));
	m_ZhuoList.SetItemText(0, 1, _T("����"));

	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣:  OCX ����ҳӦ���� FALSE
}


void CKaitaidlg::OnOK()
{
	// TODO:  �ڴ����ר�ô����/����û���

	OnBnClickedButtonOk();
}
