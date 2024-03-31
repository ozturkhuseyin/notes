#ifndef __DEBUG_MANAGER_H__
#define __DEBUG_MANAGER_H__


#define DEBUG_MANAGER_EN    1
#define DEBUG_MANAGER_TAG   "[DEBUG]"

/* MODULAR DEBUG ENABLE */
#define _LOG_EN_LIB_A       1
#define _LOG_EN_LIB_B       1
#define _LOG_EN_LIB_C       0


#if DEBUG_MANAGER_EN
    #define DEBUG_PRINTF(f_, ...)       printf((f_), ##__VA_ARGS__)

    // protection
    #ifndef _LOG_EN
    #define _LOG_EN     1
    #endif

    #ifndef _LOG_TAG
    #define _LOG_TAG    "[UNDEF]"
    #endif

    #define LOG_DEBUG(format, ...) ({                       \
    if (_LOG_EN)                                            \
    {                                                       \
        DEBUG_PRINTF( DEBUG_MANAGER_TAG _LOG_TAG ": ");     \
        DEBUG_PRINTF((format "\r\n"), ##__VA_ARGS__);       \
    } else {                                                \
                                                            \
    }                                                       \
    })                                                      \

#else

    #define LOG_DEBUG(format, ...)

#endif

void debug_manager_init(void);

#endif /* __DEBUG_MANAGER_H__ */