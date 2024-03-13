#include "stdio.h"
#include "stdint.h"

/* ######################################## MACROS ######################################## */

#define PRINT_SIZE(val)         printf("Size of " #val " : %ld \n", sizeof(val))
#define PRINT(fmt, ...)         printf((fmt), ##__VA_ARGS__)
#define PRINT_LN(fmt, ...)      PRINT(fmt "\r\n", ##__VA_ARGS__)
#define PRINT_SIZE_OF(arr)      PRINT("Size of array " #arr " : %ld \n", (sizeof(arr) / sizeof(arr[0])))

/* ######################################## FUNCTIONS ######################################## */

/***************************************************************************************************
 * @brief Assumes little endian
 * 
 * @param size 
 * @param ptr 
 */
void print_bits(size_t const size, void const * const ptr)
{
    unsigned char *b = (unsigned char*) ptr;
    unsigned char byte;
    int i, j;
    
    for (i = size-1; i >= 0; i--) {
        for (j = 7; j >= 0; j--) {
            byte = (b[i] >> j) & 1;
            printf("%u", byte);
        }
    }
    puts("");
}

/***************************************************************************************************
 * @brief Set the Bit object
 * 
 * @param pData 
 * @param i 
 */
void set_bit(uint8_t *pData, const uint8_t i)
{
    uint8_t temp;   // is it necessary ?
    temp = *pData;
    
    temp |= (1 << i);

    printf("set bit ->%d\n", i);
    print_bits(sizeof(temp), &temp);
    
    *pData = temp;
}

/***************************************************************************************************
 * @brief 
 * 
 * @param pData 
 * @param i 
 */
void reset_bit(uint8_t *pData, const uint8_t i)
{
    uint8_t temp;   // is it necessary ?
    temp = *pData;
    
    temp &= ~(1 << i);

    printf("reset bit ->%d\n", i);
    print_bits(sizeof(temp), &temp);
    
    *pData = temp;
}

/***************************************************************************************************
 * @brief checks given char is numeric (0-9) or not.
 * 
 * @param a 
 * @return int if *a is numeric returns 1 else 0
 */
int is_numeric(const char *a)
{   
    return ((*a > 47) & (*a < 58)) ? 1 : 0;
}

/***************************************************************************************************
 * @brief checks given single char is characteristic (a-z, A-Z) or not.
 * 
 * @param a 
 * @return int if given input is characteristic returns 1 else 0
 */
int is_characteristic(const char *a)
{   
    return (((*a > 64) & (*a < 91)) | ((*a > 96) & (*a < 123))) ? 1 : 0;
}

/***************************************************************************************************
 * @brief calculates base ^ power with for loop
 * 
 * @param base 
 * @param power 
 * @return int 
 */
int power(int base, int power)
{
    int ret = 1;  
    for (int i = 0; i < power; i++)
    {
        ret *= base;
    }
    
    return ret;
}


/***************************************************************************************************
 * @brief error return for check_overflow_str_to_int(const char *data) function
 * 
 */
#define ERR_VAL 0   // is it true ? if string is "0"

/**
 * @brief overflow len limiter for check_overflow_str_to_int(const char *data) function
 * 
 */
typedef uint16_t len_t;

/**
 * @brief overflow check var. type for check_overflow_str_to_int(const char *data) function
 * 
 */
typedef uint8_t control_t;

/**
 * @brief Checks is input decimal value in string can be holded in its type
 * 
 * @param data 
 * @return uint8_t if input strings decimal value can be stored in control_t type returns value else ERR_VAL
 */
control_t check_overflow_str_to_int(const char *data)
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
    printf("Hello World!");

    return 0;
}