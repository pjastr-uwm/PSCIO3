#include <stdio.h>
#include <stdlib.h>

double * foo(int n)
{
    return (double*)malloc(n* sizeof(double));
}

int main()
{
    double * wsk = foo(4);
    printf("%p\n", wsk );

    free(wsk);
    return 0;
}
