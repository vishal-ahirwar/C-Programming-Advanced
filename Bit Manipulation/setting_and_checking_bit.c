// Copyright(c) 2022 Vishal Ahirwar.

#include <stdio.h>
int main(void)
{
    unsigned short int INFO = 0; // 0000 0000 0000 0000

    unsigned short int mask = 1;
    unsigned int input = 1;
    while (input != 0)
    {
        printf("\r\n\n----------------------\nMENU:\n1.set bit\n2.unset bit\n3.check bit set or not\n0.Quit\nCopyright(c)2022 vishal Ahirwar.All rights reservd.\n----------------------\n\n");
        scanf("%ud", &input);

        switch (input)
        {
        case 1:
        {
            printf("\rwhich bit you wanna set (0-15): ");
            unsigned int bitPos = 0;
            scanf("%ud", &bitPos);
            if (INFO & (mask << bitPos))
            {
                printf("\ralready set\n");
            }
            else
            {
                INFO = INFO | (mask << bitPos);
                if (INFO & (mask << bitPos))
                {
                    printf("\rbit %u successfuly set\n", bitPos);
                }
                else
                {
                    printf(" \rfailed to set bit %u\n", bitPos);
                }
            };
            break;
        };
        case 2:
        {
            printf("\rwhich bit you wanna unset (0-15): ");
            unsigned int bitPos = 0;
            scanf("%ud", &bitPos);

            if (INFO & (mask << bitPos))
            {
                INFO = INFO ^ (mask << bitPos);
                if (INFO | (mask << bitPos))
                {
                    printf("\rbit %u successfuly unset\n", bitPos);
                }
                else
                {
                    printf("\rsfailed to unset bit %u\n", bitPos);
                }
            }
            else
            {
                printf("\ralready unset\n");
            }
            break;
        };
        case 3:
        {
            printf("\rwhich bit you wanna check (0-15): ");
            unsigned int bitPos = 0;
            scanf("%ud", &bitPos);
            if (INFO & (mask << bitPos))
            {
                printf("\ryes bit %u set\n", bitPos);
            }
            else
            {
                printf("\rno bit %u unset\n", bitPos);
            };
            break;
        };
        default:
        {
            printf("\r[ERROR]invalid input\r");
        };
        };
    };

#if defined DEBUG
    printf("sizeof short int %zd\n", sizeof(INFO));
#endif

    return 0;
}