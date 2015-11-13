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
#include "..\Utility\Crypto\FNV1.h"

namespace Global
{
    constexpr const char *AyriaModule = (sizeof(void *) == 8 ? "AyriaAPI64" : "AyriaAPI86");
    void *GetAyriaImport(char *Name);

#define AYRIASOCIAL(Method, ...) ((bool (__cdecl *)(size_t Command, ...))Global::GetAyriaImport("AyriaSocial"))(FNV1a_Runtime(Method, strlen(Method)), ##__VA_ARGS__)
#define AYRIACHAT(Method, ...) ((bool (__cdecl *)(size_t Command, ...))Global::GetAyriaImport("AyriaChat"))(FNV1a_Runtime(Method, strlen(Method)), ##__VA_ARGS__)
#define AYRIASTORAGE(Method, ...) ((bool (__cdecl *)(size_t Command, ...))Global::GetAyriaImport("AyriaStorage"))(FNV1a_Runtime(Method, strlen(Method)), ##__VA_ARGS__)
#define AYRIAKEYVALUE(Method, ...) ((bool (__cdecl *)(size_t Command, ...))Global::GetAyriaImport("AyriaKeyvalue"))(FNV1a_Runtime(Method, strlen(Method)), ##__VA_ARGS__)
#define AYRIALOBBY(Method, ...) ((bool (__cdecl *)(size_t Command, ...))Global::GetAyriaImport("AyriaLobby"))(FNV1a_Runtime(Method, strlen(Method)), ##__VA_ARGS__)
#define AYRIACOUNTER(Method, ...) ((bool (__cdecl *)(size_t Command, ...))Global::GetAyriaImport("AyriaCounter"))(FNV1a_Runtime(Method, strlen(Method)), ##__VA_ARGS__)
#define AYRIACLIENT(Method, ...) ((bool (__cdecl *)(size_t Command, ...))Global::GetAyriaImport("AyriaClient"))(FNV1a_Runtime(Method, strlen(Method)), ##__VA_ARGS__)
#define AYRIADEVELOPER(Method, ...) ((bool (__cdecl *)(size_t Command, ...))Global::GetAyriaImport("AyriaDeveloper"))(FNV1a_Runtime(Method, strlen(Method)), ##__VA_ARGS__)
#define AYRIAUTILITY(Method, ...) ((bool (__cdecl *)(size_t Command, ...))Global::GetAyriaImport("AyriaUtility"))(FNV1a_Runtime(Method, strlen(Method)), ##__VA_ARGS__)
};
