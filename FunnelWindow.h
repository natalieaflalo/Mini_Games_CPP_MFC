#pragma once
#include "Funnel.h"

// FunnelWindow dialog

class FunnelWindow : public CDialog
{
	DECLARE_DYNAMIC(FunnelWindow)

public:
	FunnelWindow(CWnd* pParent = nullptr);   // standard constructor
	virtual ~FunnelWindow();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG5 };
#endif

protected:
	HICON m_hIcon;
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	/*afx_msg void OnPaint(CDC* pDC);*/
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	CString commentFun;
	bool isInside(CPoint p);
	Funnel _funnel;
private:
	bool dissapearshape;
	bool firstclick;
};
