#include <stdio.h>
#include <stdlib.h>

int foo(int n)
{
    if (n==0)
        return 2;
    if (n==1)
        return 5;
    return foo(n-1)+foo(n-2);
}

int main()
{
    printf("%d\n", foo(3));
    return 0;
}
