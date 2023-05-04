#include <stdio.h>
#include <stdlib.h>

struct trojkat
{
    float a,b,c;
};

float obwod(struct trojkat arg)
{
    return arg.a+arg.b+arg.c;
}

int main()
{
    struct trojkat t1 = {3,4,5};
    printf("%f\n", obwod(t1));
    return 0;
}
