#include "stdio.h"

#define INFO            \
X(NISSAN, 1991, GREEN)  \
X(MAZDA, 1999, BLACK)   \
X(HONDA, 2000, YELLOW)

enum color 
{
#define X(CAR_BRAND, CAR_MODEL, CAR_COLOR) CAR_COLOR,
    INFO
#undef X
};

#define X(CAR_BRAND, CAR_MODEL, CAR_COLOR) #CAR_BRAND,
const char* pcolors[] = { INFO };
#undef X

void func(enum color c)
{
    switch (c) {
#define X(CAR_BRAND, CAR_MODEL, CAR_COLOR) case CAR_COLOR: printf("%s\n", #CAR_BRAND ); break;
        INFO
#undef X
    default: printf("invalid color\n");
    }
}

int main()
{
    
    func(BLACK);
    func(YELLOW);
    func(GREEN);
    func(10);
    
    return 0;
}