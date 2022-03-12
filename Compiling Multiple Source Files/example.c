#include"example.h"
long long int facto(int n)
{
    if(n<=0)return 1;
    return n*facto(n-1);
};
