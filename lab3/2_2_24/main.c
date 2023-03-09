#include <stdio.h>
#include <stdlib.h>

int foo(int n)
{
    if (n==0 || n==1)
        return 1;
    return 2*foo(n-1);
}

int main()
{
    printf("%d\n", foo(0));
    printf("%d\n", foo(1));
    printf("%d\n", foo(2));
    printf("%d\n", foo(3));
    return 0;
}
