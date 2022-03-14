#include<stdio.h>
/**

^keyword auto is used to declare variables of automatic storage duration
^created when the block in which they are defined is entered
^exist while the block is active
^destroyed when the block is exited
^useally u don't need to put auto in front of variable

**/

//Copyright(c) 2022 Vishal Ahirwar.
int main(void)
{
    
    {
        int aXample=120;
        printf("aXample : %d\n",aXample);

    }
    auto int aXample=109;
    printf("aXample : %d\n",aXample);
    return 0;
}