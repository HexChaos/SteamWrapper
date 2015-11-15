/*
    Initial author: (https://github.com/)Convery
    License: LGPL 3.0
    Started: 2015-11-13
    Notes:
        User independent utilities.
*/

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include "Interface.h"
#include "..\Macros.h"

#pragma region Methods
uint32_t GetSecondsSinceAppActive()
{
    PrintFunction();
    return (GetTickCount64() - Global::ApplicationStart) / 1000;
}
uint32_t GetSecondsSinceComputerActive()
{
    PrintFunction();
    return GetTickCount64() / 1000;
}
uint32_t GetConnectedUniverse()
{
    PrintFunction();
    // k_EUniversePublic
    return 1;
}
uint32_t GetServerRealTime()
{
    PrintFunction();
    return time(NULL);
}

const char *GetIPCountry()
{
    PrintFunction();
    static uint64_t Geolocation = 0;

    if (AYRIACLIENT("FetchGeolocation", &Geolocation))
        return (char *)&Geolocation;

    return "SE";
}
bool GetImageSize(int iImage, uint32_t *pnWidth, uint32_t *pnHeight)
{
    PrintFunction();
    // We do not handle any image requests.
    return false;
}
bool GetImageRGBA(int iImage, uint8_t *pubDest, int nDestBufferSize)
{
    PrintFunction();
    // We do not handle any image requests.
    return false;
}
bool GetCSERIPPort(uint32_t *unIP, uint16_t *usPort)
{
    PrintFunction();
    // As we don't connect to steam directly, this is not needed.
    return false;
}
uint8_t GetCurrentBatteryPower()
{
    PrintFunction();
    // We are always on AC power.
    return 255;
}

uint32_t GetAppID()
{
    PrintFunction();
    return Global::ApplicationID;
}
void SetOverlayNotificationPosition(uint32_t eNotificationPosition)
{
    PrintFunction();
}
bool IsAPICallCompleted(uint64_t hSteamAPICall, bool *pbFailed)
{
    PrintFunction();
    return false;
}
uint32_t GetAPICallFailureReason(uint64_t hSteamAPICall)
{
    PrintFunction();
    return 0;
}
bool GetAPICallResult(uint64_t hSteamAPICall, void *pCallback, int cubCallback, int iCallbackExpected, bool *pbFailed)
{
    PrintFunction();
    return false;
}
void RunFrame()
{
    PrintFunction();
}
uint32_t GetIPCCallCount()
{
    PrintFunction();
    // Debug information.
    return 100;
}
void SetWarningMessageHook(size_t pFunction)
{
    PrintFunction();
}

bool IsOverlayEnabled()
{
    PrintFunction();
    return false;
}

bool BOverlayNeedsPresent()
{
    PrintFunction();
    return false;
}
uint64_t CheckFileSignature(const char *szFileName)
{
    PrintFunction();
    return 0;
}
bool ShowGamepadTextInput(uint32_t eInputMode, uint32_t eInputLineMode, const char *szText, uint32_t uMaxLength)
{
    PrintFunction();
    return false;
}
uint32_t GetEnteredGamepadTextLength()
{
    PrintFunction();
    return 0;
}
bool GetEnteredGamepadTextInput(char *pchValue, uint32_t cchValueMax)
{
    PrintFunction();
    return false;
}

const char *GetSteamUILanguage()
{
    PrintFunction();
    uint32_t ApplicationID = Global::ApplicationID;
    static char Language[64]{};

    if (AYRIADEVELOPER("FetchPlayerLanguage", ApplicationID, Language))
        return Language;

    return "english";
}
bool IsSteamRunningInVR()
{
    PrintFunction();
    return false;
}

#pragma endregion

void INTERFACE_STEAMUTILS001::Initialize()
{
    Methods = new void *[4];

    Methods[0] = GetSecondsSinceAppActive;
    Methods[1] = GetSecondsSinceComputerActive;
    Methods[2] = GetConnectedUniverse;
    Methods[3] = GetServerRealTime;

    Initialized = true;
}
void INTERFACE_STEAMUTILS002::Initialize()
{
    Methods = new void *[8];

    Methods[0] = GetSecondsSinceAppActive;
    Methods[1] = GetSecondsSinceComputerActive;
    Methods[2] = GetConnectedUniverse;
    Methods[3] = GetServerRealTime;
    Methods[3] = GetIPCountry;
    Methods[4] = GetImageSize;
    Methods[5] = GetImageRGBA;
    Methods[6] = GetCSERIPPort;
    Methods[7] = GetCurrentBatteryPower;

    Initialized = true;
}
void INTERFACE_STEAMUTILS003::Initialize()
{
    Methods = new void *[16];

    Methods[0] = GetSecondsSinceAppActive;
    Methods[1] = GetSecondsSinceComputerActive;
    Methods[2] = GetConnectedUniverse;
    Methods[3] = GetServerRealTime;
    Methods[3] = GetIPCountry;
    Methods[4] = GetImageSize;
    Methods[5] = GetImageRGBA;
    Methods[6] = GetCSERIPPort;
    Methods[7] = GetCurrentBatteryPower;
    Methods[8] = GetAppID;
    Methods[9] = SetOverlayNotificationPosition;
    Methods[10] = IsAPICallCompleted;
    Methods[11] = GetAPICallFailureReason;
    Methods[12] = GetAPICallResult;
    Methods[13] = RunFrame;
    Methods[14] = GetIPCCallCount;
    Methods[15] = SetWarningMessageHook;

    Initialized = true;
}
void INTERFACE_STEAMUTILS004::Initialize()
{
    Methods = new void *[17];

    Methods[0] = GetSecondsSinceAppActive;
    Methods[1] = GetSecondsSinceComputerActive;
    Methods[2] = GetConnectedUniverse;
    Methods[3] = GetServerRealTime;
    Methods[3] = GetIPCountry;
    Methods[4] = GetImageSize;
    Methods[5] = GetImageRGBA;
    Methods[6] = GetCSERIPPort;
    Methods[7] = GetCurrentBatteryPower;
    Methods[8] = GetAppID;
    Methods[9] = SetOverlayNotificationPosition;
    Methods[10] = IsAPICallCompleted;
    Methods[11] = GetAPICallFailureReason;
    Methods[12] = GetAPICallResult;
    Methods[13] = RunFrame;
    Methods[14] = GetIPCCallCount;
    Methods[15] = SetWarningMessageHook;
    Methods[16] = IsOverlayEnabled;

    Initialized = true;
}
void INTERFACE_STEAMUTILS005::Initialize()
{
    Methods = new void *[22];

    Methods[0] = GetSecondsSinceAppActive;
    Methods[1] = GetSecondsSinceComputerActive;
    Methods[2] = GetConnectedUniverse;
    Methods[3] = GetServerRealTime;
    Methods[3] = GetIPCountry;
    Methods[4] = GetImageSize;
    Methods[5] = GetImageRGBA;
    Methods[6] = GetCSERIPPort;
    Methods[7] = GetCurrentBatteryPower;
    Methods[8] = GetAppID;
    Methods[9] = SetOverlayNotificationPosition;
    Methods[10] = IsAPICallCompleted;
    Methods[11] = GetAPICallFailureReason;
    Methods[12] = GetAPICallResult;
    Methods[13] = RunFrame;
    Methods[14] = GetIPCCallCount;
    Methods[15] = SetWarningMessageHook;
    Methods[16] = IsOverlayEnabled;
    Methods[17] = BOverlayNeedsPresent;
    Methods[18] = CheckFileSignature;
    Methods[19] = ShowGamepadTextInput;
    Methods[20] = GetEnteredGamepadTextLength;
    Methods[21] = GetEnteredGamepadTextInput;

    Initialized = true;
}
void INTERFACE_STEAMUTILS006::Initialize()
{
    Methods = new void *[24];

    Methods[0] = GetSecondsSinceAppActive;
    Methods[1] = GetSecondsSinceComputerActive;
    Methods[2] = GetConnectedUniverse;
    Methods[3] = GetServerRealTime;
    Methods[3] = GetIPCountry;
    Methods[4] = GetImageSize;
    Methods[5] = GetImageRGBA;
    Methods[6] = GetCSERIPPort;
    Methods[7] = GetCurrentBatteryPower;
    Methods[8] = GetAppID;
    Methods[9] = SetOverlayNotificationPosition;
    Methods[10] = IsAPICallCompleted;
    Methods[11] = GetAPICallFailureReason;
    Methods[12] = GetAPICallResult;
    Methods[13] = RunFrame;
    Methods[14] = GetIPCCallCount;
    Methods[15] = SetWarningMessageHook;
    Methods[16] = IsOverlayEnabled;
    Methods[17] = BOverlayNeedsPresent;
    Methods[18] = CheckFileSignature;
    Methods[19] = ShowGamepadTextInput;
    Methods[20] = GetEnteredGamepadTextLength;
    Methods[21] = GetEnteredGamepadTextInput;
    Methods[22] = GetSteamUILanguage;
    Methods[23] = IsSteamRunningInVR;

    Initialized = true;
}
void INTERFACE_STEAMUTILS007::Initialize()
{
    Methods = new void *[24];

    Methods[0] = GetSecondsSinceAppActive;
    Methods[1] = GetSecondsSinceComputerActive;
    Methods[2] = GetConnectedUniverse;
    Methods[3] = GetServerRealTime;
    Methods[3] = GetIPCountry;
    Methods[4] = GetImageSize;
    Methods[5] = GetImageRGBA;
    Methods[6] = GetCSERIPPort;
    Methods[7] = GetCurrentBatteryPower;
    Methods[8] = GetAppID;
    Methods[9] = SetOverlayNotificationPosition;
    Methods[10] = IsAPICallCompleted;
    Methods[11] = GetAPICallFailureReason;
    Methods[12] = GetAPICallResult;
    Methods[13] = RunFrame;
    Methods[14] = GetIPCCallCount;
    Methods[15] = SetWarningMessageHook;
    Methods[16] = IsOverlayEnabled;
    Methods[17] = BOverlayNeedsPresent;
    Methods[18] = CheckFileSignature;
    Methods[19] = ShowGamepadTextInput;
    Methods[20] = GetEnteredGamepadTextLength;
    Methods[21] = GetEnteredGamepadTextInput;
    Methods[22] = GetSteamUILanguage;
    Methods[23] = IsSteamRunningInVR;

    Initialized = true;
}
