
// ExceptionErrorView.h : interface of the CExceptionErrorView class
//

#pragma once
#include "GenericClass.h"

class CExceptionErrorView : public CView
{
protected: // create from serialization only
	CExceptionErrorView();
	DECLARE_DYNCREATE(CExceptionErrorView)

// Attributes
public:
	CExceptionErrorDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CExceptionErrorView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnViewCreateexceptionnocatch();
	afx_msg void OnViewCreateexceptionwithcatch();
};

#ifndef _DEBUG  // debug version in ExceptionErrorView.cpp
inline CExceptionErrorDoc* CExceptionErrorView::GetDocument() const
   { return reinterpret_cast<CExceptionErrorDoc*>(m_pDocument); }
#endif

