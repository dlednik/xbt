// URLStatic.cpp : implementation file
//

#include "stdafx.h"
#include "URLStatic.h"

/////////////////////////////////////////////////////////////////////////////
// CURLStatic

BEGIN_MESSAGE_MAP(CURLStatic, CStatic)
	//{{AFX_MSG_MAP(CURLStatic)
	ON_WM_CTLCOLOR_REFLECT()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CURLStatic message handlers

HBRUSH CURLStatic::CtlColor(CDC* pDC, UINT nCtlColor)
{
	pDC->SetBkMode(TRANSPARENT);
	pDC->SetTextColor(RGB(0, 0, 255));
	return static_cast<HBRUSH>(GetStockObject(NULL_BRUSH));
}

