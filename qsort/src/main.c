/****************************
Copyright(c) 2022 Vishal Ahirwar.
****************************/
#include <stdio.h>
#include <stdlib.h>
int fast_sort(const void *, const void *);
int main(void)
{
    int arr[1000000];
    int i = 0;
    printf("\n[");
    while (i < (sizeof(arr)/sizeof(arr[0])))
    {
        printf("%d, ", *(arr + (i++)));
    };
    printf("]\n");

    // qsort
    qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0]), fast_sort);
    i = 0;
    printf("\nqsort():\n\n[");
    while (i < (sizeof(arr)/sizeof(arr[0])))
    {
        printf("%d, ", *(arr + (i++)));
    };
    printf("]\n");
};
int fast_sort(const void *p1, const void *p2)
{
   return ((*(int *)(p1)) - (*(int *)(p2)));
};