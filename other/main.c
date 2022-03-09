#include <stdio.h>
// #pragma GCC error "ERROR"
#pragma GCC warning "WARNING"
// #pragma GCC poison printf
#define OPT_1
#ifdef OPT_1
#warning "opt found"
#elif OPT_2
#elif OPT_3
#else
#error ***must defined OPT_1 OPT_2 OPT_3 or def***
#endif

typedef struct data
{
    char BloodGroup;
    unsigned int Age;
    float Income;
} dt;

union has
{
    int count;
    float weight;
    float volume;
} def;
int main(void)
{

    union has drink;
    // drink.count
    printf("size of struct : %ld\n", sizeof(dt));
    printf("size of union : %ld\n", sizeof(drink));
    return 0;
}
