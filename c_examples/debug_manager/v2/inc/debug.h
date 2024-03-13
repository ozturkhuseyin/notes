#ifndef __DEBUG_H__
#define __DEBUG_H__

#include "stdio.h"

#define DEBUG_EN    1
#define DEBUG_TAG   "[DEBUG]"

#define DEBUG_PRINTF(f_, ...)       printf((f_), ##__VA_ARGS__)

#if DEBUG_EN

	// protection for missed declerations
	// Logs can be enabled only in code by setting _LOG_EN to 1
    #ifndef _LOG_EN
    #define _LOG_EN     0
    #endif

    #ifndef _LOG_TAG
    #define _LOG_TAG    "[UNDEF]"
    #endif
    
    #define LOG_DEBUG(format, ...)  ({                                      \
    if (_LOG_EN)                                                            \
    {                                                                       \
        DEBUG_PRINTF( DEBUG_TAG _LOG_TAG ": ");                             \
        DEBUG_PRINTF((format "\r\n"), ## __VA_ARGS__);                      \
    }                                                                       \
    })                                                                      
    
     

#else

    #define LOG_DEBUG(format, ...)
    
#endif



void liba_x(void);
void libb_x(void);

void debug_manager_init(void);

#endif /* __DEBUG_H__ */