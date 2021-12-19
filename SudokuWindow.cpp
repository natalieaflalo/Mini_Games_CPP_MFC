// SudokuWindow.cpp : implementation file
//

#include "pch.h"
#include "NatalieLinoyProject.h"
#include "SudokuWindow.h"
#include "afxdialogex.h"


// SudokuWindow dialog

IMPLEMENT_DYNAMIC(SudokuWindow, CDialog)

SudokuWindow::SudokuWindow(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG2, pParent),firstmove(true)
	, commentSud(_T("Start playing! drag the rectangle to the right place"))
{
	//canvas.Rectangle(260, 50, 310, 100);//2d green
	missingrec[0].x = 260;
	missingrec[0].y = 50;
	missingrec[1].x = 310;
	missingrec[1].y = 100;
	//canvas.Rectangle(200, 110, 250, 160);//5d blue
	missingrec[2].x = 200;
	missingrec[2].y = 110;
	missingrec[3].x = 250;
	missingrec[3].y = 160;
	//canvas.Rectangle(260, 110, 310, 160);//6d purple
	missingrec[4].x = 260;
	missingrec[4].y = 110;
	missingrec[5].x = 310;
	missingrec[5].y = 160;
	//canvas.Rectangle(320, 110, 370, 160);//7d red 
	missingrec[6].x = 320;
	missingrec[6].y = 110;
	missingrec[7].x = 370;
	missingrec[7].y = 160;
	//canvas.Rectangle(380, 170, 430, 220);//12d blue
	missingrec[8].x = 380;
	missingrec[8].y = 170;
	missingrec[9].x = 430;
	missingrec[9].y = 220;
	//canvas.Rectangle(200, 230, 250, 280);//13d purple
	missingrec[10].x = 200;
	missingrec[10].y = 230;
	missingrec[11].x = 250;
	missingrec[11].y = 280;
	//canvas.Rectangle(320, 230, 370, 280);//15d green
	missingrec[12].x = 320;
	missingrec[12].y = 230;
	missingrec[13].x = 370;
	missingrec[13].y = 280;
	//canvas.Rectangle(380, 230, 430, 280);//16d red
	missingrec[14].x = 380;
	missingrec[14].y = 230;
	missingrec[15].x = 430;
	missingrec[15].y = 280;
}

SudokuWindow::~SudokuWindow()
{
}

void SudokuWindow::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, commentSud);
}


BEGIN_MESSAGE_MAP(SudokuWindow, CDialog)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
END_MESSAGE_MAP()


// SudokuWindow message handlers

bool SudokuWindow::isInside(CPoint point,CPoint rectStart, CPoint rectEnd )
{
	if (point.x > rectStart.x && point.x < rectEnd.x && point.y > rectStart.y && point.y < rectEnd.y)
		return true;
	return false;
}

void SudokuWindow::OnMouseMove(UINT nFlags, CPoint point)
{
	CClientDC canvas(this);
	if (firstmove == true)//create game
	{
		firstmove = false;
		CPen newPen1(PS_SOLID, 1, RGB(255, 0, 0));//red
		CPen* oldPen = canvas.SelectObject(&newPen1);
		CBrush newBrush1(RGB(255, 0, 0));
		canvas.SelectObject(&newBrush1);
		canvas.Rectangle(200, 50, 250, 100);//1
		canvas.Rectangle(260, 170, 310, 220);//10
		//missing rectangle below
		canvas.Rectangle(200, 350, 250, 400);
		CPen newPen2(PS_SOLID, 1, RGB(0, 255, 0));//green
		canvas.SelectObject(&newPen2);
		CBrush newBrush2(RGB(0, 255, 0));
		canvas.SelectObject(&newBrush2);
		canvas.Rectangle(380, 110, 430, 160);//8
		canvas.Rectangle(200, 170, 250, 220);//9
		//missing rectangle below
		canvas.Rectangle(260,350,310,400);
		CPen newPen3(PS_SOLID, 1, RGB(0, 0, 255));//blue
		canvas.SelectObject(&newPen3);
		CBrush newBrush3(RGB(0, 0, 255));
		canvas.SelectObject(&newBrush3);
		canvas.Rectangle(320, 50, 370, 100);//3
		canvas.Rectangle(260, 230, 310, 280);//14
		//missing rectangle below
		canvas.Rectangle(320,350,370,400);
		CPen newPen4(PS_SOLID, 1, RGB(127, 0, 127));//purple
		canvas.SelectObject(&newPen4);
		CBrush newBrush4(RGB(127, 0, 127));
		canvas.SelectObject(&newBrush4);
		canvas.Rectangle(380, 50, 430, 100);//4
		canvas.Rectangle(320, 170, 370, 220);//11
		//missing rectangle below
		canvas.Rectangle(380,350,430,400);
		canvas.SelectObject(&oldPen);
		//lines between rectangle rows
		canvas.MoveTo(200,105);
		canvas.LineTo(430,105);//1
		canvas.MoveTo(200, 165);
		canvas.LineTo(430, 165);//2
		canvas.MoveTo(200, 225);
		canvas.LineTo(430, 225);//3
		//lines between rectangle coloms
		canvas.MoveTo(255, 50);
		canvas.LineTo(255, 280);//1
		canvas.MoveTo(315, 50);
		canvas.LineTo(315, 280);//2
		canvas.MoveTo(375, 50);
		canvas.LineTo(375, 280);//3
	}
	CDialog::OnMouseMove(nFlags, point);
}

void SudokuWindow::OnLButtonDown(UINT nFlags, CPoint point)
{
	if (point.x > 200 && point.x < 250 && point.y > 350 && point.y < 400)//red rect below
		rectchose[0] = true;
	else if (point.x > 260 && point.x < 310 && point.y > 350 && point.y < 400)//green rect below
		rectchose[1] = true;
	else if (point.x > 320 && point.x < 370 && point.y > 350 && point.y < 400)//blue rect below
		rectchose[2] = true;
	else if (point.x > 380 && point.x < 430 && point.y > 350 && point.y < 400)//purple rect below
		rectchose[3] = true;
	CDialog::OnLButtonDown(nFlags, point);
}
void SudokuWindow::OnLButtonUp(UINT nFlags, CPoint point)
{
	CClientDC canvas(this);
	if (rectchose[0] == true)
	{
		if (isInside(point,missingrec[14],missingrec[15]) == true && onerect[7]==0)//14 15 6 7 red
		{
			CPen newPen5(PS_SOLID, 1, RGB(255, 0, 0));
			CPen* oldPen = canvas.SelectObject(&newPen5);
			CBrush newBrush5(RGB(255, 0, 0));
			canvas.SelectObject(&newBrush5);
			canvas.Rectangle(380, 230, 430, 280);
			correctcount++;
			_sudoku.setTotalScores(1);
			onerect[7] = 1;
		}
		else if (isInside(point, missingrec[6], missingrec[7]) == true && onerect[3] == 0)
		{
			CPen newPen5(PS_SOLID, 1, RGB(255, 0, 0));
			CPen* oldPen = canvas.SelectObject(&newPen5);
			CBrush newBrush5(RGB(255, 0, 0));
			canvas.SelectObject(&newBrush5);
			canvas.Rectangle(320, 110, 370, 160);
			correctcount++;
			_sudoku.setTotalScores(1);
			onerect[3] = 1;
		}
	}
	else if (rectchose[1] == true)
	{
		if (isInside(point, missingrec[0], missingrec[1]) == true && onerect[0] == 0)//12 13 0 1 green
		{
			CPen newPen5(PS_SOLID, 1, RGB(0, 255, 0));
			CPen* oldPen = canvas.SelectObject(&newPen5);
			CBrush newBrush5(RGB(0, 255, 0));
			canvas.SelectObject(&newBrush5);
			canvas.Rectangle(260, 50, 310, 100);
			correctcount++;
			_sudoku.setTotalScores(1);
			onerect[0] = 1;
		}
		else if (isInside(point, missingrec[12], missingrec[13]) == true && onerect[6] == 0)
		{
			CPen newPen5(PS_SOLID, 1, RGB(0, 255, 0));
			CPen* oldPen = canvas.SelectObject(&newPen5);
			CBrush newBrush5(RGB(0, 255, 0));
			canvas.SelectObject(&newBrush5);
			canvas.Rectangle(320, 230, 370, 280);
			correctcount++;
			_sudoku.setTotalScores(1);
			onerect[6] = 1;
		}
	}
	else if (rectchose[2] == true)
	{
		if (isInside(point, missingrec[8], missingrec[9]) == true && onerect[4] == 0)//8 9 2 3 blue
		{
			CPen newPen5(PS_SOLID, 1, RGB(0, 0, 255));
			CPen* oldPen = canvas.SelectObject(&newPen5);
			CBrush newBrush5(RGB(0, 0, 255));
			canvas.SelectObject(&newBrush5);
			canvas.Rectangle(380, 170, 430, 220);
			correctcount++;
			_sudoku.setTotalScores(1);
			onerect[4] = 1;
		}
		else if (isInside(point, missingrec[2], missingrec[3]) == true && onerect[1] == 0)
		{
			CPen newPen5(PS_SOLID, 1, RGB(0, 0, 255));
			CPen* oldPen = canvas.SelectObject(&newPen5);
			CBrush newBrush5(RGB(0, 0, 255));
			canvas.SelectObject(&newBrush5);
			canvas.Rectangle(200, 110, 250, 160);
			correctcount++;
			_sudoku.setTotalScores(1);
			onerect[1] = 1;
		}
	}
	else if (rectchose[3] == true)
	{
		if (isInside(point, missingrec[4], missingrec[5]) == true && onerect[2] == 0)//10 11 4 5 purple
		{
			CPen newPen5(PS_SOLID, 1, RGB(127, 0, 127));
			CPen* oldPen = canvas.SelectObject(&newPen5);
			CBrush newBrush5(RGB(127, 0, 127));
			canvas.SelectObject(&newBrush5);
			canvas.Rectangle(260, 110, 310, 160);
			correctcount++;
			_sudoku.setTotalScores(1);
			onerect[2] = 1;
		}
		else if (isInside(point, missingrec[10], missingrec[11]) == true && onerect[5] == 0)
		{
			CPen newPen5(PS_SOLID, 1, RGB(127, 0, 127));
			CPen* oldPen = canvas.SelectObject(&newPen5);
			CBrush newBrush5(RGB(127, 0, 127));
			canvas.SelectObject(&newBrush5);
			canvas.Rectangle(200, 230, 250, 280);
			correctcount++;
			_sudoku.setTotalScores(1);
			onerect[5] = 1;
		}
	}
	if (correctcount == 8)
	{
		commentSud = "Good job! press Finish to exit";
		_sudoku.setTotalGames(1);
		_sudoku.setHighScore(8);
		UpdateData(false);
	}
	rectchose[0] = false;
	rectchose[1] = false;
	rectchose[2] = false;
	rectchose[3] = false;
	CDialog::OnLButtonUp(nFlags, point);
}
