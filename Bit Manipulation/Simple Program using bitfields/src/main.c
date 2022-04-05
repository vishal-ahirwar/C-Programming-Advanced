
#include "win.h"
int main()
{
    struct Window Apple =
        {
            .WindowName = "Title Screen",
            .type = Opaque,
            .color = blue,
            .border_shown = TRUE,
            .border_color = red,
            .border_style = dashed};

    ShowWindow(&Apple);
    return TRUE;
};
