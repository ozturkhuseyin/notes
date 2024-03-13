#include "debug_manager.h"

static void debug_uart_init(void);

void debug_manager_init()
{
	debug_uart_init();
}

static void debug_uart_init()
{
    // implement your uart pin config and initializations here
}


/**
 * @brief Retargetting printf
 * 
 * @param fd 
 * @param buf 
 * @param size 
 * @return int 
 */

/*
int _write(int fd, char *buf, int size)
{
    // implement your uart send here
    for (int i = 0; i < size; i++)
    {
        // send *buff++ or buff[i]

    }

}
*/