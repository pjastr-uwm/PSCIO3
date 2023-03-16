#include <stdio.h>
#include <stdlib.h>

int* foo9()
{
    return malloc(sizeof(int));
}

int* foo11(int n)
{
    return malloc(n*sizeof(int));
}

int main()
{
    int * w= foo9();
    printf("%p\n", w);
    int * w2= foo11(4);
    printf("%p\n", w2);
    return 0;
}
