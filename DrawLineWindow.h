#pragma once

#include "DrawLine.h"
// DrawLineWindow dialog

class DrawLineWindow : public CDialog
{
	DECLARE_DYNAMIC(DrawLineWindow)

public:
	CFont font;
	DrawLineWindow(CWnd* pParent = nullptr);   // standard constructor
	virtual ~DrawLineWindow();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG4 };
#endif

protected:
	HICON m_hIcon;
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	DECLARE_MESSAGE_MAP()
public:
	DrawLine _drawline;
	bool isPressedinCanvas;
	CPoint LineStart;
	int oneLine[4] = { 0 };
	int lineCount;
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	bool isInside(CPoint start, CPoint end);
	CString commentsDL;
};
