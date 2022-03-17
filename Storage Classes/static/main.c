/**
^ the static storage class can be used on local and global variables, as well as functions
^when applied to local variables it instructs the compiler to keep the variabel in existence during the life-time of the program
^when applied to global variables, the static modifier causes that variables scope to be restricted to the file in which it is declared and  same applies for functions
**/
#include<stdio.h>
int increement(void)
{
    static int val=0;
    return ++val;
};

static void sayHello(void)
{
    printf("hello, there!\n");
};
static void prnt(const int val)
{
    printf("%d\n",val);
};
extern callFunction();
int main(void)
{
    callFunction();
    prnt(increement());
    prnt(increement());
    sayHello();
    return 0;
}
