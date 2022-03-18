#include<stdio.h>
int main(void)
{

    int *restrict intptrA;
    int*restrict intptrB;
    //tell the compiler that, for the duration of the scope in which intptrA,and intptrB are defined
        //they will never access the same value
        //like
    int IO_VIDEO={1};
    intptrA=&IO_VIDEO;
    intptrB=&IO_VIDEO;

    printf("intptrA : %d\nintptrB : %d",*intptrA,*intptrB);
    
    return 0;
}