#include <stdio.h>
#include <stdlib.h>

int foo(int n)
{
    if (n==0)
        return 4;
    if (n==1)
        return 3;
    return foo(n-1)+foo(n-2);
}

int main()
{
    printf("%d\n", foo(4));
    printf("%d\n", foo(5));
    return 0;
}
