#include "debug.h"

//#define _LOG_EN 1
//#define _LOG_TAG "[MAIN]"

int main()
{
    liba_x();
    libb_x();

    LOG_DEBUG("MAIN");

    return 0;
}