#pragma once


// SudokuExplain dialog

class SudokuExplain : public CDialogEx
{
	DECLARE_DYNAMIC(SudokuExplain)

public:
	SudokuExplain(CWnd* pParent = nullptr);   // standard constructor
	virtual ~SudokuExplain();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1};
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnExplanationSudokuexplenation();
	afx_msg void OnBnClickedCancel();
};
