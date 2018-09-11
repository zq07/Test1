// Jiacaidlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "My.h"
#include "Jiacaidlg.h"
#include "afxdialogex.h"
#include "Shuliangdlg.h"


// CJiacaidlg �Ի���

IMPLEMENT_DYNAMIC(CJiacaidlg, CDialogEx)

CJiacaidlg::CJiacaidlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CJiacaidlg::IDD, pParent)
{

}

CJiacaidlg::~CJiacaidlg()
{
}

void CJiacaidlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_COMBO1, m_ZhuohaoCombo);
	DDX_Control(pDX, IDC_LIST1, m_CaidanList);
	DDX_Control(pDX, IDC_LIST2, m_CaidanCheck);
}


BEGIN_MESSAGE_MAP(CJiacaidlg, CDialogEx)
	ON_CBN_SELCHANGE(IDC_COMBO1, &CJiacaidlg::OnCbnSelchangeCombo1)
	ON_BN_CLICKED(IDC_BUTTON1, &CJiacaidlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CJiacaidlg::OnBnClickedButton2)
	ON_BN_CLICKED(ID_BUTTON_OK, &CJiacaidlg::OnBnClickedButtonOk)
	ON_BN_CLICKED(ID_BUTTON_CANCEL, &CJiacaidlg::OnBnClickedButtonCancel)
END_MESSAGE_MAP()


// CJiacaidlg ��Ϣ�������


BOOL CJiacaidlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	SetIcon(LoadIcon(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDI_ICON_diancai)), TRUE);

	m_CaidanList.SetExtendedStyle(LVS_EX_FLATSB | LVS_EX_FULLROWSELECT | LVS_EX_HEADERDRAGDROP | LVS_EX_ONECLICKACTIVATE | LVS_EX_GRIDLINES);
	m_CaidanList.InsertColumn(0, _T("����"), LVCFMT_LEFT, 100, 0);
	m_CaidanList.InsertColumn(1, _T("�˼ۣ�Ԫ��"), LVCFMT_LEFT, 100, 0);
	m_CaidanList.InsertItem(0, _T(""));
	m_CaidanList.SetItemText(0, 0, _T("���ű�"));
	m_CaidanList.SetItemText(0, 1, _T("10"));

	m_CaidanCheck.SetExtendedStyle(LVS_EX_FLATSB | LVS_EX_FULLROWSELECT | LVS_EX_HEADERDRAGDROP | LVS_EX_ONECLICKACTIVATE | LVS_EX_GRIDLINES);
	m_CaidanCheck.InsertColumn(0, _T("����"), LVCFMT_LEFT, 100, 0);
	m_CaidanCheck.InsertColumn(1, _T("�������ݣ�"), LVCFMT_LEFT, 100, 0);
	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣:  OCX ����ҳӦ���� FALSE
}


void CJiacaidlg::OnCbnSelchangeCombo1()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CJiacaidlg::OnBnClickedButton1()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CShuliangdlg shuliang;
	if (shuliang.DoModal() == IDOK)
	{
		int i = m_CaidanList.GetSelectionMark();
		CString str = m_CaidanList.GetItemText(i, 0);
		m_CaidanCheck.InsertItem(0, _T(""));
		m_CaidanCheck.SetItemText(0, 0, str);
		m_CaidanCheck.SetItemText(0, 1, _T("1"));
	}
}


void CJiacaidlg::OnBnClickedButton2()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	m_CaidanCheck.DeleteItem(m_CaidanList.GetSelectionMark());
}


void CJiacaidlg::OnBnClickedButtonOk()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnOK();
}


void CJiacaidlg::OnBnClickedButtonCancel()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnCancel();
}
