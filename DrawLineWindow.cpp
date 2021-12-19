// DrawLineWindow.cpp : implementation file
//

#include "pch.h"
#include "NatalieLinoyProject.h"
#include "DrawLineWindow.h"
#include "afxdialogex.h"
#include "DrawLine.h"


// DrawLineWindow dialog

IMPLEMENT_DYNAMIC(DrawLineWindow, CDialog)

DrawLineWindow::DrawLineWindow(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG4, pParent), isPressedinCanvas(false), lineCount(0)
	, commentsDL(_T("Start playing! no lines drawn yet."))
{
	_drawline.setTotalGames(1);
}

DrawLineWindow::~DrawLineWindow()
{
}

void DrawLineWindow::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, commentsDL);
}


BEGIN_MESSAGE_MAP(DrawLineWindow, CDialog)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONUP()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()



// DrawLineWindow message handlers


void DrawLineWindow::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	CClientDC canvas(this);
	CPen newPen1(PS_SOLID, 5, RGB(255, 0, 0));
	CPen* oldPen = canvas.SelectObject(&newPen1);
	canvas.Rectangle(50, 90, 100, 160);
	canvas.Rectangle(700, 330, 750, 400);//right
	CPen newPen2(PS_SOLID, 5, RGB(0, 255, 0));
	canvas.SelectObject(&newPen2);
	canvas.Rectangle(50, 200, 150, 230);
	canvas.Rectangle(700, 90, 800, 120);//right
	CPen newPen3(PS_SOLID, 5, RGB(0, 0, 255));
	canvas.SelectObject(&newPen3);
	canvas.Rectangle(50, 250, 100, 300);
	canvas.Rectangle(700, 230, 750, 280);//right
	CPen newPen4(PS_SOLID, 5, RGB(0, 127, 127));
	canvas.SelectObject(&newPen4);
	canvas.Rectangle(50, 330, 230, 380);
	canvas.Rectangle(700, 140, 880, 190);//right
	canvas.SelectObject(&oldPen);
	CDialog::OnMouseMove(nFlags, point);
}


void DrawLineWindow::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	if (this->isPressedinCanvas) {
		if (isInside(LineStart, point) == true|| isInside(point,LineStart) == true)
		{
			CClientDC canvas2(this);
			CPen* oldPen = NULL;
			CPen newPen(PS_SOLID, 2, RGB(0, 0, 0));
			oldPen = canvas2.SelectObject(&newPen);
			canvas2.MoveTo(LineStart);
			canvas2.LineTo(point);
			lineCount++;
			if (lineCount == 1)
			{
				commentsDL = "good job! 3 more lines to go";
				UpdateData(false);
				_drawline.setTotalScores(1);
				_drawline.setHighScore(1);
			}
			if (lineCount == 2)
			{
				commentsDL = "good job! 2 more lines to go";
				UpdateData(false);
				_drawline.setTotalScores(1);
				_drawline.setHighScore(2);
			}
			if (lineCount == 3)
			{
				commentsDL = "good job! one more lines to go";
				UpdateData(false);
				_drawline.setTotalScores(1);
				_drawline.setHighScore(3);
			}
			if (lineCount == 4)
			{
				commentsDL = "Game is finished, good job! press Finish to exit";
				UpdateData(false);
				_drawline.setTotalScores(1);
				_drawline.setHighScore(4);
			}
		}
	}
	CDialog::OnLButtonUp(nFlags, point);
}


void DrawLineWindow::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	isPressedinCanvas = true;
	this->LineStart = point;
	CDialog::OnLButtonDown(nFlags, point);
}

bool DrawLineWindow::isInside(CPoint start, CPoint end)
{
	if (start.x > 50 && start.x < 100 && start.y>90 && start.y < 160)//first left
	{
		if (end.x > 700 && end.x < 750 && end.y>330 && end.y < 400 && (oneLine[0]==0))
		{
			oneLine[0]++;
			return true;
		}
		else
			return false;
	}
	else if (start.x > 50 && start.x < 150 && start.y>200 && start.y < 230)//second left
	{
		if (end.x > 700 && end.x < 800 && end.y>90 && end.y < 120 && (oneLine[1] == 0))
		{
			oneLine[1]++;
			return true;
		}
		else
			return false;
	}
	else if (start.x > 50 && start.x < 100 && start.y>250 && start.y < 300)//third left
	{
		if (end.x > 700 && end.x < 750 && end.y>230 && end.y < 280 && (oneLine[2] == 0))
		{
			oneLine[2]++;
			return true;
		}
		else
			return false;
	}
	else if (start.x > 50 && start.x < 230 && start.y>330 && start.y < 380)//fourth left
	{
		if (end.x > 700 && end.x < 880 && end.y>140 && end.y < 190 && (oneLine[3] == 0))
		{
			oneLine[3]++;
			return true;
		}
		else
			return false;
	}
	else
		return false;
}