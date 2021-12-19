// SudokuExplain.cpp : implementation file
//

#include "pch.h"
#include "NatalieLinoyProject.h"
#include "SudokuExplain.h"
#include "afxdialogex.h"


// SudokuExplain dialog

IMPLEMENT_DYNAMIC(SudokuExplain, CDialogEx)

SudokuExplain::SudokuExplain(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

SudokuExplain::~SudokuExplain()
{
}

void SudokuExplain::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(SudokuExplain, CDialogEx)
	ON_COMMAND(ID_EXPLANATION_SUDOKUEXPLENATION, &SudokuExplain::OnExplanationSudokuexplenation)
	ON_BN_CLICKED(IDCANCEL, &SudokuExplain::OnBnClickedCancel)
END_MESSAGE_MAP()


// SudokuExplain message handlers


void SudokuExplain::OnExplanationSudokuexplenation()
{
	// TODO: Add your command handler code here
}


void SudokuExplain::OnBnClickedCancel()
{
	// TODO: Add your control notification handler code here
	CDialogEx::OnCancel();
}
