#include <assert.h>

#include "tif_config.h"
#include "tiffconf.h"

static_assert(sizeof(TIFF_INT8_T) == 1, "size mismatch");
static_assert(sizeof(TIFF_INT16_T) == 2, "size mismatch");
static_assert(sizeof(TIFF_INT32_T) == 4, "size mismatch");
static_assert(sizeof(TIFF_INT64_T) == 8, "size mismatch");
static_assert(sizeof(TIFF_UINT8_T) == 1, "size mismatch");
static_assert(sizeof(TIFF_UINT16_T) == 2, "size mismatch");
static_assert(sizeof(TIFF_UINT32_T) == 4, "size mismatch");
static_assert(sizeof(TIFF_UINT64_T) == 8, "size mismatch");

static_assert(sizeof(signed int) == SIZEOF_SIGNED_INT, "size mismatch");
static_assert(sizeof(signed long) == SIZEOF_SIGNED_LONG, "size mismatch");
static_assert(sizeof(signed long long) == SIZEOF_SIGNED_LONG_LONG, "size mismatch");
static_assert(sizeof(char *) == SIZEOF_UNSIGNED_CHAR_P, "size mismatch");
static_assert(sizeof(unsigned int) == SIZEOF_UNSIGNED_INT, "size mismatch");
static_assert(sizeof(unsigned long) == SIZEOF_UNSIGNED_LONG, "size mismatch");
static_assert(sizeof(unsigned long long) == SIZEOF_UNSIGNED_LONG_LONG, "size mismatch");
