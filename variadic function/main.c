#include <stdio.h>
#include <stdarg.h>
double add(const double d1,const double d2, ...)
{
    va_list arg;
    va_start(arg, d2);
    double Sum = d1+d2, values = 0.0;
    while ((values = va_arg(arg, double)))
    {
        Sum += values;
        printf("..");
    };
    va_end(arg);
    return Sum;
};

int main(void)
{
   double sum=add(3.5,3.5,3.5);
   printf("%lf\n",sum);


    return 0;
}