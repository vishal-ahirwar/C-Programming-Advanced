typedef unsigned char byte;
#include <stdio.h>

extern unsigned long long int Dec2Bin(unsigned long int);
extern long int Bin2Dec(unsigned long long int);

int main(void)
{
    byte PORT = 20;
    long long int bin = {Dec2Bin(PORT)};
    int dec = {Bin2Dec(bin)};

    printf("binary of %d : %lld\n", PORT, bin);
    printf("%lld decimal : %d\n", bin, dec);

    return 0;
}