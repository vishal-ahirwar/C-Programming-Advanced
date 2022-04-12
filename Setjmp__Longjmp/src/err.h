#ifndef ERR
#define ERR
#include<stdio.h>
#include<setjmp.h>
typedef jmp_buf ErrHandler;
void __throw__();
int initErrorHandler(ErrHandler buf);

#endif
