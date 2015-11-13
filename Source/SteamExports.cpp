/*
    Initial author: (https://github.com/)Convery
    License: LGPL 3.0
    Started: 2015-11-13
    Notes:
        Standard steamworks export.
*/

#include <stdint.h>
#include <direct.h>
#include <string>
#include "Interfaces\Interface.h"

// Readable interfaces.
std::string
AppListInterface,
AppsInterface,
ClientInterface,
ControllerInterface,
FriendsInterface,
GameServerInterface,
GameServerHTTPInterface,
GameServerInventoryInterface,
GameServerNetworkingInterface,
GameServerStatsInterface,
GameServerUGCInterface,
GameServerUtilsInterface,
HTMLSurfaceInterface,
HTTPInterface,
InventoryInterface,
MatchmakingInterface,
MatchmakingServersInterface,
MusicInterface,
MusicRemoteInterface,
NetworkingInterface,
RemoteStorageInterface,
ScreenshotsInterface,
UnifiedMessagesInterface,
UGCInterface,
UserInterface,
UserStatsInterface,
UtilsInterface,
VideoInterface;

extern "C"
{
#define INTERFACECALL(string) \
void *Temp = FetchInterface((char *)string.c_str()); \
return &Temp

    // Steam interface access.
    __declspec(dllexport) void *SteamAppList()
    {
        INTERFACECALL(AppListInterface);
    }
    __declspec(dllexport) void *SteamApps()
    {
        INTERFACECALL(AppsInterface);
    }
    __declspec(dllexport) void *SteamClient()
    {
        INTERFACECALL(ClientInterface);
    }
    __declspec(dllexport) void *SteamController()
    {
        INTERFACECALL(ControllerInterface);
    }
    __declspec(dllexport) void *SteamFriends()
    {
        INTERFACECALL(FriendsInterface);
    }

    __declspec(dllexport) void *SteamGameServer()
    {
        INTERFACECALL(GameServerInterface);
    }
    __declspec(dllexport) void *SteamGameServerHTTP()
    {
        INTERFACECALL(GameServerHTTPInterface);
    }
    __declspec(dllexport) void *SteamGameServerInventory()
    {
        INTERFACECALL(GameServerInventoryInterface);
    }
    __declspec(dllexport) void *SteamGameServerNetworking()
    {
        INTERFACECALL(GameServerNetworkingInterface);
    }
    __declspec(dllexport) void *SteamGameServerStats()
    {
        INTERFACECALL(GameServerStatsInterface);
    }
    __declspec(dllexport) void *SteamGameServerUGC()
    {
        INTERFACECALL(GameServerUGCInterface);
    }
    __declspec(dllexport) void *SteamGameServerUtils()
    {
        INTERFACECALL(GameServerUtilsInterface);
    }
    __declspec(dllexport) void *SteamHTMLSurface()
    {
        INTERFACECALL(HTMLSurfaceInterface);
    }
    __declspec(dllexport) void *SteamHTTP()
    {
        INTERFACECALL(HTTPInterface);
    }   
    __declspec(dllexport) void *SteamInventory()
    {
        INTERFACECALL(InventoryInterface);
    }
    __declspec(dllexport) void *SteamMatchmaking()
    {
        INTERFACECALL(MatchmakingInterface);
    }
    __declspec(dllexport) void *SteamMatchmakingServers()
    {
        INTERFACECALL(MatchmakingServersInterface);
    }
    __declspec(dllexport) void *SteamMusic()
    {
        INTERFACECALL(MusicInterface);
    }
    __declspec(dllexport) void *SteamMusicRemote()
    {
        INTERFACECALL(MusicRemoteInterface);
    }
    __declspec(dllexport) void *SteamNetworking()
    {
        INTERFACECALL(NetworkingInterface);
    }
    __declspec(dllexport) void *SteamRemoteStorage()
    {
        INTERFACECALL(RemoteStorageInterface);
    }
    __declspec(dllexport) void *SteamScreenshots()
    {
        INTERFACECALL(ScreenshotsInterface);
    }
    __declspec(dllexport) void *SteamUnifiedMessages()
    {
        INTERFACECALL(UnifiedMessagesInterface);
    }
    __declspec(dllexport) void *SteamUGC()
    {
        INTERFACECALL(UGCInterface);
    }
    __declspec(dllexport) void *SteamUser()
    {
        INTERFACECALL(UserInterface);
    }
    __declspec(dllexport) void *SteamUserStats()
    {
        INTERFACECALL(UserStatsInterface);
    }
    __declspec(dllexport) void *SteamUtils()
    {
        INTERFACECALL(UtilsInterface);
    }
    __declspec(dllexport) void *SteamVideo()
    {
        INTERFACECALL(VideoInterface);
    }

    // Initialization and shutdown.
    __declspec(dllexport) bool SteamAPI_Init()
    {
        return true;
    }
    __declspec(dllexport) void SteamAPI_Shutdown()
    {

    }
    __declspec(dllexport) bool SteamAPI_IsSteamRunning()
    {
        return true;
    }
    __declspec(dllexport) bool SteamAPI_RestartAppIfNecessary(uint32_t unOwnAppID)
    {
        Global::ApplicationID = unOwnAppID;
        return false;
    }
    __declspec(dllexport) void SteamAPI_WriteMiniDump(uint32_t uStructuredExceptionCode, void* pvExceptionInfo, uint32_t uBuildID)
    {

    }
    __declspec(dllexport) void SteamAPI_SetMiniDumpComment(const char *pchMsg)
    {

    }

    // Callback management.
    __declspec(dllexport) void SteamAPI_RunCallbacks()
    {

    }
    __declspec(dllexport) void SteamAPI_RegisterCallback( class CCallbackBase *pCallback, int iCallback )
    {

    }
    __declspec(dllexport) void SteamAPI_UnregisterCallback( class CCallbackBase *pCallback )
    {

    }
    __declspec(dllexport) void SteamAPI_RegisterCallResult( class CCallbackBase *pCallback, uint64_t hAPICall )
    {

    }
    __declspec(dllexport) void SteamAPI_UnregisterCallResult( class CCallbackBase *pCallback, uint64_t hAPICall )
    {

    }

    // Server hosting.
    __declspec(dllexport) bool SteamGameServer_Init(uint32_t unIP, uint16_t usSteamPort, uint16_t usGamePort, uint16_t usQueryPort, uint32_t eServerMode, const char *pchVersionString)
    {
        return true;
    }
    __declspec(dllexport) void SteamGameServer_Shutdown()
    {

    }
    __declspec(dllexport) void SteamGameServer_RunCallbacks()
    {

    }
    __declspec(dllexport) bool SteamGameServer_BSecure()
    {
        return false;
    }
    __declspec(dllexport) uint64_t SteamGameServer_GetSteamID()
    {
        return 0x1100001DEADC0DE;
    }

    // Steamclient abstraction.
    __declspec(dllexport) const char *SteamAPI_GetSteamInstallPath()
    {
        static char Path[FILENAME_MAX];
        _getcwd(Path, FILENAME_MAX);
        
        return Path;
    }
};
