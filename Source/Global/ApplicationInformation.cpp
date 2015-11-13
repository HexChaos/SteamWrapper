/*
    Initial author: (https://github.com/)Convery
    License: LGPL 3.0
    Started: 2015-11-13
    Notes:
        As it says on the tin, globally accessable information.
*/

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include "ApplicationInformation.h"

namespace Global
{
    uint32_t ApplicationID{ 0 };
    char ApplicationName[32]{ "AyriaUser" };
    bool ApplicationOffline{ true };
    bool ApplicationServer{ false };
    uint64_t ApplicationStart{ GetTickCount64() };
};
