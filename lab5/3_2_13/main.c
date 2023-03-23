#include <stdio.h>
#include <stdlib.h>

double foo(double (*wsk)(int), int x)
{
    return wsk(x);
}

double pom(int arg)
{
    return (double)(arg +3);
}

int main()
{
    printf("%lf\n", foo(pom, 4));
    return 0;
}
