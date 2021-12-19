// UserInfoWindow.cpp : implementation file
//

#include "pch.h"
#include "NatalieLinoyProject.h"
#include "UserInfoWindow.h"
#include "afxdialogex.h"



// UserInfoWindow dialog

IMPLEMENT_DYNAMIC(UserInfoWindow, CDialog)

UserInfoWindow::UserInfoWindow(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG7, pParent)
	, HighestScore(0)
	, TotalGames(0)
	, TotalScore(0)
{

}

UserInfoWindow::~UserInfoWindow()
{
}

void UserInfoWindow::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, HighestScore);
	DDX_Text(pDX, IDC_EDIT2, TotalGames);
	DDX_Text(pDX, IDC_EDIT3, TotalScore);
}


BEGIN_MESSAGE_MAP(UserInfoWindow, CDialog)
	
	ON_BN_CLICKED(IDC_BUTTON1, &UserInfoWindow::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &UserInfoWindow::OnBnClickedButton2)
	ON_BN_CLICKED(IDCANCEL, &UserInfoWindow::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_BUTTON3, &UserInfoWindow::OnBnClickedButton3)
END_MESSAGE_MAP()


// UserInfoWindow message handlers



void UserInfoWindow::OnBnClickedButton1()//show info
{
	ifstream outfile1("HighScore.txt");
	outfile1 >> HighestScore;
	outfile1.close();
	ifstream outfile2("TotalGames.txt");
	outfile2 >> TotalGames;
	outfile2.close();
	ifstream outfile3("TotalScore.txt");
	outfile3 >> TotalScore;
	outfile3.close();
	UpdateData(false);
	// TODO: Add your control notification handler code here
}


void UserInfoWindow::OnBnClickedButton2()//reset info
{
	HighestScore = 0;
	TotalGames = 0;
	TotalScore = 0;
	UpdateData(false);
	// TODO: Add your control notification handler code here
}


void UserInfoWindow::OnBnClickedCancel()
{
	// TODO: Add your control notification handler code here
	CDialog::OnCancel();
}


void UserInfoWindow::OnBnClickedButton3()//delete forever
{
	ofstream outfile1("HighScore.txt");
	outfile1 << 0;
	outfile1.close();
	ofstream outfile2("TotalGames.txt");
	outfile2 << 0;
	outfile2.close();
	ofstream outfile3("TotalScore.txt");
	outfile3 << 0;
	outfile3.close();
	ifstream outfile4("HighScore.txt");
	outfile4 >> HighestScore;
	outfile4.close();
	ifstream outfile5("TotalGames.txt");
	outfile5 >> TotalGames;
	outfile5.close();
	ifstream outfile6("TotalScore.txt");
	outfile6 >> TotalScore;
	outfile6.close();
	UpdateData(false);
	// TODO: Add your control notification handler code here
}
