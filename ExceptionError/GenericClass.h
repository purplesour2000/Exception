#pragma once

#include "NewException.h"

// GenericClass

class GenericClass : public CWnd
{
	DECLARE_DYNAMIC(GenericClass)

public:
	GenericClass();
	virtual ~GenericClass();
	void CreateException();
protected:
	DECLARE_MESSAGE_MAP()
};


