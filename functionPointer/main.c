#include <stdio.h>
void sayGreeting(const char *str)
{
    printf("%s\n", str);
};

int main(void)
{
    void (*fun_ptr)(const char *);
    fun_ptr = sayGreeting;
    fun_ptr("Hello, World function pointer\n");
    void *v_ptr;
    printf("sizeof void pointer :%ld", sizeof(v_ptr));
    int x = 120;
    v_ptr = &x;
    printf("value of v_ptr : %d", *((int *)(v_ptr)));
    return 0;
}
