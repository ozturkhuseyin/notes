#include "debug_manager.h"
#include "common_header.h"
#include "stdio.h"

#define _LOG_TAG    "[LIB_C]"
#define _LOG_EN     _LOG_EN_LIB_C

void foo_c()
{
    LOG_DEBUG("foo c executed.");
}