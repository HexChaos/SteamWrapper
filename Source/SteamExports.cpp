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
    // Steam interface access.
    __declspec(dllexport) void *SteamAppList()
    {
        return FetchInterface((char *)AppListInterface.c_str());
    }
    __declspec(dllexport) void *SteamApps()
    {
        return FetchInterface((char *)AppsInterface.c_str());
    }
    __declspec(dllexport) void *SteamClient()
    {
        return FetchInterface((char *)ClientInterface.c_str());
    }
    __declspec(dllexport) void *SteamController()
    {
        return FetchInterface((char *)ControllerInterface.c_str());
    }
    __declspec(dllexport) void *SteamFriends()
    {
        return FetchInterface((char *)FriendsInterface.c_str());
    }

    __declspec(dllexport) void *SteamGameServer()
    {
        return FetchInterface((char *)GameServerInterface.c_str());
    }
    __declspec(dllexport) void *SteamGameServerHTTP()
    {
        return FetchInterface((char *)GameServerHTTPInterface.c_str());
    }
    __declspec(dllexport) void *SteamGameServerInventory()
    {
        return FetchInterface((char *)GameServerInventoryInterface.c_str());
    }
    __declspec(dllexport) void *SteamGameServerNetworking()
    {
        return FetchInterface((char *)GameServerNetworkingInterface.c_str());
    }
    __declspec(dllexport) void *SteamGameServerStats()
    {
        return FetchInterface((char *)GameServerStatsInterface.c_str());
    }
    __declspec(dllexport) void *SteamGameServerUGC()
    {
        return FetchInterface((char *)GameServerUGCInterface.c_str());
    }
    __declspec(dllexport) void *SteamGameServerUtils()
    {
        return FetchInterface((char *)GameServerUtilsInterface.c_str());
    }

    __declspec(dllexport) void *SteamHTMLSurface()
    {
        return FetchInterface((char *)HTMLSurfaceInterface.c_str());
    }
    __declspec(dllexport) void *SteamHTTP()
    {
        return FetchInterface((char *)HTTPInterface.c_str());
    }   
    __declspec(dllexport) void *SteamInventory()
    {
        return FetchInterface((char *)InventoryInterface.c_str());
    }
    __declspec(dllexport) void *SteamMatchmaking()
    {
        return FetchInterface((char *)MatchmakingInterface.c_str());
    }
    __declspec(dllexport) void *SteamMatchmakingServers()
    {
        return FetchInterface((char *)MatchmakingServersInterface.c_str());
    }
    __declspec(dllexport) void *SteamMusic()
    {
        return FetchInterface((char *)MusicInterface.c_str());
    }
    __declspec(dllexport) void *SteamMusicRemote()
    {
        return FetchInterface((char *)MusicRemoteInterface.c_str());
    }
    __declspec(dllexport) void *SteamNetworking()
    {
        return FetchInterface((char *)NetworkingInterface.c_str());
    }
    __declspec(dllexport) void *SteamRemoteStorage()
    {
        return FetchInterface((char *)RemoteStorageInterface.c_str());
    }
    __declspec(dllexport) void *SteamScreenshots()
    {
        return FetchInterface((char *)ScreenshotsInterface.c_str());
    }
    __declspec(dllexport) void *SteamUnifiedMessages()
    {
        return FetchInterface((char *)UnifiedMessagesInterface.c_str());
    }
    __declspec(dllexport) void *SteamUGC()
    {
        return FetchInterface((char *)UGCInterface.c_str());
    }
    __declspec(dllexport) void *SteamUser()
    {
        return FetchInterface((char *)UserInterface.c_str());
    }
    __declspec(dllexport) void *SteamUserStats()
    {
        return FetchInterface((char *)UserStatsInterface.c_str());
    }
    __declspec(dllexport) void *SteamUtils()
    {
        return FetchInterface((char *)UtilsInterface.c_str());
    }
    __declspec(dllexport) void *SteamVideo()
    {
        return FetchInterface((char *)VideoInterface.c_str());
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
        return true;
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
