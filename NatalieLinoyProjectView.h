
// NatalieLinoyProjectView.h : interface of the CNatalieLinoyProjectView class
//
#pragma once


class CNatalieLinoyProjectView : public CView
{
protected: // create from serialization only
	CNatalieLinoyProjectView() noexcept;
	DECLARE_DYNCREATE(CNatalieLinoyProjectView)

// Attributes
public:
	CNatalieLinoyProjectDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CNatalieLinoyProjectView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // debug version in NatalieLinoyProjectView.cpp
inline CNatalieLinoyProjectDoc* CNatalieLinoyProjectView::GetDocument() const
   { return reinterpret_cast<CNatalieLinoyProjectDoc*>(m_pDocument); }
#endif

