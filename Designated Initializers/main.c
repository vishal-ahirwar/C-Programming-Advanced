#include <stdio.h>

struct Point
{
    int X, Y;
};

static void print(struct Point *ptr)
{
    printf("X=%d, Y=%d\n", (*ptr).X, (*ptr).Y);
};

#define STRUCT

int main(void)
{
#ifdef ARRAY
    // example -1
    unsigned int Array[100] = {[0 ... 50] = 120, [51 ... 60] = 121, [61 ... 99] = 122};
    for (size_t i = 0; i < sizeof(Array) / sizeof(unsigned int); ++i)
    {
        printf("%zd  :%d\n", i, Array[i]);
    }
    // or
    unsigned int Array2[] = {45, 34, 2, 2};
#elif defined STRUCT
    typedef struct Point Point;
    Point OBJ1 = {.X = 12, .Y = 13};
    print(&OBJ1);

    Point OBJ2 = {X : 120, Y : 3450};
    print(&OBJ2);

    Point OBJ3 = {450, 12};
    print(&OBJ3);

    Point PointArray[] = {[0 ... 9].X = 120, [0 ... 9].Y = 123, [10 ... 1200].X = 567, [10 ... 1200].Y = 456};
    for (size_t i = 0; i < sizeof(PointArray) / sizeof(PointArray[0]); ++i)
    {
        print(&PointArray[i]);
    };

#else
    printf("[ERROR]please enable  atleast one option : !\n");
#endif

    return 0;
}