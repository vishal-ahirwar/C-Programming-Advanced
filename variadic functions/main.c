#include<stdio.h>
#include<stdarg.h>

double GetAverage(double v1,double v2,...)
{
    va_list vlist;
    va_start(vlist,v2);
    int count=2;
    double value;
    double sum=v1+v2;
    while((value=va_arg(vlist,double))!=0.0)
    {
        sum+=value;
        ++count;
    };
    va_end(vlist);
    printf("Number of arg provided : %d\n",count);

    return sum/count;
};

int main(void)
{
    double values[]={2.2,232.2,32323,.23,2323,2.23,2323.,232};
    printf("Ave : %lf",GetAverage(values[0],values[1],values[2],values[3],values[4],values[5],values[6],values[7],0.0));
    return 0;

}