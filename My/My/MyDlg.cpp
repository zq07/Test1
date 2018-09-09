
// MyDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "My.h"
#include "MyDlg.h"
#include "afxdialogex.h"
#include "Logindlg.h"
#include "Kaitaidlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CMyDlg �Ի���



CMyDlg::CMyDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CMyDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMyDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_COMMAND(ID_MENU_login, &CMyDlg::OnMenulogin)
	ON_COMMAND(ID_MENU_kaitai, &CMyDlg::OnMenukaitai)
	ON_COMMAND(ID_MENU_addcai, &CMyDlg::OnMenuaddcai)
	ON_COMMAND(ID_MENU_jiezhang, &CMyDlg::OnMenujiezhang)
	ON_COMMAND(ID_jiesuan, &CMyDlg::Onjiesuan)
	ON_COMMAND(ID_MENU_jinhuo, &CMyDlg::OnMenujinhuo)
	ON_COMMAND(ID_MENU_yuangong, &CMyDlg::OnMenuyuangong)
	ON_COMMAND(ID_MENU_SPInfo, &CMyDlg::OnMenuSpinfo)
	ON_COMMAND(ID_MENU_CP, &CMyDlg::OnMenuCp)
	ON_COMMAND(ID_MENU_rishouru, &CMyDlg::OnMenurishouru)
	ON_COMMAND(ID_MENU_yueshouru, &CMyDlg::OnMenuyueshouru)
	ON_COMMAND(ID_MENU_jinhuoselect, &CMyDlg::OnMenujinhuoselect)
	ON_COMMAND(ID_MENU_sqlcopy, &CMyDlg::OnMenusqlcopy)
	ON_COMMAND(ID_MENU_return, &CMyDlg::OnMenureturn)
	ON_COMMAND(ID_MENU_new, &CMyDlg::OnMenunew)
	ON_COMMAND(ID_MENU_quanxian, &CMyDlg::OnMenuquanxian)
	ON_COMMAND(ID_about, &CMyDlg::Onabout)
	ON_COMMAND(IDB_login, &CMyDlg::OnMenulogin)
	ON_COMMAND(IDB_kaitai, &CMyDlg::OnMenukaitai)
	ON_COMMAND(IDB_add, &CMyDlg::OnMenuaddcai)
	ON_COMMAND(IDB_pay, &CMyDlg::OnMenujiezhang)
	ON_COMMAND(IDB_rishouru, &CMyDlg::OnMenurishouru)
	ON_COMMAND(IDB_reg, &CMyDlg::OnMenuyuangong)
	ON_COMMAND(IDB_cancel, &CMyDlg::OnCancel)
END_MESSAGE_MAP()


// CMyDlg ��Ϣ�������

BOOL CMyDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO:  �ڴ���Ӷ���ĳ�ʼ������
	SetIcon(LoadIcon(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDR_MAINFRAME)), TRUE);

	m_Menu.LoadMenu(IDR_MENU1);
	SetMenu(&m_Menu);

	CTime Time;
	Time = CTime::GetCurrentTime();
	CString Str = Time.Format("%Y-%m-%d");

	m_Imagelist.Create(32, 32, ILC_COLOR24 | ILC_MASK, 1, 1);
	m_Imagelist.Add(AfxGetApp()->LoadIcon(IDI_ICON_login));
	m_Imagelist.Add(AfxGetApp()->LoadIcon(IDI_ICON_open));
	m_Imagelist.Add(AfxGetApp()->LoadIcon(IDI_ICON_add));
	m_Imagelist.Add(AfxGetApp()->LoadIcon(IDI_ICON_pay));
	m_Imagelist.Add(AfxGetApp()->LoadIcon(IDI_ICON_rishouru));
	m_Imagelist.Add(AfxGetApp()->LoadIcon(IDI_ICON_reg));
	m_Imagelist.Add(AfxGetApp()->LoadIcon(IDI_ICON_cancel));
	UINT Array[7];
	for (int i = 0; i<7; i++)
	{
		Array[i] = 9000 + i;
	}
	m_Toolbar.Create(this);
	m_Toolbar.SetButtons(Array, 7);
	m_Toolbar.SetButtonText(0, _T("ϵͳ��¼"));
	m_Toolbar.SetButtonText(1, _T("��̨"));
	m_Toolbar.SetButtonText(2, _T("�Ӽ���"));
	m_Toolbar.SetButtonText(3, _T("�˿���"));
	m_Toolbar.SetButtonText(4, _T("��������"));
	m_Toolbar.SetButtonText(5, _T("Ա��ע��"));
	m_Toolbar.SetButtonText(6, _T("�˳�ϵͳ"));
	m_Toolbar.GetToolBarCtrl().SetButtonWidth(60, 120);
	m_Toolbar.GetToolBarCtrl().SetImageList(&m_Imagelist);
	m_Toolbar.SetSizes(CSize(70, 60), CSize(28, 40));


	for (int i = 0; i<4; i++)
	{
		Array[i] = 10000 + 1;
	}
	m_Statusbar.Create(this);
	m_Statusbar.SetIndicators(Array, 4);
	for (int n = 0; n<3; n++)
	{
		m_Statusbar.SetPaneInfo(n, Array[n], 0, 80);
	}
	m_Statusbar.SetPaneInfo(1, Array[1], 0, 200);
	m_Statusbar.SetPaneInfo(2, Array[2], 0, 800);
	m_Statusbar.SetPaneText(2, _T("��ǰʱ��") + Str);
	m_Statusbar.SetPaneText(0, _T("��������ϵͳ"));
	RepositionBars(AFX_IDW_CONTROLBAR_FIRST, AFX_IDW_CONTROLBAR_LAST, 0);

	m_Toolbar.GetToolBarCtrl().EnableButton(IDB_kaitai, false);
	m_Toolbar.GetToolBarCtrl().EnableButton(IDB_pay, false);
	m_Toolbar.GetToolBarCtrl().EnableButton(IDB_rishouru, false);
	m_Toolbar.GetToolBarCtrl().EnableButton(IDB_reg, false);
	m_Toolbar.GetToolBarCtrl().EnableButton(IDB_add, false);
	CMenu* pMenu = GetMenu();
	pMenu->GetSubMenu(1)->EnableMenuItem(0, MF_BYPOSITION | MF_GRAYED);
	pMenu->GetSubMenu(1)->EnableMenuItem(1, MF_BYPOSITION | MF_GRAYED);
	pMenu->GetSubMenu(2)->EnableMenuItem(0, MF_BYPOSITION | MF_GRAYED);
	pMenu->GetSubMenu(2)->EnableMenuItem(1, MF_BYPOSITION | MF_GRAYED);
	pMenu->GetSubMenu(2)->EnableMenuItem(2, MF_BYPOSITION | MF_GRAYED);
	pMenu->GetSubMenu(3)->EnableMenuItem(0, MF_BYPOSITION | MF_GRAYED);
	pMenu->GetSubMenu(3)->EnableMenuItem(1, MF_BYPOSITION | MF_GRAYED);
	//CString Sql;
	//Sql = "select * from shouru where ʱ��='" + Str + "'";
	//m_pRs = theApp.m_pCon->Execute((_bstr_t)Sql, NULL, adCmdText);
	//if (m_pRs->adoEOF)
	//{

	//	theApp.m_pCon->Execute((_bstr_t)("insert into shouru(ʱ��)values('" + Str + "')"), NULL, adCmdText);
	//}


	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void CMyDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CMyDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CMyDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMyDlg::OnMenulogin()
{
	// TODO:  �ڴ���������������
	CLogindlg login;
	if (login.DoModal() == IDOK)
	{
		CMenu* pMenu = GetMenu();
		pMenu->GetSubMenu(1)->EnableMenuItem(0, MF_BYPOSITION | MF_ENABLED);
		pMenu->GetSubMenu(1)->EnableMenuItem(1, MF_BYPOSITION | MF_ENABLED);
		pMenu->GetSubMenu(2)->EnableMenuItem(0, MF_BYPOSITION | MF_ENABLED);
		pMenu->GetSubMenu(2)->EnableMenuItem(1, MF_BYPOSITION | MF_ENABLED);
		pMenu->GetSubMenu(2)->EnableMenuItem(2, MF_BYPOSITION | MF_ENABLED);
		pMenu->GetSubMenu(3)->EnableMenuItem(0, MF_BYPOSITION | MF_ENABLED);
		pMenu->GetSubMenu(3)->EnableMenuItem(1, MF_BYPOSITION | MF_ENABLED);
		m_Toolbar.GetToolBarCtrl().EnableButton(IDB_kaitai, true);
		m_Toolbar.GetToolBarCtrl().EnableButton(IDB_pay, true);
		m_Toolbar.GetToolBarCtrl().EnableButton(IDB_rishouru, true);
		m_Toolbar.GetToolBarCtrl().EnableButton(IDB_reg, true);
		m_Toolbar.GetToolBarCtrl().EnableButton(IDB_add, true);
	}
	return;
}


void CMyDlg::OnMenukaitai()
{
	// TODO:  �ڴ���������������
	CKaitaidlg kaitai;
	kaitai.DoModal();
	return;
}


void CMyDlg::OnMenuaddcai()
{
	// TODO:  �ڴ���������������
	MessageBox(_T("�Ӽ��˳ɹ�"));
	return;
}


void CMyDlg::OnMenujiezhang()
{
	// TODO:  �ڴ���������������
	MessageBox(_T("���˳ɹ�"));
	return;
}


void CMyDlg::Onjiesuan()
{
	// TODO:  �ڴ���������������
	MessageBox(_T("����ɹ�"));
	return;
}


void CMyDlg::OnMenujinhuo()
{
	// TODO:  �ڴ���������������
	MessageBox(_T("�����ɹ�"));
	return;
}


void CMyDlg::OnMenuyuangong()
{
	// TODO:  �ڴ���������������
	MessageBox(_T("Ա������"));
	return;
}


void CMyDlg::OnMenuSpinfo()
{
	// TODO:  �ڴ���������������
	MessageBox(_T("��Ʒ��Ϣ"));
	return;
}


void CMyDlg::OnMenuCp()
{
	// TODO:  �ڴ���������������
	MessageBox(_T("�˼���Ϣ"));
	return;
}


void CMyDlg::OnMenurishouru()
{
	// TODO:  �ڴ���������������
	MessageBox(_T("������"));
	return;
}


void CMyDlg::OnMenuyueshouru()
{
	// TODO:  �ڴ���������������
	MessageBox(_T("������"));
	return;
}


void CMyDlg::OnMenujinhuoselect()
{
	// TODO:  �ڴ���������������
	MessageBox(_T("������ѯ"));
	return;
}


void CMyDlg::OnMenusqlcopy()
{
	// TODO:  �ڴ���������������
	MessageBox(_T("���ݿ⿽��"));
	return;
}


void CMyDlg::OnMenureturn()
{
	// TODO:  �ڴ���������������
	MessageBox(_T("���ݿ⻹ԭ"));
	return;
}


void CMyDlg::OnMenunew()
{
	// TODO:  �ڴ���������������
	MessageBox(_T("�½�����"));
	return;
}


void CMyDlg::OnMenuquanxian()
{
	// TODO:  �ڴ���������������
	MessageBox(_T("Ȩ�޹���"));
	return;
}


void CMyDlg::Onabout()
{
	// TODO:  �ڴ���������������
	MessageBox(_T("���ڡ�����"));
	return;
}
