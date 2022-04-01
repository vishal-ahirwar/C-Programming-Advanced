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
    short int w1 = 10; // 16 bit --> 0000 0000 0000 1010
    printf("sizeof short int : %zd byte\n", sizeof w1);
    printf("value of w1 : %d\nbin of w1 : %lld\n", w1, Dec2Bin(w1));
    puts("left shifting by 1...\n");
    w1 = w1 << 1;
    printf("value of w1 : %d\nbin of w1 : %lld\n", w1, Dec2Bin(w1));

    puts("left shifting by 2 ...\n");
    w1 = w1 << 1;
    printf("value of w1 : %d\nbin of w1 : %lld\n", w1, Dec2Bin(w1));

    puts("right shifting by 1...\n");
    w1 = w1 >> 1;
    printf("value of w1 : %d\nbin of w1 : %lld\n", w1, Dec2Bin(w1));

    puts("right shifting by 2 ...\n");
    w1 = w1 >> 1;
    printf("value of w1 : %d\nbin of w1 : %lld\n", w1, Dec2Bin(w1));
    return 0;
}