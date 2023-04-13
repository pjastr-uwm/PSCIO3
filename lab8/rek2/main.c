#include <stdio.h>
#include <stdlib.h>

int foo(int n)
{
    if (n==0 || n==1)
        return 1;
    if (n%2 ==0)
        return foo(n-1)+1;
    return foo(n-1)-1;
}

int main()
{
    printf("%d\n", foo(2));
    printf("%d\n", foo(3));
    printf("%d\n", foo(4));
    printf("%d\n", foo(5));
    return 0;
}
