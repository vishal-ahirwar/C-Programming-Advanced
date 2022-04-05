#include <stdio.h>
// bit fields
#define SET 1
#define UNSET 0
struct color
{
    unsigned int r : 1;
    unsigned int g : 1;
    unsigned int b : 1;
    unsigned int a : 1;
};
struct Dir
{
    unsigned int left:1;
    unsigned int right:1;
};

int main(void)
{
    struct color Color = { UNSET};
    printf("\nsizeof Color : %zd\n",sizeof(Color));
        printf("\nsizeof Dir : %zd\n",sizeof(struct Dir));
    Color.a = SET;
    if (Color.r)
    {
        puts("\ncolor is red\n");
    }
    else if (Color.g)
    {
        puts("\ncolor is green\n");
    }
    else if (Color.b)
    {
        puts("\ncolor is blue\n");
    }
    else if (Color.a)
    {
        puts("\ntransparent!\n");
    }
    else
    {
        puts("\nno color set\n");
    };

    return 0;
}