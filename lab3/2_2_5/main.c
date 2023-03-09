#include <stdio.h>
#include <stdlib.h>

float foo(int n)
{
    float temp=1;
    if (n>0)
    {
        for(int i=1;i<=n;i++)
        {
            temp *= 2;
        }
    }
    else if (n<0)
    {
        for(int i=-1;i>=n;i--)
        {
            temp /= 2;
        }
    }
    return temp;
}

int main()
{
    printf("%f\n", foo(0));
    printf("%f\n", foo(1));
    printf("%f\n", foo(2));
    printf("%f\n", foo(3));
    printf("%f\n", foo(-1));
    printf("%f\n", foo(-2));
    printf("%f\n", foo(-3));
    return 0;
}
