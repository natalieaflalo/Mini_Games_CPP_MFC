// DrawLineExplain.cpp : implementation file
//

#include "pch.h"
#include "NatalieLinoyProject.h"
#include "DrawLineExplain.h"
#include "afxdialogex.h"


// DrawLineExplain dialog

IMPLEMENT_DYNAMIC(DrawLineExplain, CDialog)

DrawLineExplain::DrawLineExplain(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG3, pParent)
{

}

DrawLineExplain::~DrawLineExplain()
{
}

void DrawLineExplain::DoDataExchange(CDataExchange* pDX)
{
	//CDialog::DoDataExchange(pDX);
	//font.CreateFont(
	//	40,                        // nHeight
	//	20,                         // nWidth
	//	0,                         // nEscapement
	//	0,                         // nOrientation
	//	FW_NORMAL,                 // nWeight
	//	FALSE,                     // bItalic
	//	FALSE,                     // bUnderline
	//	0,                         // cStrikeOut
	//	ANSI_CHARSET,              // nCharSet
	//	OUT_DEFAULT_PRECIS,        // nOutPrecision
	//	CLIP_DEFAULT_PRECIS,       // nClipPrecision
	//	DEFAULT_QUALITY,           // nQuality
	//	DEFAULT_PITCH | FF_SWISS,  // nPitchAndFamily
	//	_T("Arial"));                 // lpszFacename

	//GetDlgItem(IDC_STATIC)->SetFont(&font);
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(DrawLineExplain, CDialog)
END_MESSAGE_MAP()


// DrawLineExplain message handlers
