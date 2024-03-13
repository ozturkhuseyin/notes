#include "debug_manager.h"
#include "common_header.h"
#include "stdio.h"

//#define _LOG_TAG    "[LIB_B]"
#define _LOG_EN     _LOG_EN_LIB_B

void foo_b()
{
    LOG_DEBUG("foo b executed.");
}