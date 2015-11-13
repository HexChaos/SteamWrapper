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

// Fetch and insert interfaces.
void *FetchInterface(char *Name);
void AddInterface(SteamInterface *Interface);

// Forward declaration to save my fingers.
#define INTERFACE_DEFINE(Name) \
struct Name : public SteamInterface \
{\
virtual void Initialize(); \
}

// Steam interfaces.
INTERFACE_DEFINE(STEAMAPPS001);
INTERFACE_DEFINE(STEAMAPPS002);
INTERFACE_DEFINE(STEAMAPPS003);
INTERFACE_DEFINE(STEAMAPPS004);
INTERFACE_DEFINE(STEAMAPPS005);
INTERFACE_DEFINE(STEAMAPPS006);
INTERFACE_DEFINE(STEAMAPPS007);

INTERFACE_DEFINE(STEAMBILLING001);
INTERFACE_DEFINE(STEAMBILLING002);
INTERFACE_DEFINE(STEAMBILLING003);

INTERFACE_DEFINE(STEAMCLIENT001);
INTERFACE_DEFINE(STEAMCLIENT002);
INTERFACE_DEFINE(STEAMCLIENT003);
INTERFACE_DEFINE(STEAMCLIENT004);
INTERFACE_DEFINE(STEAMCLIENT005);
INTERFACE_DEFINE(STEAMCLIENT006);
INTERFACE_DEFINE(STEAMCLIENT007);
INTERFACE_DEFINE(STEAMCLIENT008);
INTERFACE_DEFINE(STEAMCLIENT009);
INTERFACE_DEFINE(STEAMCLIENT010);
INTERFACE_DEFINE(STEAMCLIENT011);
INTERFACE_DEFINE(STEAMCLIENT012);
INTERFACE_DEFINE(STEAMCLIENT013);
INTERFACE_DEFINE(STEAMCLIENT014);
INTERFACE_DEFINE(STEAMCLIENT015);
INTERFACE_DEFINE(STEAMCLIENT016);
INTERFACE_DEFINE(STEAMCLIENT017);

INTERFACE_DEFINE(STEAMCONTENTSERVER001);
INTERFACE_DEFINE(STEAMCONTENTSERVER002);

INTERFACE_DEFINE(STEAMFRIENDS001);
INTERFACE_DEFINE(STEAMFRIENDS002);
INTERFACE_DEFINE(STEAMFRIENDS003);
INTERFACE_DEFINE(STEAMFRIENDS004);
INTERFACE_DEFINE(STEAMFRIENDS005);
INTERFACE_DEFINE(STEAMFRIENDS006);
INTERFACE_DEFINE(STEAMFRIENDS007);
INTERFACE_DEFINE(STEAMFRIENDS008);
INTERFACE_DEFINE(STEAMFRIENDS009);
INTERFACE_DEFINE(STEAMFRIENDS010);
INTERFACE_DEFINE(STEAMFRIENDS011);
INTERFACE_DEFINE(STEAMFRIENDS012);
INTERFACE_DEFINE(STEAMFRIENDS013);
INTERFACE_DEFINE(STEAMFRIENDS014);
INTERFACE_DEFINE(STEAMFRIENDS015);

INTERFACE_DEFINE(STEAMGAMECOORDINATOR001);

INTERFACE_DEFINE(STEAMGAMESERVER001);
INTERFACE_DEFINE(STEAMGAMESERVER002);
INTERFACE_DEFINE(STEAMGAMESERVER003);
INTERFACE_DEFINE(STEAMGAMESERVER004);
INTERFACE_DEFINE(STEAMGAMESERVER005);
INTERFACE_DEFINE(STEAMGAMESERVER006);
INTERFACE_DEFINE(STEAMGAMESERVER007);
INTERFACE_DEFINE(STEAMGAMESERVER008);
INTERFACE_DEFINE(STEAMGAMESERVER009);
INTERFACE_DEFINE(STEAMGAMESERVER010);
INTERFACE_DEFINE(STEAMGAMESERVER011);
INTERFACE_DEFINE(STEAMGAMESERVER012);

INTERFACE_DEFINE(STEAMGAMESERVERSTATS001);

INTERFACE_DEFINE(STEAMGAMESTATS001);

INTERFACE_DEFINE(STEAMHTTP001);
INTERFACE_DEFINE(STEAMHTTP002);

INTERFACE_DEFINE(STEAMMASTERUPDATER001);

INTERFACE_DEFINE(STEAMMATCHMAKING001);
INTERFACE_DEFINE(STEAMMATCHMAKING002);
INTERFACE_DEFINE(STEAMMATCHMAKING003);
INTERFACE_DEFINE(STEAMMATCHMAKING004);
INTERFACE_DEFINE(STEAMMATCHMAKING005);
INTERFACE_DEFINE(STEAMMATCHMAKING006);
INTERFACE_DEFINE(STEAMMATCHMAKING007);
INTERFACE_DEFINE(STEAMMATCHMAKING008);
INTERFACE_DEFINE(STEAMMATCHMAKING009);

INTERFACE_DEFINE(STEAMMATCHMAKINGSERVERS001);
INTERFACE_DEFINE(STEAMMATCHMAKINGSERVERS002);

INTERFACE_DEFINE(STEAMMUSIC001);

INTERFACE_DEFINE(STEAMNETWORKING001);
INTERFACE_DEFINE(STEAMNETWORKING002);
INTERFACE_DEFINE(STEAMNETWORKING003);
INTERFACE_DEFINE(STEAMNETWORKING004);
INTERFACE_DEFINE(STEAMNETWORKING005);

INTERFACE_DEFINE(STEAMOAUTH001);

INTERFACE_DEFINE(STEAMREMOTESTORAGE001);
INTERFACE_DEFINE(STEAMREMOTESTORAGE002);
INTERFACE_DEFINE(STEAMREMOTESTORAGE003);
INTERFACE_DEFINE(STEAMREMOTESTORAGE004);
INTERFACE_DEFINE(STEAMREMOTESTORAGE005);
INTERFACE_DEFINE(STEAMREMOTESTORAGE006);
INTERFACE_DEFINE(STEAMREMOTESTORAGE007);
INTERFACE_DEFINE(STEAMREMOTESTORAGE008);
INTERFACE_DEFINE(STEAMREMOTESTORAGE009);
INTERFACE_DEFINE(STEAMREMOTESTORAGE010);
INTERFACE_DEFINE(STEAMREMOTESTORAGE011);
INTERFACE_DEFINE(STEAMREMOTESTORAGE012);

INTERFACE_DEFINE(STEAMSCREENSHOTS001);
INTERFACE_DEFINE(STEAMSCREENSHOTS002);

INTERFACE_DEFINE(STEAMSTREAMLAUNCHER001);

INTERFACE_DEFINE(STEAMUGC001);
INTERFACE_DEFINE(STEAMUGC002);
INTERFACE_DEFINE(STEAMUGC003);
INTERFACE_DEFINE(STEAMUGC004);
INTERFACE_DEFINE(STEAMUGC005);
INTERFACE_DEFINE(STEAMUGC006);
INTERFACE_DEFINE(STEAMUGC007);

INTERFACE_DEFINE(STEAMUNIFIEDMESSAGES001);

INTERFACE_DEFINE(STEAMUSER001);
INTERFACE_DEFINE(STEAMUSER002);
INTERFACE_DEFINE(STEAMUSER003);
INTERFACE_DEFINE(STEAMUSER004);
INTERFACE_DEFINE(STEAMUSER005);
INTERFACE_DEFINE(STEAMUSER006);
INTERFACE_DEFINE(STEAMUSER007);
INTERFACE_DEFINE(STEAMUSER008);
INTERFACE_DEFINE(STEAMUSER009);
INTERFACE_DEFINE(STEAMUSER010);
INTERFACE_DEFINE(STEAMUSER011);
INTERFACE_DEFINE(STEAMUSER012);
INTERFACE_DEFINE(STEAMUSER013);
INTERFACE_DEFINE(STEAMUSER014);
INTERFACE_DEFINE(STEAMUSER015);
INTERFACE_DEFINE(STEAMUSER016);
INTERFACE_DEFINE(STEAMUSER017);
INTERFACE_DEFINE(STEAMUSER018);

INTERFACE_DEFINE(STEAMUSERSTATS001);
INTERFACE_DEFINE(STEAMUSERSTATS002);
INTERFACE_DEFINE(STEAMUSERSTATS003);
INTERFACE_DEFINE(STEAMUSERSTATS004);
INTERFACE_DEFINE(STEAMUSERSTATS005);
INTERFACE_DEFINE(STEAMUSERSTATS006);
INTERFACE_DEFINE(STEAMUSERSTATS007);
INTERFACE_DEFINE(STEAMUSERSTATS008);
INTERFACE_DEFINE(STEAMUSERSTATS009);
INTERFACE_DEFINE(STEAMUSERSTATS010);
INTERFACE_DEFINE(STEAMUSERSTATS011);

INTERFACE_DEFINE(STEAMUTILS001);
INTERFACE_DEFINE(STEAMUTILS002);
INTERFACE_DEFINE(STEAMUTILS003);
INTERFACE_DEFINE(STEAMUTILS004);
INTERFACE_DEFINE(STEAMUTILS005);
INTERFACE_DEFINE(STEAMUTILS006);
INTERFACE_DEFINE(STEAMUTILS007);
