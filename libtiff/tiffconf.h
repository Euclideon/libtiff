/*
  Configuration defines for installed libtiff.
  This file maintained for backward compatibility. Do not use definitions
  from this file in your programs.
*/

#ifndef _TIFFCONF_
#define _TIFFCONF_

#if defined(_MSC_VER) || defined(__MINGW32__)
#include "tiffconf_win32.h"
#elif defined(__linux__)
#include "tiffconf_linux.h"
#elif defined(__APPLE__)
#include "tiffconf_macOS.h"
#elif defined(__ANDROID__)
#include "tiffconf_android.h"
#endif

#endif /* _TIFFCONF_ */
