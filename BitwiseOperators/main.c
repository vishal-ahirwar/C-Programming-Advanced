#include <stdio.h>
extern int Binary2Decimals(long long int);
extern long long int Decimals2Binary(int dec);

int main(void)
{
    short int number = 0, number2 = number;
    printf("Enter number 1: ");
    scanf("%hd", &number);
    printf("Enter number 2: ");
    scanf("%hd", &number2);
    printf("%hd :bin %lld\n%d :bin %lld \n", number, Decimals2Binary(number), number2, Decimals2Binary(number2));

    short int AND = number & number2;
    short int OR = number | number2;
    short int NOT_ONESCOMPLEMENT = ~number;
    short int XOR = number ^ number2;

    printf(
        "%lld & %lld =%lld\n%lld | %lld = %lld\n~%lld=%lld\n%lld^%lld=%lld\n",
        Decimals2Binary(number),
        Decimals2Binary(number2),
        Decimals2Binary(AND),
        Decimals2Binary(number),
        Decimals2Binary(number2),
        Decimals2Binary(OR),
        Decimals2Binary(number),
        Decimals2Binary(number2),
        Decimals2Binary(NOT_ONESCOMPLEMENT),
        Decimals2Binary(number),
        Decimals2Binary(number2),
        Decimals2Binary(XOR));

    return 0;
};
