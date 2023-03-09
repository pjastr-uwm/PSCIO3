#include <stdio.h>
#include <stdlib.h>

int foo(int n)
{
    int temp=1;
    for(int i=1;i<=n;i++)
    {
        temp *= 2;
    }
    return temp;
}

int main()
{
    printf("%d\n", foo(0));
    printf("%d\n", foo(1));
    printf("%d\n", foo(2));
    printf("%d\n", foo(3));
    return 0;
}
