#include<stdio.h>
long long int sum(int x)
{
    static long long int sum=0;
    sum+=x;
    return sum;
}
int main(void)
{
    printf("first call with 15 : %lld\n",sum(15));
     printf("second call with 15 : %lld\n",sum(15));
      printf("third call with 15 : %lld\n",sum(15));
    return 0;
}