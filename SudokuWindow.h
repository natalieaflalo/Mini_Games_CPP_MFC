#pragma once
#include "Sudoku.h"

// SudokuWindow dialog

class SudokuWindow : public CDialog
{
	DECLARE_DYNAMIC(SudokuWindow)

public:
	SudokuWindow(CWnd* pParent = nullptr);   // standard constructor
	virtual ~SudokuWindow();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
private:
	bool rectchose[4] = { false };
	CPoint missingrec[16];
	int onerect[8] = { 0 };
	bool firstmove;
	int correctcount;
public:
	CString commentSud;
	Sudoku _sudoku;
	bool isInside(CPoint p, CPoint rectStart, CPoint rectEnd);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
};
