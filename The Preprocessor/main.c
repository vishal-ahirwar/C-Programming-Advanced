#include <stdio.h>
// #define DEBUG
#ifdef DEBUG
#pragma GCC warning "hey! this is warning"
#pragma GCC error "hello! this is error"
#pragma GCC message "ok! this is message"
#else
#ifdef ERROR
#error DEBUG MODE OFF
#endif
#endif

int main(void)
{

    printf("Program '%s' Sucessfully Compiled!\n",__FILE__);
    return 0;
};
