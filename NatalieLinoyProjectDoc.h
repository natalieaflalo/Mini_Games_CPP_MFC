
// NatalieLinoyProjectDoc.h : interface of the CNatalieLinoyProjectDoc class
//


#pragma once


class CNatalieLinoyProjectDoc : public CDocument
{
protected: // create from serialization only
	CNatalieLinoyProjectDoc() noexcept;
	DECLARE_DYNCREATE(CNatalieLinoyProjectDoc)

// Attributes
public:

// Operations
public:

// Overrides
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// Implementation
public:
	virtual ~CNatalieLinoyProjectDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// Helper function that sets search content for a Search Handler
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
public:
	afx_msg void OnExplanationSudokuexplenation();
	afx_msg void OnExplanationImposterexplenation();
	afx_msg void OnLogicDrawline();
	afx_msg void OnExplanationDrawlineexplanation();
	afx_msg void OnMemoryFunnel();
	afx_msg void OnLogicSudoku();
	afx_msg void OnExplanationFunnelexplanation();
	afx_msg void OnUsersUserinformation();
	afx_msg void OnUsersRatethegames();
};
