#include<stdio.h>
struct test
{
    int x;
    char g;
    float t;
  
};

int main()
{
    struct test*t;
    printf("Error : x=%d, g=%c, t=%f\n",t->x,t->g,t->t);
    
    return 0;

}