// binary2Decimals
#include <stdio.h>

// power function in use of Binary2Decinals
int Power(const int x, const int y)
{
    if (y == 0)
    {
        return 1;
    }
    else
    {

        int total = 2;
        for (int i = 0; i < y; ++i)
        {
            total *= 2;
        };
        return total;
    };
};

// Converts aa decimal number into binary number
long long int Decimals2Binary(int dec)
{
    long long int Binary = 0;
    int i = 1;
    while (dec != 0)
    {
        Binary += ((dec % 2) * i);
        i *= 10;
        dec /= 2;
    };
    return Binary;
};

// Converts aa Binary number into decimals number
int Binary2Decimals(long long int bin)
{
    // if input=10101
    // extract last digit by %
    short int pos = 0;
    int dec = 0;
    while (bin != 0)
    {
        short int digit = bin % 10;
        bin /= 10;
        printf("Digit=%d\nbin=%lld\n", digit, bin);
        if (digit == 0)
        {
            ++pos;
        }
        else
        {
            int power = Power(2, pos);
            dec += (1 * power);
        };
    };
    return dec;
};

// int main(void)
// {
//     printf("\n1001 : %d\n", Binary2Decimals(1001));
//     printf("\n9 : binary = %lld\n", Decimals2Binary(9));
//     return 0;
// };
