/*
    Initial author: (https://github.com/)Convery
    License: LGPL 3.0
    Started: 2015-11-13
    Notes:
        
*/

#include "Interface.h"
#include "..\Macros.h"
#include <direct.h>

#pragma region Methods
int GetAppData(uint32_t nAppID, const char *pchKey, char *pchValue, int cchValueMax)
{
    uint64_t Key = FNV1a_Runtime((char *)pchKey, strlen(pchKey));
    char Value[33]{};

    if (AYRIAUTILITY("ReadLocalPersistent", Key, Value))
    {
        strcpy_s(pchValue, min(cchValueMax, 32), Value);
        return 1;
    }

    return 0;
}

bool BIsSubscribed()
{
    uint32_t ApplicationID = Global::ApplicationID;
    bool Subscribed = false;

    AYRIACLIENT("OwnsApplication", ApplicationID, &Subscribed);
    return Subscribed;
}
bool BIsLowViolence()
{
    // Ayria does not have a setting for this.
    // TODO: Maybe add it.
    return false;
}
bool BIsCybercafe()
{
    // Not registered by Ayria.
    return false;
}
bool BIsVACBanned()
{
    uint32_t ApplicationID = Global::ApplicationID;
    bool Banned = false;

    AYRIADEVELOPER("GetPlayerBanned", ApplicationID, &Banned);
    return Banned;
}
const char *GetCurrentGameLanguage()
{
    uint32_t ApplicationID = Global::ApplicationID;
    static char Language[64]{};

    if (AYRIADEVELOPER("FetchPlayerLanguage", ApplicationID, Language))
        return Language;

    return "english";
}
const char *GetAvailableGameLanguages()
{
    return GetCurrentGameLanguage();
}
bool BIsSubscribedApp(uint32_t nAppID)
{
    uint32_t ApplicationID = nAppID;
    bool Subscribed = false;

    AYRIACLIENT("OwnsApplication", ApplicationID, &Subscribed);
    return Subscribed;
}

uint32_t GetEarliestPurchaseUnixTime(uint32_t nAppID)
{
    // This information is not available to third parties.
    return 0;
}
bool BIsSubscribedFromFreeWeekend()
{
    // Ayria does not offer free weekends.
    return false;
}
int GetDLCCount()
{
    // TODO: Implement this in Ayria.
    return 0;
}
bool BGetDLCDataByIndex(int iDLC, uint32_t *pAppID, bool *pbAvailable, char *pchName, int cchNameBufferSize)
{
    // This will be using the keyvalue storage when DLC count is implemented.
    return false;
}
void InstallDLC(uint32_t nAppID)
{
    // TODO: Notify the backend about DLC being added.
}
void UninstallDLC(uint32_t nAppID)
{
    // TODO: Notify the backend about DLC being removed.
}

void RequestAppProofOfPurchaseKey(uint32_t nAppID)
{

}
bool GetCurrentBetaName(char *pchName, int cchNameBufferSize)
{
    strcpy_s(pchName, cchNameBufferSize, "public");
    return true;
}
bool MarkContentCorrupt(bool bMissingFilesOnly)
{
    // TODO: Notify the backend.
    return true;
}
uint32_t GetInstalledDepots(uint32_t *pvecDepots, uint32_t cMaxDepots)
{
    // Ayria does not currently support repositories so this can't be implemented.
    return 0;
}
uint32_t GetAppInstallDir(uint32_t appID, char *pchFolder, uint32_t cchFolderBufferSize)
{
    // Ayria assumes that all content exists in the main folder.
    _getcwd(pchFolder, cchFolderBufferSize);
    return strlen(pchFolder);
}

uint64_t GetAppOwner()
{
    // Ayria does not support family sharing like steam.
    uint32_t ApplicationID = Global::ApplicationID;
    uint64_t PlayerID = 0;

    AYRIADEVELOPER("FetchPlayerID", ApplicationID, PlayerID);
    return PlayerID;
}
const char *GetLaunchQueryParam(const char *pchKey)
{
    // Developer only keys.
    if (strstr(pchKey, "@"))
        return "";
    else
        return va("ayria:\\\\steam_wrapper\\%i\\%s", Global::ApplicationID, pchKey);
}

bool GetDlcDownloadProgress(uint32_t nAppID, uint64_t *punBytesDownloaded, uint64_t *punBytesTotal)
{
    // This is just a wrapper, we don't download anything from steam.
    return false;
}
int GetAppBuildId()
{
    // No one cares about this anyways.
    return 0;
}

#pragma endregion

void INTERFACE_STEAMAPPS001::Initialize()
{
    Methods = new void *[1];
    
    Methods[0] = GetAppData;

    Initialized = true;
}
void INTERFACE_STEAMAPPS002::Initialize()
{
    Methods = new void *[7];

    Methods[0] = BIsSubscribed;
    Methods[1] = BIsLowViolence;
    Methods[2] = BIsCybercafe;
    Methods[3] = BIsVACBanned;
    Methods[4] = GetCurrentGameLanguage;
    Methods[5] = GetAvailableGameLanguages;
    Methods[6] = BIsSubscribedApp;

    Initialized = true;
}
void INTERFACE_STEAMAPPS003::Initialize()
{
    Methods = new void *[8];

    Methods[0] = BIsSubscribed;
    Methods[1] = BIsLowViolence;
    Methods[2] = BIsCybercafe;
    Methods[3] = BIsVACBanned;
    Methods[4] = GetCurrentGameLanguage;
    Methods[5] = GetAvailableGameLanguages;
    Methods[6] = BIsSubscribedApp;
    Methods[7] = BIsSubscribedApp;

    Initialized = true;
}
void INTERFACE_STEAMAPPS004::Initialize()
{
    Methods = new void *[14];

    Methods[0] = BIsSubscribed;
    Methods[1] = BIsLowViolence;
    Methods[2] = BIsCybercafe;
    Methods[3] = BIsVACBanned;
    Methods[4] = GetCurrentGameLanguage;
    Methods[5] = GetAvailableGameLanguages;
    Methods[6] = BIsSubscribedApp;
    Methods[7] = BIsSubscribedApp;
    Methods[8] = GetEarliestPurchaseUnixTime;
    Methods[9] = BIsSubscribedFromFreeWeekend;
    Methods[10] = GetDLCCount;
    Methods[11] = BGetDLCDataByIndex;
    Methods[12] = InstallDLC;
    Methods[13] = UninstallDLC;

    Initialized = true;
}
void INTERFACE_STEAMAPPS005::Initialize()
{
    Methods = new void *[20];

    Methods[0] = BIsSubscribed;
    Methods[1] = BIsLowViolence;
    Methods[2] = BIsCybercafe;
    Methods[3] = BIsVACBanned;
    Methods[4] = GetCurrentGameLanguage;
    Methods[5] = GetAvailableGameLanguages;
    Methods[6] = BIsSubscribedApp;
    Methods[7] = BIsSubscribedApp;
    Methods[8] = GetEarliestPurchaseUnixTime;
    Methods[9] = BIsSubscribedFromFreeWeekend;
    Methods[10] = GetDLCCount;
    Methods[11] = BGetDLCDataByIndex;
    Methods[12] = InstallDLC;
    Methods[13] = UninstallDLC;
    Methods[14] = RequestAppProofOfPurchaseKey;
    Methods[15] = GetCurrentBetaName;
    Methods[16] = MarkContentCorrupt;
    Methods[17] = GetInstalledDepots;
    Methods[18] = GetAppInstallDir;
    Methods[19] = BIsSubscribedApp;

    Initialized = true;
}
void INTERFACE_STEAMAPPS006::Initialize()
{
    Methods = new void *[22];

    Methods[0] = BIsSubscribed;
    Methods[1] = BIsLowViolence;
    Methods[2] = BIsCybercafe;
    Methods[3] = BIsVACBanned;
    Methods[4] = GetCurrentGameLanguage;
    Methods[5] = GetAvailableGameLanguages;
    Methods[6] = BIsSubscribedApp;
    Methods[7] = BIsSubscribedApp;
    Methods[8] = GetEarliestPurchaseUnixTime;
    Methods[9] = BIsSubscribedFromFreeWeekend;
    Methods[10] = GetDLCCount;
    Methods[11] = BGetDLCDataByIndex;
    Methods[12] = InstallDLC;
    Methods[13] = UninstallDLC;
    Methods[14] = RequestAppProofOfPurchaseKey;
    Methods[15] = GetCurrentBetaName;
    Methods[16] = MarkContentCorrupt;
    Methods[17] = GetInstalledDepots;
    Methods[18] = GetAppInstallDir;
    Methods[19] = BIsSubscribedApp;
    Methods[20] = GetAppOwner;
    Methods[21] = GetLaunchQueryParam;

    Methods[22] = GetDlcDownloadProgress;
    Methods[23] = GetAppBuildId;

    Initialized = true;
}
void INTERFACE_STEAMAPPS007::Initialize()
{
    Methods = new void *[64];

    for (size_t i = 0; i < 64; ++i)
        Methods[i] = nullptr;

    Initialized = true;
}

