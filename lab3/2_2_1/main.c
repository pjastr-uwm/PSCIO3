#include <stdio.h>
#include <stdlib.h>

int foo(int n)
{
    if (n>=0)
        return n;
    return -n;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d", foo(n));
    return 0;
}
