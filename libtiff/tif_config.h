/* libtiff/tif_config.h.cmake.in.  Not generated, but originated from autoheader.  */
/* This file must be kept up-to-date with needed substitutions from libtiff/tif_config.h.in. */

#if defined(_MSC_VER) || defined(__MINGW32__)
#include "tif_config_win32.h"
#elif defined(__linux__)
#include "tif_config_linux.h"
#elif defined(__APPLE__)
#include "tif_config_macOS.h"
#endif
