/***
 * So you can compile multiple source file by just typing this command :
 * gcc example.c main.c -o main
 * or
 * you can link object file
 * gcc -c example.c Complies to object file
 * gcc example.o main.c -o main
 * no need to put your headerfile here
 * that's it
 ***/

#include "example.h"
#include <stdio.h>
int main(void)
{
    puts("which number's factorial you wanna to print ...");
    unsigned int n;
    scanf("%d", &n);

    printf("factorial of %d is = %lld\n", n, facto(n));
    return 0;
};
