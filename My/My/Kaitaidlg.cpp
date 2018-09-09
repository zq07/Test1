// Kaitaidlg.cpp : 实现文件
//

#include "stdafx.h"
#include "My.h"
#include "Kaitaidlg.h"
#include "afxdialogex.h"
#include "Diancaidlg.h"


// CKaitaidlg 对话框

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


// CKaitaidlg 消息处理程序


void CKaitaidlg::OnBnClickedButtonOk()
{
	// TODO:  在此添加控件通知处理程序代码
	UpdateData();
	if (m_ZhuoHao.IsEmpty())
	{
		MessageBox(_T("桌号不能为空"));
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
	// TODO:  在此添加控件通知处理程序代码
	CDialog::OnCancel();
}


void CKaitaidlg::OnNMDblclkList2(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMITEMACTIVATE pNMItemActivate = reinterpret_cast<LPNMITEMACTIVATE>(pNMHDR);
	// TODO:  在此添加控件通知处理程序代码
	CString str;
	str = m_ZhuoList.GetItemText(m_ZhuoList.GetSelectionMark(), 0);
	m_ZhuoHao = str;
	UpdateData(false);
	*pResult = 0;
}


BOOL CKaitaidlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// TODO:  在此添加额外的初始化
	SetIcon(LoadIcon(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDI_ICON_kaitai)), TRUE);
	m_ZhuoList.SetExtendedStyle(LVS_EX_FLATSB | LVS_EX_FULLROWSELECT | LVS_EX_HEADERDRAGDROP | LVS_EX_ONECLICKACTIVATE | LVS_EX_GRIDLINES);
	m_ZhuoList.InsertColumn(0, _T("桌号"), LVCFMT_LEFT, 140, 0);
	m_ZhuoList.InsertColumn(1, _T("状态"), LVCFMT_LEFT, 140, 1);
	m_ZhuoList.InsertItem(0, _T(""));
	m_ZhuoList.SetItemText(0, 0, _T("1001"));
	m_ZhuoList.SetItemText(0, 1, _T("有人"));

	return TRUE;  // return TRUE unless you set the focus to a control
	// 异常:  OCX 属性页应返回 FALSE
}


void CKaitaidlg::OnOK()
{
	// TODO:  在此添加专用代码和/或调用基类

	OnBnClickedButtonOk();
}
