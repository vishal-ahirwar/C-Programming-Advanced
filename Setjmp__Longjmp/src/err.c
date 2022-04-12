#include"err.h"
#include<stdlib.h>
void __throw__(ErrHandler buf,int n)
{
    longjmp(buf,n);
};

int initErrorHandler(ErrHandler buf)
{
    return setjmp(buf);


};
