//debug it for brief  description 
#include <stdio.h>
#include<stdlib.h>
// #include<stdnoreturn.h>
unsigned long long int Factorial(const int n)
{
    if (n == 1)
        return 1;
    return n * Factorial(n - 1);
};

_Noreturn void ex()
{
    abort();
};

int main()
{
    
    while (1)
    {

        printf("enter n NOTE:-1 to quit-- ;)");
        int n = 0;
        scanf("%d", &n);
        if (n == -1)
            ex();
        printf("factorial of %d : %lld\n", n, Factorial(n));
    }
    return 0;
}