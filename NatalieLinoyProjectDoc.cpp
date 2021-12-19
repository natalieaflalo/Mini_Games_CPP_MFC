
// NatalieLinoyProjectDoc.cpp : implementation of the CNatalieLinoyProjectDoc class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "NatalieLinoyProject.h"
#endif

#include "NatalieLinoyProjectDoc.h"

#include <propkey.h>

#include "SudokuExplain.h"
#include "DrawLineExplain.h"
#include "DrawLineWindow.h"
#include "FunnelWindow.h"
#include "SudokuWindow.h"
#include "FunnelExplain.h"
#include "UserInfoWindow.h"
#include "RateGameWindow.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CNatalieLinoyProjectDoc

IMPLEMENT_DYNCREATE(CNatalieLinoyProjectDoc, CDocument)

BEGIN_MESSAGE_MAP(CNatalieLinoyProjectDoc, CDocument)
	ON_COMMAND(ID_EXPLANATION_SUDOKUEXPLENATION, &CNatalieLinoyProjectDoc::OnExplanationSudokuexplenation)
	ON_COMMAND(ID_LOGIC_DRAWLINE, &CNatalieLinoyProjectDoc::OnLogicDrawline)
	ON_COMMAND(ID_EXPLANATION_DRAWLINEEXPLANATION, &CNatalieLinoyProjectDoc::OnExplanationDrawlineexplanation)
	ON_COMMAND(ID_MEMORY_FUNNEL, &CNatalieLinoyProjectDoc::OnMemoryFunnel)
	ON_COMMAND(ID_LOGIC_SUDOKU, &CNatalieLinoyProjectDoc::OnLogicSudoku)
	ON_COMMAND(ID_EXPLANATION_FUNNELEXPLANATION, &CNatalieLinoyProjectDoc::OnExplanationFunnelexplanation)
	ON_COMMAND(ID_USERS_USERINFORMATION, &CNatalieLinoyProjectDoc::OnUsersUserinformation)
	ON_COMMAND(ID_USERS_RATETHEGAMES, &CNatalieLinoyProjectDoc::OnUsersRatethegames)
END_MESSAGE_MAP()


// CNatalieLinoyProjectDoc construction/destruction

CNatalieLinoyProjectDoc::CNatalieLinoyProjectDoc() noexcept
{
	// TODO: add one-time construction code here

}

CNatalieLinoyProjectDoc::~CNatalieLinoyProjectDoc()
{
}

BOOL CNatalieLinoyProjectDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}




// CNatalieLinoyProjectDoc serialization

void CNatalieLinoyProjectDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

#ifdef SHARED_HANDLERS

// Support for thumbnails
void CNatalieLinoyProjectDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// Modify this code to draw the document's data
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// Support for Search Handlers
void CNatalieLinoyProjectDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// Set search contents from document's data.
	// The content parts should be separated by ";"

	// For example:  strSearchContent = _T("point;rectangle;circle;ole object;");
	SetSearchContent(strSearchContent);
}

void CNatalieLinoyProjectDoc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = nullptr;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != nullptr)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// CNatalieLinoyProjectDoc diagnostics

#ifdef _DEBUG
void CNatalieLinoyProjectDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CNatalieLinoyProjectDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CNatalieLinoyProjectDoc commands


void CNatalieLinoyProjectDoc::OnExplanationSudokuexplenation()
{
	SudokuExplain window1;
	window1.DoModal();
	// TODO: Add your command handler code here
}


void CNatalieLinoyProjectDoc::OnLogicDrawline()
{
	DrawLineWindow window4;
	window4.DoModal();
	// TODO: Add your command handler code here
}


void CNatalieLinoyProjectDoc::OnExplanationDrawlineexplanation()
{
	DrawLineExplain window3;
	window3.DoModal();
	// TODO: Add your command handler code here
}


void CNatalieLinoyProjectDoc::OnMemoryFunnel()
{
	FunnelWindow window5;
	window5.DoModal();
	// TODO: Add your command handler code here
}


void CNatalieLinoyProjectDoc::OnLogicSudoku()
{
	SudokuWindow window2;
	window2.DoModal();
	// TODO: Add your command handler code here
}


void CNatalieLinoyProjectDoc::OnExplanationFunnelexplanation()
{
	FunnelExplain window6;
	window6.DoModal();
	// TODO: Add your command handler code here
}


void CNatalieLinoyProjectDoc::OnUsersUserinformation()
{
	UserInfoWindow window7;
	window7.DoModal();
	// TODO: Add your command handler code here
}


void CNatalieLinoyProjectDoc::OnUsersRatethegames()
{

	RateGameWindow window8;
	window8.DoModal();
	// TODO: Add your command handler code here
}
