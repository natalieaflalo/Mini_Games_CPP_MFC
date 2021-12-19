#pragma once


// DrawLineExplain dialog

class DrawLineExplain : public CDialog
{
	DECLARE_DYNAMIC(DrawLineExplain)

public:
	DrawLineExplain(CWnd* pParent = nullptr);   // standard constructor
	virtual ~DrawLineExplain();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
