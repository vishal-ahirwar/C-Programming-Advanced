#include <stdio.h>
#include <malloc.h>
int main()
{
    int **d_pointer = NULL;
    int *pointer = (int *)malloc(sizeof(int));
    d_pointer = &pointer;
    **d_pointer = 120;
    printf("pointer  :%d , d_pointer : %d\n", *pointer, **d_pointer);

    return 0;
}