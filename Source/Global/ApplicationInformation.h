/*
    Initial author: (https://github.com/)Convery
    License: LGPL 3.0
    Started: 2015-11-13
    Notes:
        As it says on the tin, globally accessable information.
*/

#pragma once
#include <stdint.h>

namespace Global
{
    extern uint32_t ApplicationID;
    extern char ApplicationName[32];
    extern bool ApplicationOffline;
    extern bool ApplicationServer;
};
