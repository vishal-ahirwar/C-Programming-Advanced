#define PI 3.141592
#define TWO_PI 3.141592*2.0
//no type checking in #define
//that's const sometime preffred over #define

#undef TWO_PI
#if defined TWO_PI
#include<stdio.h>
int main(void)
{
    printf("TWO_PI DEFINED : %f",TWO_PI);
    return 0;
};
#elif defined PI
#include<stdio.h>
int main(void)
{
    printf("PI DEFINED : %f",PI);
    return 0;
};

#endif