#include <stdio.h>
#include <stdlib.h>

int * foo(int n)
{
    return (int*)malloc(n* sizeof(int));
}

int main()
{
    int * wsk = foo(4);
    printf("%p\n", wsk );
    free(wsk);
    return 0;
}
