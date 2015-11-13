/*
    Initial author: (https://github.com/)Convery
    License: LGPL 3.0
    Started: 2015-11-13
    Notes:
        Developer interface only.
*/

#include "Interface.h"
#include "..\Macros.h"

#pragma region Methods
void DummyMethod()
{
    DebugPrint("Steam interface called a dummy method");
}
#pragma endregion

void INTERFACE_DUMMY::Initialize()
{
    Methods = new void *[64];

    for (size_t i = 0; i < 64; ++i)
        Methods[i] = DummyMethod;

    Initialized = true;
}