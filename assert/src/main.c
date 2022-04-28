/****************************
Copyright(c) 2022 Vishal Ahirwar.
****************************/
#include <stdio.h>
#include <assert.h>
#include<stdlib.h>
int main()
{
    printf("please don't type 0...");
    char x;
    scanf("%c", &x);
    // static_assert(x != '0');
    if(x=='0')
    {
        abort();
    }
    printf("\nshtting down normally ...\n");
    return 0;
}
