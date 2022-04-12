#include"err.h"
ErrHandler handler;
int main()
{


    printf("enter n");
    int n;
    scanf("%d",&n);
    __throw__(handler,n);


    return 0;
}