#include <stdio.h>
// #define PI .14
// #define PRNT(a, b)                  \
//     printf("first arg. : %d\n", a); \
//     printf("second arg. : %d\n", b);

// // #define TROLL(a,b)\
// //     int res=0;\
// //     res=a+b;\
// //     printf("res : %d\n",res);

// inline int ADD(const int a, const int b)
// {
//     int res = a + b;
//     return res;
// };

// #define PR(a) \
//     puts(a);

#define WARNING(...) \
    fprintf(stderr, __VA_ARGS__);

int main(void)
{
    // WARNING("%s : %d %d ....", "ERROR", 45, 45);
    // PRNT(45, 24);
    // // TROLL(120,560);
    // // TROLL(129,1);
    // int res = ADD(45, 45);
    // PR(res);
    // ADD(46, 45);
#if WINDOWS
    printf("\nCompiled for WINDOWS OS\n");
#elif MAC
    printf("\nCompiled for MAC OS\n");
#elif LINUX
    printf("\nCompiled for LINUX OS\n");
#else
    printf("No OS Detected\nPlease Recompile with OS Option\n");
#endif

    printf("statement called from %d line\n", __LINE__);
    printf("statement called from %s function\n", __func__);
    printf("%s Compiled\n", __FILE__);
    printf("last Successful compiled of the program was at %s %s\n", __TIME__, __DATE__);
    return 0;
};
