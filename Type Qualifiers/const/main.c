#include <stdio.h>
typedef const int zip;
typedef const double rar;
typedef const char tar;
typedef const char *string;

#define PRINT_STR(str) \
    printf("%s\n", str);
// #define PRINT_INT(str) \
//     printf("%d\n", str);

// #define PRINT_DOUBLE(str) \
//     printf("%lf\n", str);

int main(void)
{

    // const with pointers
    int age = {17};
    const int *Age = {&age}; // You can't change age=17 to age=45;
    //*Age=45;

    int const *NewAge = Age; // here also You can't change age=17 to age=45;
    //*NewAge=45;

    int *const OldAge = NewAge; // you can't change the address where ptr is pointing

    int oAge = {21};
    // OldAge={&oAge};//you can't change the address where ptr is pointing

    const int *const AAge={&oAge};

    printf("AAge : %d, ", *AAge);
    // PRINT_INT(&Age);
    // const char const *str = {"this is simple string in c"};     // data can't be changed but address can
    // char const *s_str = {"this is another simple string in c"}; // data can be changed but address can't

    // PRINT_STR(str);
    // PRINT_STR(s_str);

    // str = s_str;
    // s_str = str;
    // PRINT_STR(s_str);
    // PRINT_STR(str);

    rar PI = {3.141592654};
    // keep the data in read only memory
    // btw all data goes to read only memory ;)

    string Days[] = {[0] = "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    printf("Total day's in a week : %zd\n", sizeof(Days) / sizeof(Days[0]));

    printf("And the days are :\n");
    for (size_t i = 0; i < sizeof(Days) / sizeof(Days[0]); ++i)
    {
        printf("\n%zd : %s\n", i, Days[i]);
    };
    printf("Shutting down ...\n");

    return 0;
}