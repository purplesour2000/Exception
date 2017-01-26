
// ExceptionErrorView.cpp : implementation of the CExceptionErrorView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "ExceptionError.h"
#endif

#include "ExceptionErrorDoc.h"
#include "ExceptionErrorView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CExceptionErrorView

IMPLEMENT_DYNCREATE(CExceptionErrorView, CView)

BEGIN_MESSAGE_MAP(CExceptionErrorView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
	ON_COMMAND(ID_VIEW_CREATEEXCEPTIONNOCATCH, &CExceptionErrorView::OnViewCreateexceptionnocatch)
	ON_COMMAND(ID_VIEW_CREATEEXCEPTIONWITHCATCH, &CExceptionErrorView::OnViewCreateexceptionwithcatch)
END_MESSAGE_MAP()

// CExceptionErrorView construction/destruction

CExceptionErrorView::CExceptionErrorView()
{
	// TODO: add construction code here

}

CExceptionErrorView::~CExceptionErrorView()
{
}

BOOL CExceptionErrorView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CExceptionErrorView drawing

void CExceptionErrorView::OnDraw(CDC* /*pDC*/)
{
	CExceptionErrorDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CExceptionErrorView printing

BOOL CExceptionErrorView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CExceptionErrorView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CExceptionErrorView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CExceptionErrorView diagnostics

#ifdef _DEBUG
void CExceptionErrorView::AssertValid() const
{
	CView::AssertValid();
}

void CExceptionErrorView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CExceptionErrorDoc* CExceptionErrorView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CExceptionErrorDoc)));
	return (CExceptionErrorDoc*)m_pDocument;
}
#endif //_DEBUG


// CExceptionErrorView message handlers


void CExceptionErrorView::OnViewCreateexceptionnocatch()
{
	AfxMessageBox("This will crash...");
	GenericClass gc;
	gc.CreateException();

}


void CExceptionErrorView::OnViewCreateexceptionwithcatch()
{
	try
	{
		GenericClass gc;
		gc.CreateException();
	}
	catch (NewException ne)
	{
		AfxMessageBox("caught exception");
	}
}
