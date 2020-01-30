
// Single_DRS0101Dlg.h: 헤더 파일
//

#pragma once
#include "HDLL.h" // Include HDLL Header file

// CSingleDRS0101Dlg 대화 상자
class CSingleDRS0101Dlg : public CDialogEx
{
// 생성입니다.
public:
	CSingleDRS0101Dlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SINGLE_DRS0101_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	int m_iTarget;
	afx_msg void OnEnChangeEdit1();
	unsigned int m_uiPlayTime;
	afx_msg void OnEnChangeEdit2();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	unsigned int m_uiAddr_RAM_R;
	afx_msg void OnEnChangeEdit3();
	unsigned int m_uiRAM_Data_R;
	afx_msg void OnEnChangeEdit4();
	unsigned int m_uiAddr_EEP_R;
	afx_msg void OnEnChangeEdit5();
	unsigned int m_uiEEP_Data_R;
	afx_msg void OnEnChangeEdit6();
	unsigned int m_uiAddr_RAM_W;
	afx_msg void OnEnChangeEdit7();
	unsigned int m_uiRAM_Data_W;
	afx_msg void OnEnChangeEdit8();
	unsigned int m_uiAddr_EEP_W;
	afx_msg void OnEnChangeEdit9();
	unsigned int m_uiEEP_Data_W;
	afx_msg void OnEnChangeEdit10();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton10();
	afx_msg void OnBnClickedButton11();
	afx_msg void OnBnClickedButton12();
	afx_msg void OnBnClickedButton13();
	afx_msg void OnBnClickedButton14();
	double m_dTargetAngle;
	afx_msg void OnEnChangeEdit11();
	double m_dAngleData;
	afx_msg void OnEnChangeEdit12();
	afx_msg void OnBnClickedButton15();
	afx_msg void OnBnClickedButton16();
	afx_msg void OnBnClickedButton17();
	afx_msg void OnBnClickedButton20();
	afx_msg void OnBnClickedButton21();
	afx_msg void OnBnClickedButton22();
	afx_msg void OnBnClickedButton18();
	afx_msg void OnBnClickedButton19();
};
