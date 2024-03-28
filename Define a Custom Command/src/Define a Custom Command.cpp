// Define a Custom Command.cpp : Defines the initialization routines for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "arxHeaders.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


void MyCommand()
{
	acutPrintf(_T("\n Hello User"));
}

static void Greetings()
{
	acutPrintf(_T("\nHello AU2024!!!"));
}

extern "C" AcRx::AppRetCode
acrxEntryPoint(AcRx::AppMsgCode Msg, void* pkt)
{
	switch (Msg)
	{
	case AcRx::kInitAppMsg:
		acrxUnlockApplication(pkt);
		acrxRegisterAppMDIAware(pkt);
		acutPrintf(L"\n Command Loaded");
		acedRegCmds->addCommand(L"AUCommands", _T("MYCOMMAND"), _T("MYCOMMAND"), ACRX_CMD_MODAL, MyCommand);
		acedRegCmds->addCommand(_T("AUCommands"), _T("First"), _T("Uno"), ACRX_CMD_MODAL, Greetings);
		break;

	case AcRx::kUnloadAppMsg:
		acutPrintf(_T("\nUnloading createLine project...\n"));
		// Command Groups to remove
		acedRegCmds->removeGroup(_T("AUCommnds"));
		break;
	default:
		break;
	}
	return AcRx::kRetOK;
}