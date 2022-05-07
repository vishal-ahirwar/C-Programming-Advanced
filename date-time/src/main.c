#include <stdlib.h>
#include <stdio.h>
#include <time.h>
void clock_t_uses()
{
  srand(time(0));
    clock_t start = 0, end = 0;
    double cpu_time = 0;
    start = clock();
    int c;
    do
    {

        printf("Your Lucky Number : %d", rand() % 10 + 1);
    
        printf("\nhey! would you like to exit 0/1 :");
        scanf("%d", &c);
    } while (c != 1);
    end = clock();
    cpu_time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("\nCPU Clocks used : %lf\n", cpu_time);
    printf("Elapsed time  : %8.4f seconds",difftime(end,start));
};

static  void printCurrentTime(time_t*timer)
{
   
};

int main(void)
{
    time_t timer;
    while(1)
    printf("\r%s\r",ctime(&timer));
    return 0;
}