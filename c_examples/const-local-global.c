#include <stdio.h>

const int c = 20;

int main() 
{   
    // local const stored in stack
    const int a = 10; 
    int *b = &a; 
    printf("Value of local constant is %d \n",a); 
    *b = 20; 
    printf("Value of local constant is %d \n",a); 
    
    // global const stored in flash
    int *d = &c;
    printf("Value of global constant is %d \n", c);
    //*d = 40;  // illegal
    //printf("Value of global constant is %d \n", c);
    
    return 0; 
}