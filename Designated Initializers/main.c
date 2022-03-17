#include<stdio.h>

int main(void)
{
    //example -1
    unsigned int Array[100]={[0 ... 50]=120,[51 ... 60]=121,[61 ... 99]=122};
    for(size_t i =0;i<sizeof(Array)/sizeof(unsigned int);++i)
    {
        printf("%zd  :%d\n",i,Array[i]);

    }
    //or
    unsigned int Array2[]={45,34,2,2};

    return 0;
}