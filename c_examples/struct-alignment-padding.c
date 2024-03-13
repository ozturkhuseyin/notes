#include <stdio.h>

#define PRINT_SIZE(val)         printf("Size of " #val " : %ld \n", sizeof(val))
#define PRINT(fmt, ...)         printf((fmt), ##__VA_ARGS__)
#define PRINT_LN(fmt, ...)      PRINT(fmt "\r\n", ##__VA_ARGS__)
#define PRINT_SIZE_OF(arr)      PRINT("Size of array " #arr " : %ld \n", (sizeof(arr) / sizeof(arr[0])))

struct str1 {
  int a;                // 4 byte   4 / 4
  char b;               // 1 byte   1 / 4
};

struct str2 {
    int a;              // 4 byte   4/4
    char b;             // 1 byte   1/4
    char padding[3];    // 3 byte   1+3/4   padding
};

struct str3 {
    int *a;             // 8 byte
};


int main()
{
    struct str1 a;
    struct str2 b;
    struct str3 c;
    
    // a and b has different objects but same size, because of 4-byte alignment
    PRINT_SIZE(a);
    PRINT_SIZE(b);
    
    // pointers are 8 byte in 64-bit system
    PRINT_SIZE(int*);
    PRINT_SIZE(char*);    
    
    struct str2 *p;
    
    //p->a = 10;
    //(*p).a = 10;
    
    int bbb[23];
    PRINT_SIZE_OF(bbb);
    

    return 0;
}