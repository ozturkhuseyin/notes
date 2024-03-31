#include "debug_manager.h"
#include "common_header.h"
#include "stdio.h"

#define _LOG_TAG    "[LIB_A]"
#define _LOG_EN     _LOG_EN_LIB_A

void foo_a()
{
    LOG_DEBUG("foo a executed.");
}