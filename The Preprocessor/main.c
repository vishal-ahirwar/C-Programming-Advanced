#include <stdio.h>
// #define DEBUG
// Copyright(c) 2022 Vishal Ahirwar. All rights reserved.

#ifdef DEBUG
#pragma GCC warning "hey! this is warning"
#pragma GCC error "hello! this is error"
#pragma GCC message "ok! this is message"
#else
#ifdef ERROR
#error DEBUG MODE OFF
#endif
#endif
#define ADD(a, b) \
    (a + b)
#define ERROR(...)                               \
    printf("\nLine : %d, ERROR : \n", __LINE__); \
    fprintf(stderr, __VA_ARGS__)

#define WARNING(...)                               \
    printf("\nLine : %d, WARNING : \n", __LINE__); \
    fprintf(stdout, __VA_ARGS__)

#define MIN(a, b) \
    (((a < b) ? a : b))
#define MAX(a, b) \
    ((a > b) ? a : b)
#define Call(name, arg) \
    Action_##name(#arg);

void Action_call(const char *str)
{
    printf("called with : %s\n", str);
};
void Action_cut(const char *str)
{
    printf("cut with : %s\n", str);
};
void Action_copy(const char *str)
{
    printf("copy with : %s\n", str);
};
void Action_paste(const char *str)
{
    printf("paste with : %s\n", str);
};
int main(void)
{
    Call(call, ERROR);

    int i;
    int j;

    Call(copy, ERROR);
    Call(paste, WARNING);
    Call(cut, WARNING);
    WARNING("MIN : %d\n", MIN(5, 4));
    WARNING("MAX : %d\n", MAX(12, 4));
    printf("Program '%s' Sucessfully Compiled at %s!\n", __FILE__, __DATE__);
    return 0;
};
