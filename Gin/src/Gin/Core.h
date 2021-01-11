#pragma once

#ifdef GIN_PLATFORM_WINDOWS
	#ifdef GIN_BUILD_DLL
		#define GIN_API __declspec(dllexport)
	#else
		#define GIN_API __declspec(dllimport)
	#endif
#else
	#error Gin onlt supports Windows
#endif
