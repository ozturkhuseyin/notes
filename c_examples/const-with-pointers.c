#include <stdio.h>

typedef int* iptr;

int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    
    // low level const, left const -> because const keyword is placed left of asterisk
    const int* p1 = &a;
    p1 = &b;        // legal
    //*p1 = 15;       // illegal
    
    // top level const, right const -> because const keyword is placed right of asterisk
    int* const p2 = &b;
    *p2 = 10;       // legal
    //p2 = &a;        // illegal
    
    // const with typedefed pointers are always compiled as top level const.
    const iptr p3 = &c;
    *p3 = 10;       // legal
    //p3 = &a;        // illegal

    return 0;
}

