#include <stdio.h>
#include <malloc.h>
int add(const int a, const int b)
{
    return (a + b);
};
int sub(const int a, const int b)
{
    return (a - b);
};
int div(const int a, const int b)
{
    return (a / b);
};
int multi(const int a, const int b)
{
    return (a * b);
};
int main(void)
{
    int x;
    int (*action)(const int, const int) = NULL;
    action = add;
    x = action(5, 5);
    printf("%d\n", x);
    action = sub;
    x = action(5, 5);
    printf("%d\n", x);
    action = multi;
    x = action(5, 5);
    printf("%d\n", x);
    action = div;
    x = action(5, 5);
    printf("%d\n", x);
    return 0;
}