#pragma once


// FunnelExplain dialog

class FunnelExplain : public CDialog
{
	DECLARE_DYNAMIC(FunnelExplain)

public:
	FunnelExplain(CWnd* pParent = nullptr);   // standard constructor
	virtual ~FunnelExplain();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG6 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
