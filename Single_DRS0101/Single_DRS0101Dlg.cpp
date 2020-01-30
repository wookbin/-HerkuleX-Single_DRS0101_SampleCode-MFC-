
// Single_DRS0101Dlg.cpp: 구현 파일
//

#include "pch.h"
#include "framework.h"
#include "Single_DRS0101.h"
#include "Single_DRS0101Dlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// 응용 프로그램 정보에 사용되는 CAboutDlg 대화 상자입니다.

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

// 구현입니다.
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CSingleDRS0101Dlg 대화 상자



CSingleDRS0101Dlg::CSingleDRS0101Dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_SINGLE_DRS0101_DIALOG, pParent)
	, m_iTarget(512)
	, m_uiPlayTime(60)
	, m_uiAddr_RAM_R(0)
	, m_uiRAM_Data_R(0)
	, m_uiAddr_EEP_R(0)
	, m_uiEEP_Data_R(0)
	, m_uiAddr_RAM_W(0)
	, m_uiRAM_Data_W(0)
	, m_uiAddr_EEP_W(0)
	, m_uiEEP_Data_W(0)
	, m_dTargetAngle(0.0)
	, m_dAngleData(0.0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CSingleDRS0101Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_iTarget);
	DDX_Text(pDX, IDC_EDIT2, m_uiPlayTime);
	DDX_Text(pDX, IDC_EDIT3, m_uiAddr_RAM_R);
	DDX_Text(pDX, IDC_EDIT4, m_uiRAM_Data_R);
	DDX_Text(pDX, IDC_EDIT5, m_uiAddr_EEP_R);
	DDX_Text(pDX, IDC_EDIT6, m_uiEEP_Data_R);
	DDX_Text(pDX, IDC_EDIT7, m_uiAddr_RAM_W);
	DDX_Text(pDX, IDC_EDIT8, m_uiRAM_Data_W);
	DDX_Text(pDX, IDC_EDIT9, m_uiAddr_EEP_W);
	DDX_Text(pDX, IDC_EDIT10, m_uiEEP_Data_W);
	DDX_Text(pDX, IDC_EDIT11, m_dTargetAngle);
	DDX_Text(pDX, IDC_EDIT12, m_dAngleData);
}

BEGIN_MESSAGE_MAP(CSingleDRS0101Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON1, &CSingleDRS0101Dlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CSingleDRS0101Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CSingleDRS0101Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CSingleDRS0101Dlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CSingleDRS0101Dlg::OnBnClickedButton5)
	ON_EN_CHANGE(IDC_EDIT1, &CSingleDRS0101Dlg::OnEnChangeEdit1)
	ON_EN_CHANGE(IDC_EDIT2, &CSingleDRS0101Dlg::OnEnChangeEdit2)
	ON_BN_CLICKED(IDC_BUTTON6, &CSingleDRS0101Dlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CSingleDRS0101Dlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CSingleDRS0101Dlg::OnBnClickedButton8)
	ON_EN_CHANGE(IDC_EDIT3, &CSingleDRS0101Dlg::OnEnChangeEdit3)
	ON_EN_CHANGE(IDC_EDIT4, &CSingleDRS0101Dlg::OnEnChangeEdit4)
	ON_EN_CHANGE(IDC_EDIT5, &CSingleDRS0101Dlg::OnEnChangeEdit5)
	ON_EN_CHANGE(IDC_EDIT6, &CSingleDRS0101Dlg::OnEnChangeEdit6)
	ON_EN_CHANGE(IDC_EDIT7, &CSingleDRS0101Dlg::OnEnChangeEdit7)
	ON_EN_CHANGE(IDC_EDIT8, &CSingleDRS0101Dlg::OnEnChangeEdit8)
	ON_EN_CHANGE(IDC_EDIT9, &CSingleDRS0101Dlg::OnEnChangeEdit9)
	ON_EN_CHANGE(IDC_EDIT10, &CSingleDRS0101Dlg::OnEnChangeEdit10)
	ON_BN_CLICKED(IDC_BUTTON9, &CSingleDRS0101Dlg::OnBnClickedButton9)
	ON_BN_CLICKED(IDC_BUTTON10, &CSingleDRS0101Dlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON11, &CSingleDRS0101Dlg::OnBnClickedButton11)
	ON_BN_CLICKED(IDC_BUTTON12, &CSingleDRS0101Dlg::OnBnClickedButton12)
	ON_BN_CLICKED(IDC_BUTTON13, &CSingleDRS0101Dlg::OnBnClickedButton13)
	ON_BN_CLICKED(IDC_BUTTON14, &CSingleDRS0101Dlg::OnBnClickedButton14)
	ON_EN_CHANGE(IDC_EDIT11, &CSingleDRS0101Dlg::OnEnChangeEdit11)
	ON_EN_CHANGE(IDC_EDIT12, &CSingleDRS0101Dlg::OnEnChangeEdit12)
	ON_BN_CLICKED(IDC_BUTTON15, &CSingleDRS0101Dlg::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON16, &CSingleDRS0101Dlg::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON17, &CSingleDRS0101Dlg::OnBnClickedButton17)
	ON_BN_CLICKED(IDC_BUTTON20, &CSingleDRS0101Dlg::OnBnClickedButton20)
	ON_BN_CLICKED(IDC_BUTTON21, &CSingleDRS0101Dlg::OnBnClickedButton21)
	ON_BN_CLICKED(IDC_BUTTON22, &CSingleDRS0101Dlg::OnBnClickedButton22)
	ON_BN_CLICKED(IDC_BUTTON18, &CSingleDRS0101Dlg::OnBnClickedButton18)
	ON_BN_CLICKED(IDC_BUTTON19, &CSingleDRS0101Dlg::OnBnClickedButton19)
END_MESSAGE_MAP()


// CSingleDRS0101Dlg 메시지 처리기

BOOL CSingleDRS0101Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 시스템 메뉴에 "정보..." 메뉴 항목을 추가합니다.

	// IDM_ABOUTBOX는 시스템 명령 범위에 있어야 합니다.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
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

	// 이 대화 상자의 아이콘을 설정합니다.  응용 프로그램의 주 창이 대화 상자가 아닐 경우에는
	//  프레임워크가 이 작업을 자동으로 수행합니다.
	SetIcon(m_hIcon, TRUE);			// 큰 아이콘을 설정합니다.
	SetIcon(m_hIcon, FALSE);		// 작은 아이콘을 설정합니다.

	// TODO: 여기에 추가 초기화 작업을 추가합니다.

	return TRUE;  // 포커스를 컨트롤에 설정하지 않으면 TRUE를 반환합니다.
}

void CSingleDRS0101Dlg::OnSysCommand(UINT nID, LPARAM lParam)
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

// 대화 상자에 최소화 단추를 추가할 경우 아이콘을 그리려면
//  아래 코드가 필요합니다.  문서/뷰 모델을 사용하는 MFC 애플리케이션의 경우에는
//  프레임워크에서 이 작업을 자동으로 수행합니다.

void CSingleDRS0101Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 그리기를 위한 디바이스 컨텍스트입니다.

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 클라이언트 사각형에서 아이콘을 가운데에 맞춥니다.
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 아이콘을 그립니다.
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// 사용자가 최소화된 창을 끄는 동안에 커서가 표시되도록 시스템에서
//  이 함수를 호출합니다.
HCURSOR CSingleDRS0101Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CSingleDRS0101Dlg::OnBnClickedButton1()
{
	// Serial Connect//
	Connect(3, 115200); //Serial Port: COM3, Baudrate: 115,200bps

	Sleep(10);

	OnInitialize(1); //HerkuleX ID: 1 
}


void CSingleDRS0101Dlg::OnBnClickedButton2()
{
	// Serial Disconnect
	Disconnect();
}


void CSingleDRS0101Dlg::OnBnClickedButton3()
{
	// Torque On
	Herkulex_Servo_Enable(1, 1);
}


void CSingleDRS0101Dlg::OnBnClickedButton4()
{
	// Torque Off
	Herkulex_Servo_Enable(1, 0);
}


void CSingleDRS0101Dlg::OnBnClickedButton5()
{
	// Brake On
	Herkulex_Servo_Enable(1, 2);
}


void CSingleDRS0101Dlg::OnEnChangeEdit1()
{
	// TODO:  RICHEDIT 컨트롤인 경우, 이 컨트롤은
	// CDialogEx::OnInitDialog() 함수를 재지정 
	//하고 마스크에 OR 연산하여 설정된 ENM_CHANGE 플래그를 지정하여 CRichEditCtrl().SetEventMask()를 호출하지 않으면
	// 이 알림 메시지를 보내지 않습니다.

	// TODO:  여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CSingleDRS0101Dlg::OnEnChangeEdit2()
{
	// TODO:  RICHEDIT 컨트롤인 경우, 이 컨트롤은
	// CDialogEx::OnInitDialog() 함수를 재지정 
	//하고 마스크에 OR 연산하여 설정된 ENM_CHANGE 플래그를 지정하여 CRichEditCtrl().SetEventMask()를 호출하지 않으면
	// 이 알림 메시지를 보내지 않습니다.

	// TODO:  여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CSingleDRS0101Dlg::OnBnClickedButton6()
{
	// Position Move
	UpdateData();

	Position_Move(1, 1, m_uiPlayTime, m_iTarget, 0);
	// HerkuleX ID: 1
	// LED: 1 (Green)
	// m_uiPlayTime: Play Time(*11.2ms)   |   ex) 60 ->  11.2ms * 60 = 672ms
	// m_iTarget: Position Data
	// Jog Mode: 0 (S_Jog)
}


void CSingleDRS0101Dlg::OnBnClickedButton7()
{
	// Velocity Move
	UpdateData();

	Velocity_Move(1, 2, m_iTarget, 0);
	// HerkuleX ID: 1
	// LED: 2 (Blue)
	// m_iTarget: Velocity Data(PWM)
	// Jog Mode: 0 (S_Jog)
}


void CSingleDRS0101Dlg::OnBnClickedButton8()
{
	// LED Setting//
	UpdateData();

	bool m_bLED[3] = { false, false, false};

	//LED Check Box//
	CButton* pChecBox1 = (CButton*)GetDlgItem(IDC_CHECK1);
	CButton* pChecBox2 = (CButton*)GetDlgItem(IDC_CHECK2);
	CButton* pChecBox3 = (CButton*)GetDlgItem(IDC_CHECK3);

	if (pChecBox1->GetCheck()) //GREEN Enable
		m_bLED[0] = true;
	else
		m_bLED[0] = false;

	if (pChecBox2->GetCheck()) //BLUE Enable
		m_bLED[1] = true;
	else
		m_bLED[1] = false;

	if (pChecBox3->GetCheck()) //RED Enable
		m_bLED[2] = true;
	else
		m_bLED[2] = false;


	Herkulex_Set_LED(1, m_bLED[0], m_bLED[1], m_bLED[2]);
}


void CSingleDRS0101Dlg::OnEnChangeEdit3()
{
	// TODO:  RICHEDIT 컨트롤인 경우, 이 컨트롤은
	// CDialogEx::OnInitDialog() 함수를 재지정 
	//하고 마스크에 OR 연산하여 설정된 ENM_CHANGE 플래그를 지정하여 CRichEditCtrl().SetEventMask()를 호출하지 않으면
	// 이 알림 메시지를 보내지 않습니다.

	// TODO:  여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CSingleDRS0101Dlg::OnEnChangeEdit4()
{
	// TODO:  RICHEDIT 컨트롤인 경우, 이 컨트롤은
	// CDialogEx::OnInitDialog() 함수를 재지정 
	//하고 마스크에 OR 연산하여 설정된 ENM_CHANGE 플래그를 지정하여 CRichEditCtrl().SetEventMask()를 호출하지 않으면
	// 이 알림 메시지를 보내지 않습니다.

	// TODO:  여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CSingleDRS0101Dlg::OnEnChangeEdit5()
{
	// TODO:  RICHEDIT 컨트롤인 경우, 이 컨트롤은
	// CDialogEx::OnInitDialog() 함수를 재지정 
	//하고 마스크에 OR 연산하여 설정된 ENM_CHANGE 플래그를 지정하여 CRichEditCtrl().SetEventMask()를 호출하지 않으면
	// 이 알림 메시지를 보내지 않습니다.

	// TODO:  여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CSingleDRS0101Dlg::OnEnChangeEdit6()
{
	// TODO:  RICHEDIT 컨트롤인 경우, 이 컨트롤은
	// CDialogEx::OnInitDialog() 함수를 재지정 
	//하고 마스크에 OR 연산하여 설정된 ENM_CHANGE 플래그를 지정하여 CRichEditCtrl().SetEventMask()를 호출하지 않으면
	// 이 알림 메시지를 보내지 않습니다.

	// TODO:  여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CSingleDRS0101Dlg::OnEnChangeEdit7()
{
	// TODO:  RICHEDIT 컨트롤인 경우, 이 컨트롤은
	// CDialogEx::OnInitDialog() 함수를 재지정 
	//하고 마스크에 OR 연산하여 설정된 ENM_CHANGE 플래그를 지정하여 CRichEditCtrl().SetEventMask()를 호출하지 않으면
	// 이 알림 메시지를 보내지 않습니다.

	// TODO:  여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CSingleDRS0101Dlg::OnEnChangeEdit8()
{
	// TODO:  RICHEDIT 컨트롤인 경우, 이 컨트롤은
	// CDialogEx::OnInitDialog() 함수를 재지정 
	//하고 마스크에 OR 연산하여 설정된 ENM_CHANGE 플래그를 지정하여 CRichEditCtrl().SetEventMask()를 호출하지 않으면
	// 이 알림 메시지를 보내지 않습니다.

	// TODO:  여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CSingleDRS0101Dlg::OnEnChangeEdit9()
{
	// TODO:  RICHEDIT 컨트롤인 경우, 이 컨트롤은
	// CDialogEx::OnInitDialog() 함수를 재지정 
	//하고 마스크에 OR 연산하여 설정된 ENM_CHANGE 플래그를 지정하여 CRichEditCtrl().SetEventMask()를 호출하지 않으면
	// 이 알림 메시지를 보내지 않습니다.

	// TODO:  여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CSingleDRS0101Dlg::OnEnChangeEdit10()
{
	// TODO:  RICHEDIT 컨트롤인 경우, 이 컨트롤은
	// CDialogEx::OnInitDialog() 함수를 재지정 
	//하고 마스크에 OR 연산하여 설정된 ENM_CHANGE 플래그를 지정하여 CRichEditCtrl().SetEventMask()를 호출하지 않으면
	// 이 알림 메시지를 보내지 않습니다.

	// TODO:  여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CSingleDRS0101Dlg::OnBnClickedButton9()
{
	// RAM Register Set Data//
	UpdateData();

	SET_RAM_RegisterData_Read(1, m_uiAddr_RAM_R, 1);
	// HerkuleX ID: 1
	// RAM Register Address Number: m_uiAddr_RAM_R
	// count: 1 (Data count: 1)
}


void CSingleDRS0101Dlg::OnBnClickedButton10()
{
	// RAM Register Get Data//
	UpdateData();
	CString strTemp;

	//EDIT Box Output
	strTemp.Format("%d", GET_RAM_MAP_Read(1, m_uiAddr_RAM_R)); //HerkuleX ID: 1,  RAM Register Address Number: m_uiAddr_RAM_R
	GetDlgItem(IDC_EDIT4)->SetWindowText(strTemp);
}


void CSingleDRS0101Dlg::OnBnClickedButton11()
{
	// EEP Register Set Data//
	UpdateData();

	SET_EEP_RegisterData_Read(1, m_uiAddr_EEP_R, 1);
	// HerkuleX ID: 1
	// EEP Register Address Number: m_uiAddr_EEP_R
	// count: 1 (Data count: 1)

}


void CSingleDRS0101Dlg::OnBnClickedButton12()
{
	// EEP Register Get Data//
	UpdateData();
	CString strTemp;

	//EDIT Box Output
	strTemp.Format("%d", GET_EEP_MAP_Read(1, m_uiAddr_EEP_R)); //HerkuleX ID: 1,  EEP Register Address Number: m_uiAddr_EEP_R
	GetDlgItem(IDC_EDIT6)->SetWindowText(strTemp);
}


void CSingleDRS0101Dlg::OnBnClickedButton13()
{
	//RAM Register Data Write//
	UpdateData();

	SET_RAM_RegisterData_Write(1, m_uiAddr_RAM_W, m_uiRAM_Data_W);
	// HerkuleX ID: 1
	// RAM Register Address Number: m_uiAddr_RAM_W
	// RAM Register Data: m_uiRAM_Data_W
}


void CSingleDRS0101Dlg::OnBnClickedButton14()
{
	//EEP Register Data Write//
	UpdateData();

	SET_EEP_RegisterData_Write(1, m_uiAddr_EEP_W, m_uiEEP_Data_W);
	// HerkuleX ID: 1
	// EEP Register Address Number: m_uiAddr_EEP_W
	// EEP Register Data: m_uiEEP_Data_W
}


void CSingleDRS0101Dlg::OnEnChangeEdit11()
{
	// TODO:  RICHEDIT 컨트롤인 경우, 이 컨트롤은
	// CDialogEx::OnInitDialog() 함수를 재지정 
	//하고 마스크에 OR 연산하여 설정된 ENM_CHANGE 플래그를 지정하여 CRichEditCtrl().SetEventMask()를 호출하지 않으면
	// 이 알림 메시지를 보내지 않습니다.

	// TODO:  여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CSingleDRS0101Dlg::OnEnChangeEdit12()
{
	// TODO:  RICHEDIT 컨트롤인 경우, 이 컨트롤은
	// CDialogEx::OnInitDialog() 함수를 재지정 
	//하고 마스크에 OR 연산하여 설정된 ENM_CHANGE 플래그를 지정하여 CRichEditCtrl().SetEventMask()를 호출하지 않으면
	// 이 알림 메시지를 보내지 않습니다.

	// TODO:  여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CSingleDRS0101Dlg::OnBnClickedButton15()
{
	// Count Target Move --> Angle(deg) Move
	UpdateData();

	int icalc_Target = 0;

	//Angle To Count
	icalc_Target = (int)(m_dTargetAngle / 0.325) + 512; 
	// Position Data = (Angle Data / 0.325deg) + 512(count)
	/*
	- DRS-0101: Position Data = (Angle Data / 0.325deg) + 512(count)
	- DRS-0201: Position Data = (Angle Data / 0.325deg) + 512(count)
	- DRS-0401: Position Data = (Angle Data / 0.163deg) + 1024(count)
	- DRS-0402: Position Data = (Angle Data / 0.02778deg) + 16384(count)
	- DRS-0601: Position Data = (Angle Data / 0.163deg) + 1024(count)
	- DRS-0602: Position Data = (Angle Data / 0.02778deg) + 16384(count)
	*/

	Position_Move(1, 4, 60, icalc_Target, 0);
	// HerkuleX ID: 1
	// LED: 4 (Red)
	// PlayTime: 60 (11.2ms * 60 = 672ms)
	// icalc_Target: Angle Data -> Count Data
	// Jog Mode: 0 (S_Jog)
}


void CSingleDRS0101Dlg::OnBnClickedButton16()
{
	// Set Angle Data Call
	SET_RAM_RegisterData_Read(1, RAM_CALIBRATED_POSITION, 1);
	// HerkuleX ID: 1
	// RAM Register Address: 58 (RAM_CALIBRATED_POSITION)
	// count: 1 (Data count: 1)
}


void CSingleDRS0101Dlg::OnBnClickedButton17()
{
	// Get Angle Data
	CString strAngle;
	int iPositionData = 0;
	double dAngleData = 0.0;

	iPositionData = GET_RAM_MAP_Read(1, RAM_CALIBRATED_POSITION); //HerkuleX ID: 1,  RAM Register Address Number: 58 (RAM_CALIBRATED_POSITION)
	// Count To Angle
	dAngleData = (iPositionData - 512) * 0.325;
	/*
	- DRS-0101: (Position Data - 512) * 0.325deg
	- DRS-0201: (Position Data - 512) * 0.325deg
	- DRS-0401: (Position Data - 1024) * 0.163deg
	- DRS-0402: (Position Data - 16384) * 0.02778deg
	- DRS-0601: (Position Data - 1024) * 0.163deg
	- DRS-0602: (Position Data - 16384) * 0.02778deg
	*/

	//EDIT Box Output
	strAngle.Format("%.2f", dAngleData);
	GetDlgItem(IDC_EDIT12)->SetWindowText(strAngle);
}


void CSingleDRS0101Dlg::OnBnClickedButton20()
{
	// Error Clear
	Herkulex_ErrorClear(1); //HerkuleX ID: 1
}


void CSingleDRS0101Dlg::OnBnClickedButton21()
{
	// Factory Reset
	FactoryReset(1, 1, 1);
	//HerkuleX ID: 1
	// ID_Skip: 1 (on)
	// Baudrate_Skip: 1 (on)
}


void CSingleDRS0101Dlg::OnBnClickedButton22()
{
	// HerkuleX Rebooting
	Reboot(1); //HerkuleX ID: 1
}


void CSingleDRS0101Dlg::OnBnClickedButton18()
{
	// HerkuleX Get_Status Data Call
	SET_RAM_RegisterData_Read(1, RAM_STATUS_ERROR, 2);
	//HerkuleX ID: 1
	// RAM Register Address: 48 (RAM_STATUS_ERROR)
	// count: 2 (RAM_STATUS_ERROR_48 & RAM_STATUS_DETAIL_49 Sellect)
}


void CSingleDRS0101Dlg::OnBnClickedButton19()
{
	// View Message Box -> HerkuleX Status Data List
	int iStatusError = 0;
	int iError_Voltage_Limit = 0;
	int iError_Position_Limit = 0;
	int iError_Temperature_Limit = 0;
	int iError_Overload = 0;
	int iError_DriverFault = 0;
	int iError_EEP = 0;

	int iStatusDetail = 0;
	int iDetail_Moving = 0;
	int iDetail_Inposition = 0;
	int iDetail_CheckSum = 0;
	int iDetail_UnknownCommand = 0;
	int iDetail_Garbage = 0;
	int iDetail_MotorOn = 0;

	CString strVoltage_Limit = _T(" ");
	CString strPosition_Limit = _T(" ");
	CString strTemperature_Limit = _T(" ");
	CString strOverload = _T(" ");
	CString strDriverFault = _T(" ");
	CString strEEP = _T(" ");

	CString strMoving = _T(" ");
	CString strInposition = _T(" ");
	CString strCheckSum = _T(" ");
	CString strUnknownCommand = _T(" ");
	CString strGarbage = _T(" ");
	CString strMotorOn = _T(" ");

	CString strMSG = _T(" ");

	//Check iStatusError///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	iStatusError = GET_RAM_MAP_Read(1, RAM_STATUS_ERROR);

	iError_Voltage_Limit = (iStatusError >> 0) & 1;
	strVoltage_Limit.Format("Voltage_Limit: %d \n", iError_Voltage_Limit);
	iError_Position_Limit = (iStatusError >> 1) & 1;
	strPosition_Limit.Format("Position_Limit: %d \n", iError_Position_Limit);
	iError_Temperature_Limit = (iStatusError >> 2) & 1;
	strTemperature_Limit.Format("Temperature_Limit: %d \n", iError_Temperature_Limit);
	iError_Overload = (iStatusError >> 4) & 1;
	strOverload.Format("Overload: %d \n", iError_Overload);
	iError_DriverFault = (iStatusError >> 5) & 1;
	strDriverFault.Format("DriverFault: %d \n", iError_DriverFault);
	iError_EEP = (iStatusError >> 6) & 1;
	strEEP.Format("EEP: %d \n", iError_EEP);
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//Check iStatusDetail///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	iStatusDetail = GET_RAM_MAP_Read(1, RAM_STATUS_DETAIL);

	iDetail_Moving = (iStatusDetail >> 0) & 1;
	strMoving.Format("Moving: %d \n", iDetail_Moving);
	iDetail_Inposition = (iStatusDetail >> 1) & 1;
	strInposition.Format("Inposition: %d \n", iDetail_Inposition);
	iDetail_CheckSum = (iStatusDetail >> 2) & 1;
	strCheckSum.Format("CheckSum: %d \n", iDetail_CheckSum);
	iDetail_UnknownCommand = (iStatusDetail >> 3) & 1;
	strUnknownCommand.Format("UnknownCommand: %d \n", iDetail_UnknownCommand);
	iDetail_Garbage = (iStatusDetail >> 5) & 1;
	strGarbage.Format("Garbage: %d \n", iDetail_Garbage);
	iDetail_MotorOn = (iStatusDetail >> 6) & 1;
	strMotorOn.Format("MotorOn: %d \n", iDetail_MotorOn);
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	strMSG = strVoltage_Limit + strPosition_Limit + strTemperature_Limit + strOverload + strDriverFault + strEEP
		+ strMoving + strInposition + strCheckSum + strUnknownCommand + strGarbage + strMotorOn;

	AfxMessageBox(strMSG);

}
