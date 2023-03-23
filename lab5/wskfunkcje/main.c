#include <stdio.h>
#include <stdlib.h>

int pom1(int x)
{
    return x;
}

int pom2(int x)
{
    return 2*x;
}

int main()
{
    int (*wsk1)(int);
    wsk1= pom1;
    int n =10;
    printf("%d\n", wsk1(n));
    wsk1 = pom2;
    printf("%d\n", wsk1(n));
    return 0;
}
