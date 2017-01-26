#pragma once
#include "stdafx.h"

enum _MsgLvl
{
	eMsgLvl_Error = 0,
	eMsgLvl_Warning = 1,
	eMsgLvl_Audit = 2,
	eMsgLvl_Info = 3,
	eMsgLvl_Debug = 4
};
typedef enum _MsgLvl  MsgLvl;

class NewException : public exception
{
public:
	NewException(const CString& csEventName, const CString &csMessage);
	NewException(const CString& csEventName, const _com_error& comError);
	
	void LogException(CString eventName, CString eventLogged) const;


};