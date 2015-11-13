/*
    Initial author: (https://github.com/)Convery
    License: LGPL 3.0
    Started: 2015-11-13
    Notes:
        Exported methods for initialization.
*/

#ifdef _WIN32
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#define WIN32_LEAN_AND_MEAN
#include <WinSock2.h>
#endif
#include <stdarg.h>
#include "Macros.h"
#include "Utility\Crypto\FNV1.h"

// Platform specific keywords.
#ifdef __linux__
#define EXPORT_ATTR __attribute__((visibility("default")))
#define IMPORT_ATTR
#elif _WIN32
#define EXPORT_ATTR __declspec(dllexport)
#define IMPORT_ATTR __declspec(dllimport)
#else
#define EXPORT_ATTR
#define IMPORT_ATTR
#pragma warning Unknown dynamic link import/export semantics.
#endif

// Macros to make it more readable.
#define EXPORTSTART(ExportName) \
EXPORT_ATTR bool __cdecl ExportName(size_t Command, ...)    \
{                               \
    bool Result = false;        \
    va_list Variadic;           \
    va_start(Variadic, Command);\
                                \
    switch(Command)             \
    {
#define EXPORTEND               \
    }                           \
                                \
    va_end(Variadic);           \
    return Result;              \
}
#define EXPORTFUNCTION(Command, Functor)    \
    case FNV1a_Compiletime(Command):        \
        Result = Functor(Variadic);         \
        break

#define EXPORT_UNHANDLED 0
#define SERVER_NOEXPORTS 93

BOOLEAN WINAPI DllMain(HINSTANCE hDllHandle, DWORD nReason, LPVOID Reserved)
{
    switch ( nReason )
    {
    case DLL_PROCESS_ATTACH:
        // Rather not handle all thread updates.
        DisableThreadLibraryCalls( hDllHandle );

        // Clean the logfile so we only save this session.
        DeleteLogfile();
        break;

    case DLL_PROCESS_DETACH:
        break;
    }

    return TRUE;
}
