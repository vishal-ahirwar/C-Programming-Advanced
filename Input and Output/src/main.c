#include <stdio.h>

const char *fileName = "../res/test.txt";
//#endif
#define GETCHAR
int compare_str(const char *str, const char *str1)
{
    for (int i = 0; str1[i] != '\0'; ++i)
    {
        if (str[i] != str1[i])
        {
            return 0;
        };
    };
    return 1;
};

int main(int argc, char **argv)
{

#ifdef USE_FILE
    FILE *file;
    file = fopen(fileName, "r");
    if (file)
    {
        int c = getc(file);
        while (c != EOF)
        {
            printf("%c", c);
            c = getc(file);
        };
    };
#endif

#ifdef GETC
    int c = getc(stdin);
    while (c != '\n')
    {
        printf("%c", c);
        c = getc(stdin);
    };
#elif defined GETCHAR
    if (compare_str(argv[argc - 1], "read"))
    {

        FILE *file = fopen(fileName, "r");
        int c = getc(file);

        while (c != EOF)
        {
            printf("%c", c);
            c = getc(file);
        };

        fclose(file);
    }
    else if (compare_str(argv[argc - 1], "write"))
    {
        puts("Start writting ....");
        FILE *file = fopen(fileName, "a");
        char c = getc(stdin);
        while (c != '0')
        {
            fputc(c, file);
            c = getc(stdin);
        };

        fclose(file);
    }
    else
    {
        printf("\nNo Task to Execute\n");
    };

#endif
    printf("\nshutting down program ...\n");

    return 0;
}