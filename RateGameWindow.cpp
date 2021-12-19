// RateGameWindow.cpp : implementation file
//

#include "pch.h"
#include "NatalieLinoyProject.h"
#include "RateGameWindow.h"
#include "afxdialogex.h"


// RateGameWindow dialog

IMPLEMENT_DYNAMIC(RateGameWindow, CDialog)

RateGameWindow::RateGameWindow(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG8, pParent), first(false), second(false),third(false),
 firstfunnel(true),
 secondfunnel(true),
 thirdfunnel(true),
 firstDL(true),
 secondDL(true),
 thirdDL(true),
 firstsudoku(true),
 secondsudoku(true),
 thirdsudoku(true)
{

}

RateGameWindow::~RateGameWindow()
{
}

void RateGameWindow::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(RateGameWindow, CDialog)
	ON_BN_CLICKED(IDC_BUTTON1, &RateGameWindow::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &RateGameWindow::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &RateGameWindow::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &RateGameWindow::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &RateGameWindow::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &RateGameWindow::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &RateGameWindow::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &RateGameWindow::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &RateGameWindow::OnBnClickedButton9)
END_MESSAGE_MAP()


// RateGameWindow message handlers


void RateGameWindow::OnBnClickedButton1()
{
	if (first == false)
		{
			if (firstfunnel == true)
			{
				Funnel firstChoice;
				rateArr[0] = firstChoice;
				first = true;
				firstfunnel = false;
			}
		}

	// TODO: Add your control notification handler code here
}


void RateGameWindow::OnBnClickedButton2()
{
	if (first == false)
	{
		if (firstDL == true)
		{
			DrawLine firstChoice;
			rateArr[0] = firstChoice;
			first = true;
			firstDL = false;
		}
	}
	// TODO: Add your control notification handler code here
}


void RateGameWindow::OnBnClickedButton3()
{
	if (first == false)
	{
		if (firstsudoku == true)
		{
			Sudoku firstChoice;
			rateArr[0] = firstChoice;
			first = true;
			firstsudoku = false;
		}
	}
	// TODO: Add your control notification handler code here
}


void RateGameWindow::OnBnClickedButton4()
{
	if (second == false)
	{
		if (secondfunnel == true)
		{
			Funnel secondChoice;
			rateArr[1] = secondChoice;
			second = true;
			secondfunnel = false;
		}
	}
	// TODO: Add your control notification handler code here
}


void RateGameWindow::OnBnClickedButton5()
{
	if (second == false)
	{
		if (secondDL == true)
		{
			DrawLine secondChoice;
			rateArr[1] = secondChoice;
			second = true;
			secondDL = false;
		}
	}
	// TODO: Add your control notification handler code here
}


void RateGameWindow::OnBnClickedButton6()
{
	if (second == false)
	{
		if (secondsudoku == true)
		{
			Sudoku secondChoice;
			rateArr[1] = secondChoice;
			second = true;
			secondsudoku = false;
		}
	}
	// TODO: Add your control notification handler code here
}


void RateGameWindow::OnBnClickedButton7()
{
	if (third == false)
	{
		if (thirdfunnel == true)
		{
			Funnel thirdChoice;
			rateArr[2] = thirdChoice;
			third = true;
			thirdfunnel = false;
		}
	}
	// TODO: Add your control notification handler code here
}


void RateGameWindow::OnBnClickedButton8()
{
	if (third == false)
	{
		if (thirdDL == true)
		{
			DrawLine thirdChoice;
			rateArr[2] = thirdChoice;
			third = true;
			thirdDL = false;
		}
	}
	// TODO: Add your control notification handler code here
}


void RateGameWindow::OnBnClickedButton9()
{
	if (third == false)
	{
		if (thirdsudoku == true)
		{
			Sudoku thirdChoice;
			rateArr[2] = thirdChoice;
			third = true;
			thirdsudoku = false;
		}
	}
	// TODO: Add your control notification handler code here
}
