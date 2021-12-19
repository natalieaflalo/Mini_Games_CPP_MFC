#pragma once
#include "Game.h"
#include "Funnel.h"
#include "DrawLine.h"
#include "Sudoku.h"


// RateGameWindow dialog

class RateGameWindow : public CDialog
{
	DECLARE_DYNAMIC(RateGameWindow)

public:
	RateGameWindow(CWnd* pParent = nullptr);   // standard constructor
	virtual ~RateGameWindow();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG8 };
#endif
private:
	Game rateArr[3];
	bool first;
	bool second;
	bool third;
	bool firstfunnel;
	bool secondfunnel;
	bool thirdfunnel;
	bool firstDL;
	bool secondDL;
	bool thirdDL;
	bool firstsudoku;
	bool secondsudoku;
	bool thirdsudoku;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
};
