#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int silnia(int n)
{
    if (n==0 || n==1)
        return 1;
    return n*silnia(n-1);
}

double foo(int n, double x)
{
    double temp =0;
    for(int i=0;i<=n;i++)
    {
        temp += pow(x, i) / silnia(i);
    }
    return temp;
}

int main()
{
    int n=3;
    double x= 2.0;
    printf("%lf\n", foo(n, x));
    return 0;
}
