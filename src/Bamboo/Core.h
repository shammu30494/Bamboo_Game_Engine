#pragma once

#ifdef BM_PLATFORM_WINDOWS
   #ifdef BM_BUILD_DLL
       #define BM_API _declspec(dllexport)
   #else
       #define  BM_API _declspec(dllimport)
   #endif
#else
   #error Bamboo only supports Windows!
#endif