// FBuildVersion.h
//------------------------------------------------------------------------------
#pragma once

// Defines
//------------------------------------------------------------------------------
#define FBUILD_VERSION_STRING "v1.10"
#define FBUILD_VERSION (uint32_t)110
#if defined( __WINDOWS__ )
    #define FBUILD_VERSION_PLATFORM "Windows"
#elif defined( __APPLE__ )
    #define FBUILD_VERSION_PLATFORM "OSX"
#elif defined( __LINUX__ )
    #define FBUILD_VERSION_PLATFORM "Linux"
#else
    #error Unknown platform
#endif

//------------------------------------------------------------------------------
