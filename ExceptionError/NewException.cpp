#include "stdafx.h"
#include "NewException.h"


/// <summary>
/// Construct a generic batch processing exception with the specified error message.
/// </summary>
/// <param name="csEventName">The name of the event where this exception originated. (ClassName::FunctionName)</param>
/// <param name="csMessage">The exception message.</param>
NewException::NewException(const CString& csEventName, const CString& csMessage): exception(csMessage)
{
	LogException(csEventName, csMessage);
}

/// <summary>
/// Construct a generic processing exception from a _com_error.
/// </summary>
/// <param name="csEventName">The name of the event where this exception originated. (ClassName::FunctionName)</param>
/// <param name="comError"></param>
NewException::NewException(const CString& csEventName, const _com_error& comError) : exception(comError.ErrorMessage())
{
	LogException(csEventName, comError.ErrorMessage());

}

/// <summary>
/// Log this exception, write it to a message log/event viewer/you decide.
/// </summary>
/// <param name="eventLogged">The excetion message to be logged.</param>
void NewException::LogException(CString eventName, CString eventLogged) const
{
	CString csTemp;
	csTemp = eventName + " :: " + eventLogged;
	//Log the exception wherever you want, event viewer, own log file, using the log level passed in, etc.
	//AfxMessageBox(csTemp);
}


