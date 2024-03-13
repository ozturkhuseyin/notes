/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include "stdint.h"

char *data = "260";

#define ERR_VAL 0

typedef uint16_t len_t;
typedef uint8_t control_t;              // change overflow control size

int power(int base, int power)
{
    int ret = 1;
    
    for (int i = 0; i < power; i++)
    {
        ret *= base;
    }
    
    return ret;
}

// TODO: kontrol için bit parametresi alabilir.
control_t parse_data(char *data)
{   
    control_t ret = 0;
    
    // find len -> it can be given in arg.
    len_t len = 0;
    while (data[len] != '\0')
    {
        len++;
    }
    
    printf("len: %d\n", len);
    
    // calc decimal val
    len_t temp_len = len -1;
    
    for (len_t i = 0; i < len; i++)
    {
        ret += power(10, temp_len) * (*(data + i) - 48);
        --temp_len;
    }
    
    printf("sum total : %d \n", ret);
    
    // compare input string with its calculated value
    uint8_t val = 0;
    control_t temp_ret = ret;
    temp_len = len - 1;
    
    for (len_t i = 0; i < len; i++)
    {
        val = temp_ret / power(10, temp_len);
        temp_ret -= val * power(10, temp_len);

        
        if (val != (*(data + i) - 48)) {
            printf("given string doesnt match with calculated decimal value\n");
            return ERR_VAL;
        }
        --temp_len;
    }
    
    return ret;
}

int main()
{
    printf("----sonuc: %d", parse_data(data));
    return 0;
}
