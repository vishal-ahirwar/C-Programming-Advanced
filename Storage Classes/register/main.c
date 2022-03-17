#include <stdio.h>
// register int Y=0;

int main(void)
{
    register int a = 120;
    printf("register var a : %d\n", a);
    // you can't get the address of register variable
    /**
     * error: address of register variable ‘a’ requested
    7 |     printf("address of register var a: %d\n",&a);
    **/

    // printf("address of register var a: %d\n",&a);

    return 0;
}