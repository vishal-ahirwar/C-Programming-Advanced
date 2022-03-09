#include <stdio.h>
// Sum to previous call
int sum(const int var)
{
    static int sum = {0};
    sum += var;
    return sum;
};

int main(void)
{
    printf("which number's table you wanna to see please enter ...");
    int number = {0};
    scanf("%d", &number);

    for (int i = 0; i < 10; ++i)
        printf(" %d, ", sum(number));
    printf("\n");

    return 0;
}