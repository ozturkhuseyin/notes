// https://en.wikipedia.org/wiki/X_Macro
// https://stackoverflow.com/questions/6635851/real-world-use-of-x-macros
// https://en.wikibooks.org/wiki/C_Programming/Preprocessor_directives_and_macros#X-Macros
// 

#include "stdio.h"

/* -------------------------------------------- */

#include "x-macro.h"

/* -------------------------------------------- */

#include "handler-def.h"

void handler_0(void)
{
    printf("handler0 executed\n");
}

void handler_1(void)
{
    printf("handler1 executed\n");
}

void handler_2(void)
{
    printf("handler2 executed\n");
}

/* -------------------------------------------- */

int main()
{
    printf("test code for x macro\n\n");

    execute_handlers();
    print_descs();
    print_intervals();

    print_all();
    
    return 0;
}