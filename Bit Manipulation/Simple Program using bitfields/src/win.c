#ifndef WIN
#define WIN
#include <stdio.h>
#include"win.h"

void ShowWindow(const struct Window *win)
{
    printf("[WINDOW NAME]  :%s\n",win->WindowName);

    switch (win->type)
    {
    case Opaque:
    {
        printf("[%s] Window is Opaque\n",win->WindowName);
        break;
    };
    case Transparent:
    {
        printf("[%s] Window is Transparent\n",win->WindowName);
        break;
    };
    default:
        puts("E");
        break;
    };

    switch (win->color)
    {
    case red:
        printf("[%s] window color is red\n",win->WindowName);
        break;
    case blue:
        printf("[%s] window color is blue\n",win->WindowName);
        break;
    case green:
        printf("[%s] window color is green\n",win->WindowName);
        break;
    default:
        printf("E");
        break;
    };

    switch (win->border_shown)
    {
    case TRUE:
        printf("[%s] window border is visible\n",win->WindowName);
        break;
    case FALSE:
        printf("[%s] window border is not visible\n",win->WindowName);
        break;
    default:
        printf("E");
        break;
    };


    if (win->border_shown == TRUE)
    {
        switch (win->border_style)
        {
        case line:
            printf("[%s] Windows's border style : lined\n",win->WindowName);
            break;
        case doted:
            printf("[%s] Windows's border style : doted\n",win->WindowName);
            break;
        case dashed:
            printf("[%s] Windows's border style : dashed\n",win->WindowName);
            break;
        case None:
            printf("[%s] Windows's border style : None\n",win->WindowName);
            break;
        default:
            printf("E");
            break;
        };
    };
};

#endif