#include "stdio.h"

#include "x-macro.h"
#include "handler-def.h"

// X(id, handler, desc, interval)

#define X(id, handler, desc, interval) id,
enum id {
#include "x-macros.h"
};
#undef X

#define X(id, handler, desc, interval) #desc,
const char* descs[] = {
    #include "x-macros.h"
};
#undef X

#define X(id, handler, desc, interval) interval,
const int intervals[] = {
    #include "x-macros.h"
};
#undef X

typedef void (*handler_t)();

#define X(id ,handler, desc, interval)  handler,
handler_t funcs[] = {
    #include "x-macros.h"
};
#undef X

void execute_handlers()
{
    printf("execute_handlers() worked..\n");
    for (int i = 0; i < 3; i++)
    {
        funcs[i]();
    }
    printf("-----------------------\n");
}

void print_descs()
{   
    printf("print_decs() worked..\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", descs[i]);
    }
    printf("-----------------------\n");
}

void print_intervals()
{
    printf("print_intervals() worked..\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", intervals[i]);
    }
    printf("-----------------------\n");
}

void print_all()
{
    #define X(id, handler, desc, interval)\
    printf("id: %d - ", id);\
    printf("handler %p - ", handler);\
    printf("desc: %s - ", #desc);\
    printf("interval: %d\n", interval);\
        
    #include "x-macros.h"
    #undef X
        
}