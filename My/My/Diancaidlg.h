#pragma once
#include "afxcmn.h"


// CDiancaidlg �Ի���

class CDiancaidlg : public CDialogEx
{
	DECLARE_DYNAMIC(CDiancaidlg)

public:
	CDiancaidlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~CDiancaidlg();

// �Ի�������
	enum { IDD = IDD_diancai };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString m_ZhuoHao;
	CListCtrl m_CaidanList;
	CListCtrl m_CaidanCheck;
	afx_msg void OnBnClickedButtonsub();
	afx_msg void OnBnClickedButtonadd();
	afx_msg void OnBnClickedButtonOk();
	afx_msg void OnBnClickedButtonCancel();
	virtual BOOL OnInitDialog();
	virtual void OnOK();
};
