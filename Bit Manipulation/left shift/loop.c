#include <stdio.h>
unsigned long long int Dec2Bin(unsigned long int dec)
{
    unsigned long long int bin = {0};
    unsigned int Pos = {1};

    while (dec != 0)
    {
        if (dec % 2)
        {
            bin += (Pos);
            Pos *= 10;
        }
        else
        {
            Pos *= 10;
        };
        dec /= 2;
    };

    return bin;
};

int main(void)
{
    unsigned  long long int w1 = 0;//0000
    unsigned long long int mask = w1 << (sizeof(w1) * 8)-1;//1000
    printf("sizeof long long int : %zd\nand the mask is : %lld\n",sizeof(unsigned long long int),mask);

    while (w1 ^ mask)
    {
        static int counter = 1;
        
        printf("loop round : %d\nvalue of w1 : %lld\n", counter,w1);
        ++counter;
        w1 <<= 1; // or w1= w1<<1;

    };
    printf("\n[System Message] : Program Successfulyy Executed!\n");

    return 0;
}