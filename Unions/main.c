#include <stdio.h>
#include <stdlib.h>
union data
{
    int id;
    float temp;
    char *place;
};

int main(void)
{
    union data country = {.place="INDIA"};
    printf("%s\nsizeof union data  :%zu\n",country.place,sizeof(union data));
    // union data CountryTemp, *CountryName = NULL, CountryCode;
    // CountryTemp.temp = 24.5f;
    // CountryCode.id = 91;
    // if (CountryName == NULL)
    //     CountryName = (union data *)malloc(sizeof(union data));
    // if (CountryName != NULL)
    //     CountryName->place = "INDIA";
    // printf("Temp :%f\nCode : %d\nName : %s\n", CountryTemp.temp, CountryCode.id, CountryName->place);

    return 0;
}