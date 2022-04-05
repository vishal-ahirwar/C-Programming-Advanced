
#include "win.h"
#include <stdio.h>
int main()
{
    struct Window Test = {1};
    Test.border_style = (Test.border_style | 1);
    unsigned int mask = (mask | 1) << 6;
    int counter = 0;
    while ((mask ^ Test.border_style))
    {
        Test.border_style <<= 1;
        printf("%d", Test.border_style);
        ++counter;
        printf("\nleft shift by %d\n", counter);
    };

#ifdef USE_APPLE
    struct Window Apple =
        {
            .WindowName = "Title Screen",
            .type = Opaque,
            .color = blue,
            .border_shown = TRUE,
            .border_color = red,
            .border_style = dashed};
    printf("sizeof window object : %zd\n", sizeof(Apple));
    ShowWindow(&Apple);
    Apple.type = Transparent;
    Apple.border_shown = FALSE;
    Apple.border_style = line;
    Apple.color = green;

    ShowWindow(&Apple);
#endif
    return TRUE;
};
