/*
    Initial author: (https://github.com/)Convery
    License: LGPL 3.0
    Started: 2015-11-13
    Notes:
        Base definition of the interfaces.
*/

#include "Interface.h"
#include "..\Macros.h"
#include <unordered_map>

// Internal map of all registered interfaces.
std::unordered_map<size_t, SteamInterface *> Interfaces;

// Dummy interface for debugging.
void DummyMethod()
{
    DebugPrint("Steam interface called a dummy method");
}
struct DummyInterface : SteamInterface
{
    virtual void Initialize()
    {
        Methods = new void *[64];
        
        for (size_t i = 0; i < 64; ++i)
            Methods[i] = DummyMethod;

        Initialized = true;
    }
};

// Fetch and insert interfaces.
void *FetchInterface(char *Name)
{
    size_t Identifier = FNV1a_Runtime(Name, strlen(Name));

    if (Interfaces.find(Identifier) == Interfaces.end())
    {
        Interfaces[Identifier] = new DummyInterface;
    }

    if (!Interfaces[Identifier]->Initialized) 
        Interfaces[Identifier]->Initialize();
    return Interfaces[FNV1a_Runtime(Name, strlen(Name))];
}
void AddInterface(SteamInterface *Interface)
{
    Interfaces[Interface->GetIdentifier()] = Interface;
}
