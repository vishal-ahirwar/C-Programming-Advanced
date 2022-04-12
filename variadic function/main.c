#include <stdio.h>
#include <stdarg.h>
double add(unsigned short int count, ...)
{
    va_list arg;
    va_start(arg, count);
    double sum = 0;
    for (int i = 0; i < count; ++i)
    {
        double n = va_arg(arg, double);
        sum += n;
    };

    va_end(arg);
    return sum;
};

void print(int count, ...)
{
    va_list arg;
    va_start(arg, count);
    for (int i = 0; i < count; ++i)
    {
        const char *str = va_arg(arg, const char *);
        printf("%s", str);
    };
    va_end(arg);
};

int main(void)
{
    double sum = add(3, 3.5, 3.5, 35.5);
    printf("%lf\n", sum);
    print(1, "\nPrinting via variadic function print ....\n");
    print(5, "Hello, World\n", "Hello, Earth\n", "Hello, Vishal\n", "Hello, vengine\n", "Hello, Galaxy\n");
    print(1, "\nshutting down ...\n");

    return 0;
}