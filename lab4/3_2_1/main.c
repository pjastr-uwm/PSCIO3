#include <stdio.h>
#include <stdlib.h>

int foo (int *a, int* b)
{
    if (*a > *b)
        return *b;
    return *a;
}

int main()
{
    int a=4, b=9;
    printf("%d\n", foo(&a, &b));
    return 0;
}
