/*
    Initial author: (https://github.com/)Convery
    License: LGPL 3.0
    Started: 2015-11-13
    Notes:
        Simplified communication with the backend.
*/

#pragma once
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

namespace Global
{
    constexpr const char *AyriaModule = (sizeof(void *) == 8 ? "AyriaAPI64" : "AyriaAPI86");
    void *GetAyriaImport(char *Name);
};
