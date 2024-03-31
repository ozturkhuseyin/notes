/**
 * @file debug_manager.h
 * @author Hüseyin Öztürk
 * @brief Just define _LOG_TAG in your application and use LOG_DEBUG
 * @version 0.1
 * @date 2023-01-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef __DEBUG_MANAGER_H__
#define __DEBUG_MANAGER_H__

#define DEBUG_MANAGER_EN        1
#define PRINTF_RETARGET         1

#if DEBUG_MANAGER_EN

#if PRINTF_RETARGET

#define DEBUG_PRINTF(f_, ...)           printf((f_), ##__VA_ARGS__)
#define LOG_DEBUG(format, ...)          DEBUG_PRINTF("[Debug] :" _LOG_TAG format "\r\n", ## __VA_ARGS__)

#else

// TODO: add implementation of uart send here

#endif

#else

#define LOG_DEBUG(format, ...)          

#endif

void debug_manager_init(void);



#endif /* __DEBUG_MANAGER_H__ */