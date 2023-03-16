#include <stdio.h>
#include <stdlib.h>

int* foo (int *a, int* b)
{
    if (*a > *b)
        return b;
    return a;
}

int main()
{
    int a=4, b=-30;
    printf("adres a %p\n", &a);
    printf("adres b %p\n", &b);
    printf("%p\n", foo(&a, &b));
    return 0;
}
