
typedef long long int ll_i;
typedef char* char_ptr;
#include<stdio.h>
struct Student
{
    char_ptr name;
    ll_i IP_ADDRESS;
};
typedef struct Student Student;

int main(void)
{
    Student ram;
    ram.name="RAM";
    ram.IP_ADDRESS=223233;
    return 0;
}