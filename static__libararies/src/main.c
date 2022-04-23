#include"my_math.h"
int main(void)
{
    int(*action)(const int,const int)=0;
    action=sub;
    int x= action(12,5);
    printf("%d\n",x);
    return 0;
}