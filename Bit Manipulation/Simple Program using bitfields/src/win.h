#ifndef WIN_H
#define WIN_H
typedef enum Type
{
    Opaque = 0,
    Transparent
} type;
typedef enum Color
{
    red = 0,
    green,
    blue
} color;
#define TRUE 1
#define FALSE 0
typedef enum Style
{
    line,
    dashed,
    doted,
    None
} style;
struct Window
{
    char WindowName[16];
    unsigned int type : 1;
    unsigned int color : 1;
    unsigned int border_shown : 1;
    unsigned int border_color : 1;
    unsigned int border_style : 1;
};
void ShowWindow(const struct Window*);
#endif