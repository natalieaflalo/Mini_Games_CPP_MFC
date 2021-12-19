// FunnelWindow.cpp : implementation file
//

#include "pch.h"
#include "NatalieLinoyProject.h"
#include "FunnelWindow.h"
#include "afxdialogex.h"


// FunnelWindow dialog

IMPLEMENT_DYNAMIC(FunnelWindow, CDialog)

FunnelWindow::FunnelWindow(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG5, pParent)
	, commentFun(_T("Start playing! press the screen when you're ready")), dissapearshape(false), firstclick(true)
{

}

FunnelWindow::~FunnelWindow()
{
}

void FunnelWindow::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, commentFun);
}


BEGIN_MESSAGE_MAP(FunnelWindow, CDialog)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
END_MESSAGE_MAP()

void FunnelWindow::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	CClientDC canvas(this);
	if (firstclick == true)
	{
		firstclick = false;
		dissapearshape = true;
		CPen newPen5(PS_SOLID, 5, RGB(0, 0, 0));
		canvas.SelectObject(&newPen5);
		CBrush newBrush5(RGB(0, 0, 0));
		canvas.SelectObject(&newBrush5);
		canvas.Rectangle(180, 100, 420, 150);//black cover

		CPen newPen3(PS_SOLID, 5, RGB(0, 124, 127));
		canvas.SelectObject(&newPen3);
		CBrush newBrush3(RGB(0, 124, 127));
		canvas.SelectObject(&newBrush3);
		CPoint pentagon[5];
		pentagon[0] = CPoint(220, 420);
		pentagon[1] = CPoint(200, 440);
		pentagon[2] = CPoint(210, 460);
		pentagon[3] = CPoint(230, 460);
		pentagon[4] = CPoint(240, 440);
		canvas.Polygon(pentagon, 5);//shape

		CPen newPen2(PS_SOLID, 5, RGB(255, 0, 0));
		canvas.SelectObject(&newPen2);
		CBrush newBrush2(RGB(255, 0, 0));
		canvas.SelectObject(&newBrush2);
		CPoint triangle[3];
		triangle[0] = CPoint(360, 450);
		triangle[1] = CPoint(340, 470);
		triangle[2] = CPoint(380, 470);
		canvas.Polygon(triangle, 3);//shape

		CPen newPen4(PS_SOLID, 5, RGB(200, 124, 2));
		canvas.SelectObject(&newPen4);
		CBrush newBrush4(RGB(200, 124, 2));
		canvas.SelectObject(&newBrush4);//disapear color

		CPoint hexagon[6];
		hexagon[0] = CPoint(580, 300);
		hexagon[1] = CPoint(610, 300);
		hexagon[2] = CPoint(630, 330);
		hexagon[3] = CPoint(610, 360);
		hexagon[4] = CPoint(580, 360);
		hexagon[5] = CPoint(560, 330);
		canvas.Polygon(hexagon, 6);//shape
		canvas.Rectangle(560, 200, 610, 240);//shape
		canvas.Ellipse(560, 120, 600, 160);//shape
		_funnel.setTotalGames(1);

		commentFun = "Press the shape on the right that is missing.";
		UpdateData(false);
	}
	else 
	{
		if (isInside(point) == true)
		{
			_funnel.setHighScore(1);
			_funnel.setTotalScores(1);
			commentFun = "Game is finished, good job! press Finish to exit";
			UpdateData(false);
			CPen newPen6(PS_SOLID, 5, RGB(0, 200, 0));
			canvas.SelectObject(&newPen6);
			CBrush newBrush6(RGB(0, 200, 0));
			canvas.SelectObject(&newBrush6);
			canvas.Ellipse(560, 120, 600, 160);
		}
		else
		{
			commentFun = "Wrong! try again";
			UpdateData(false);
		}
	}
	


	CDialog::OnLButtonDown(nFlags, point);
}

bool FunnelWindow::isInside(CPoint p)
{
	CPoint middle;
	double d = sqrt((pow(double(580 - p.x), 2) + pow(double(140 - p.y), 2)));
	if (d<20&&d>=0)
		return true;
	else
		return false;

	
}

void FunnelWindow::OnLButtonUp(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default

	CDialog::OnLButtonUp(nFlags, point);
}


void FunnelWindow::OnMouseMove(UINT nFlags, CPoint point)
{
	if (dissapearshape == false)
	{
		dissapearshape = true;
		_funnel.setTotalGames(1);
		CClientDC canvas(this);
		CPen newPen1(PS_SOLID, 5, RGB(127, 0, 127));
		CPen* oldPen = canvas.SelectObject(&newPen1);
		CBrush newBrush1(RGB(127, 0, 127));
		CBrush* oldBrush = canvas.SelectObject(&newBrush1);
		canvas.Rectangle(200, 200, 400, 300);//part tunnel
		CPoint triangle[3];
		triangle[0] = CPoint(200, 300);
		triangle[1] = CPoint(400, 300);
		triangle[2] = CPoint(300, 400);
		canvas.Polygon(triangle, 3);//part tunnel
		CPen newPen2(PS_SOLID, 5, RGB(255, 0, 0));
		canvas.SelectObject(&newPen2);
		CBrush newBrush2(RGB(255, 0, 0));
		canvas.SelectObject(&newBrush2);
		triangle[0] = CPoint(300, 100);
		triangle[1] = CPoint(280, 120);
		triangle[2] = CPoint(320, 120);
		canvas.Polygon(triangle, 3);//shape
		CPen newPen3(PS_SOLID, 5, RGB(0, 124, 127));
		canvas.SelectObject(&newPen3);
		CBrush newBrush3(RGB(0, 124, 127));
		canvas.SelectObject(&newBrush3);
		CPoint pentagon[5];
		pentagon[0] = CPoint(200, 100);
		pentagon[1] = CPoint(180, 120);
		pentagon[2] = CPoint(190, 140);
		pentagon[3] = CPoint(210, 140);
		pentagon[4] = CPoint(220, 120);
		canvas.Polygon(pentagon, 5);//shape
		CPen newPen4(PS_SOLID, 5, RGB(200, 124, 2));
		canvas.SelectObject(&newPen4);
		CBrush newBrush4(RGB(200, 124, 2));
		canvas.SelectObject(&newBrush4);
		canvas.Ellipse(380, 100, 420, 140);//shape (400,120) radius
	}
	// TODO: Add your message handler code here and/or call default

	CDialog::OnMouseMove(nFlags, point);
}
