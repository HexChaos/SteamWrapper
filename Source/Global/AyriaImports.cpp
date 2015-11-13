/*
    Initial author: (https://github.com/)Convery
    License: LGPL 3.0
    Started: 2015-11-13
    Notes:
        Simplified communication with the backend.
*/

#include "AyriaImports.h"
#include "..\Macros.h"
#include "..\Utility\Crypto\FNV1.h"

namespace Global
{
#define CASEIMPORT(Name) case FNV1a_Compiletime(#Name): return Name == nullptr ? MissingImport : Name

    bool __cdecl MissingImport(size_t Command, ...)
    {
        DebugPrint("Tried to call a missing AyriaImport");
        return false;
    }
    void *GetAyriaImport(char *Name)
    {
        static HMODULE Library = { nullptr };
        static void *AyriaSocial{ nullptr };
        static void *AyriaChat{ nullptr };
        static void *AyriaStorage{ nullptr };
        static void *AyriaKeyvalue{ nullptr };
        static void *AyriaLobby{ nullptr };
        static void *AyriaCounter{ nullptr };
        static void *AyriaClient{ nullptr };
        static void *AyriaDeveloper{ nullptr };
        static void *AyriaUtility{ nullptr };

        if (Library == nullptr)
        {
            Library = GetModuleHandleA(AyriaModule);
            if (!Library)
                return MissingImport;

            AyriaSocial = GetProcAddress(Library, "AyriaSocial");
            AyriaChat = GetProcAddress(Library, "AyriaChat");
            AyriaStorage = GetProcAddress(Library, "AyriaStorage");
            AyriaKeyvalue = GetProcAddress(Library, "AyriaKeyvalue");
            AyriaLobby = GetProcAddress(Library, "AyriaLobby");
            AyriaCounter = GetProcAddress(Library, "AyriaCounter");
            AyriaClient = GetProcAddress(Library, "AyriaClient");
            AyriaDeveloper = GetProcAddress(Library, "AyriaDeveloper");
            AyriaUtility = GetProcAddress(Library, "AyriaUtility");
        }

        switch (FNV1a_Runtime(Name, sizeof(Name)))
        {
            CASEIMPORT(AyriaSocial);
            CASEIMPORT(AyriaChat);
            CASEIMPORT(AyriaStorage);
            CASEIMPORT(AyriaKeyvalue);
            CASEIMPORT(AyriaLobby);
            CASEIMPORT(AyriaCounter);
            CASEIMPORT(AyriaClient);
            CASEIMPORT(AyriaDeveloper);
            CASEIMPORT(AyriaUtility);
        default: return MissingImport;
        };
    }
};