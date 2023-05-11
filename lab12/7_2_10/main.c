#include <stdio.h>
#include <stdlib.h>

union super_int
{
    unsigned int b;
    int a;
};

int main()
{
    union super_int zmienna ={-4};
    printf("%d\n", zmienna.a);
    printf("%u\n", zmienna.a);
    printf("%d\n", zmienna.b);
    printf("%u\n", zmienna.b);
    return 0;
}
