#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    //volatile -->type qualifier
    //essentially, prevents the compiler from 'caching' variables
    //mostly used with threading stuff

    volatile char*const IOPort_A=(char*)malloc(sizeof(char));
   *IOPort_A='A'; //can do


    printf("%c, ",*IOPort_A);
 *IOPort_A='B'; //can do
        printf("%c, ",*IOPort_A);
         *IOPort_A='C'; //can do
            printf("%c, ",*IOPort_A);
            free((void*)IOPort_A);

    return 0;
}
