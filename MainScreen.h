#pragma once



// MainScreen form view

class MainScreen : public CFormView
{
	DECLARE_DYNCREATE(MainScreen)

protected:
	MainScreen();           // protected constructor used by dynamic creation
	virtual ~MainScreen();

public:
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MAIN_SCREEN };
#endif
#ifdef _DEBUG
	virtual void AssertValid() const;
#ifndef _WIN32_WCE
	virtual void Dump(CDumpContext& dc) const;
#endif
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};


