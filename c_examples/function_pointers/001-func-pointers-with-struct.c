/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include "stdint.h"

typedef struct
{
    uint8_t (*read)(uint8_t reg, uint8_t *dest);
    uint8_t (*write)(uint8_t reg, uint8_t src);
    uint8_t (*init_iic)(void);
    void (*callback)(void);
} operations_t;

uint8_t ops_lib_init(operations_t *ops, uint8_t (*read)(uint8_t, uint8_t*), uint8_t (*write)(uint8_t, uint8_t), uint8_t (*init_iic)(void), void (*callback)(void))
{
    ops->read = read;
    ops->write = write;
    ops->init_iic = init_iic;
    ops->callback = callback;
}

uint8_t my_read(uint8_t reg, uint8_t *dst)
{
    printf("my_read %x %x\n", reg, dst);
    return 0;
}

uint8_t my_write(uint8_t reg, uint8_t src)
{
    printf("my_write %x %x\n", reg, src);
    return 0;
}

uint8_t my_iic_init(void)
{
    printf("my_iic_init\n");
}

void my_callback(void)
{
    printf("my_callback\n");
}

int main()
{
    operations_t my = { 0 };
    
    ops_lib_init(&my, my_read, my_write, my_iic_init, my_callback);
    
    printf("my read ret : %d \n", my.read(0x10, 0x11));
    printf("my write ret : %d \n", my.write(0x20, 0x21));
    my.init_iic();
    my.callback();
    
    return 0;
}

