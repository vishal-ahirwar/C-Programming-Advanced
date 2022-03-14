#include<stdio.h>

/**
^the extern storage class simply tells us that a variable is defined elsewhere
^not within the same block where it is uses

^an extern variable is global variable initialised with a legal values whre it is declared in order to be used elsewhere
^an extension to the concept of global variable
**/
//Copyright(c) 2022 Vishal Ahirwar.
int main(void)
{
    extern const char*VERSION;
    extern const char*COPYIRGHT_NOTICE;
    printf("APPLICATION VERSION : %s\n",VERSION);
    printf("%s\n",COPYIRGHT_NOTICE);
    return 0;
}