#include "../../../static__libararies/src/my_math.h"

#include <malloc.h>

int main(void)
{
    int x;
    printf("\nstarting ...\n\n");
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
    printf("%d\nshutting down ...\n", x);
    return 0;
}