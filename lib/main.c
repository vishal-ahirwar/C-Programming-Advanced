#include"lib.h"
#include<stdio.h>

void ERROR(const char*msgs)
{
    printf("\n**[ERROR]** : %s\n",msgs);
};

void WARNING(const char*msgs)
{
    printf("\n**[WARNING]** : %s\n",msgs);
};

void MESSAGE(const char*msgs)
{
    printf("\n**[DISPLAY MESSAGE]** : %s\n",msgs);
};
