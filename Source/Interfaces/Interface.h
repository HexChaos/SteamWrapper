/*
    Initial author: (https://github.com/)Convery
    License: LGPL 3.0
    Started: 2015-11-13
    Notes:
        Base definition of the interfaces.
*/

#pragma once
#include "..\Utility\Crypto\FNV1.h"

// Mapped interface.
struct SteamInterface
{
    bool Initialized{ false };
    void **Methods{ nullptr };

    virtual void Initialize()
    {
        Initialized = true;
    }
    size_t GetIdentifier()
    {
        return FNV1a_Compiletime(__func__);
    }
    void *GetMethods()
    {
        return Methods;
    }
};

void *FetchInterface(char *Name);
void AddInterface(SteamInterface *Interface);
