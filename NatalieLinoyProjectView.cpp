
// NatalieLinoyProjectView.cpp : implementation of the CNatalieLinoyProjectView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "NatalieLinoyProject.h"
#endif

#include "NatalieLinoyProjectDoc.h"
#include "NatalieLinoyProjectView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CNatalieLinoyProjectView

IMPLEMENT_DYNCREATE(CNatalieLinoyProjectView, CView)

BEGIN_MESSAGE_MAP(CNatalieLinoyProjectView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CNatalieLinoyProjectView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CNatalieLinoyProjectView construction/destruction

CNatalieLinoyProjectView::CNatalieLinoyProjectView() noexcept
{
	// TODO: add construction code here

}

CNatalieLinoyProjectView::~CNatalieLinoyProjectView()
{
}

BOOL CNatalieLinoyProjectView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CNatalieLinoyProjectView drawing

void CNatalieLinoyProjectView::OnDraw(CDC* pDC)
{
	CNatalieLinoyProjectDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->TextOutW(550, 75, _T("Welcome to Game of Thoughts!"));
	pDC->TextOutW(500, 105, _T("Operate the game with the bar above, have fun!"));
	// TODO: add draw code for native data here
}


// CNatalieLinoyProjectView printing


void CNatalieLinoyProjectView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CNatalieLinoyProjectView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CNatalieLinoyProjectView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CNatalieLinoyProjectView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CNatalieLinoyProjectView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CNatalieLinoyProjectView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CNatalieLinoyProjectView diagnostics

#ifdef _DEBUG
void CNatalieLinoyProjectView::AssertValid() const
{
	CView::AssertValid();
}

void CNatalieLinoyProjectView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CNatalieLinoyProjectDoc* CNatalieLinoyProjectView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CNatalieLinoyProjectDoc)));
	return (CNatalieLinoyProjectDoc*)m_pDocument;
}
#endif //_DEBUG


// CNatalieLinoyProjectView message handlers


void CNatalieLinoyProjectView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	CView::OnLButtonDown(nFlags, point);
}
