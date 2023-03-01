#pragma once

#ifdef ANDROMEDA_WINDOWS_SYSTEM
    #ifdef ANDROMEDA_BUILD
        #define ANDROMEDA_ENGINE_API __declspec(dllexport)
    #else
        #define ANDROMEDA_ENGINE_API __declspec(dllimport)
    #endif
#else
    #define ANDROMEDA_ENGINE_API
#endif