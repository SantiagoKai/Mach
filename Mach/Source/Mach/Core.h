#pragma once

#ifdef PLATFORM_WINDOWS // is on windows

	#ifdef BUILD_DLL // is the dll
		#define MACH_API __declspec(dllexport)

	#else // something else importing the dll
		#define MACH_API __declspec(dllimport)

	#endif
#endif