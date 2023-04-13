#pragma once
#ifndef  WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif // ! WIN32_LEAN_AND_MEAN
#ifndef WINVER
#define _WIN32_WINNT 0x0A00
#define WINVER 0x00A00
#endif // !_WIN32_WINNT
#define _Win32_DCOM

#include <Windows.h>
#include <CommCtrl.h>
#include <tchar.h>
#include <CommDlg.h>				// Dialogs
#include <Shlwapi.h>				// e.g. For example for shortening long paths. Needed: Shlwapi.lib static linked.
#include <strsafe.h>				// e.g. Safe string copy
#include <ShellAPI.h>				// e.g. SHELLEXECUTEINFO
#include <io.h>					// e.g. _access_s (file exists)
#include <Shobjidl.h>				// COM objects
#include <Objbase.h>
#include <random>
