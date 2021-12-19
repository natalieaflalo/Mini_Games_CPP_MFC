#pragma once
#include "Game.h"
#include <fstream>

// UserInfoWindow dialog

class UserInfoWindow : public CDialog
{
	DECLARE_DYNAMIC(UserInfoWindow)

public:
	UserInfoWindow(CWnd* pParent = nullptr);   // standard constructor
	virtual ~UserInfoWindow();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG7 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	int HighestScore;
	int TotalGames;
	int TotalScore;
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedButton3();
};
