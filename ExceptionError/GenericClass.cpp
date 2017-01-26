// GenericClass.cpp : implementation file
//

#include "stdafx.h"
#include "ExceptionError.h"
#include "GenericClass.h"


// GenericClass

IMPLEMENT_DYNAMIC(GenericClass, CWnd)

GenericClass::GenericClass()
{

}

GenericClass::~GenericClass()
{
}


BEGIN_MESSAGE_MAP(GenericClass, CWnd)
END_MESSAGE_MAP()



// GenericClass message handlers
void GenericClass::CreateException()
{
	throw NewException("exception hName", "exception Message");
}


