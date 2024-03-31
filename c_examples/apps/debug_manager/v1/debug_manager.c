#include "debug_manager.h"

void debug_manager_init()
{
    debug_uart_init();
}

static void debug_uart_init()
{
    // impelement your uart pin and config initializations here

}

#if PRINTF_RETARGET

/**
 * @brief Retargetting printf
 * 
 * @param fd 
 * @param buf 
 * @param size 
 * @return int 
 */
int _write(int fd, char *buf, int size)
{
    // implement your uart send here
    for (int i = 0; i < size; i++)
    {
        // send *buff++ or buff[i]

    }

}

#else

int uart_printf(char *buff, int size)
{

}

#endif