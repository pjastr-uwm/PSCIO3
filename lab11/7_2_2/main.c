#include <stdio.h>
#include <stdlib.h>

struct trojkat
{
    float a,b,c;
};

void foo(struct trojkat troj1, struct trojkat *troj2)
{
    *troj2 =troj1;
}

int main()
{
    struct trojkat t1 = {3,4,3};
    struct trojkat t2 = {4,8,11};
    printf("%f %f %f\n", t1.a, t1.b, t1.c);
    printf("%f %f %f\n", t2.a, t2.b, t2.c);
    foo(t1,&t2);
    printf("%f %f %f\n", t1.a, t1.b, t1.c);
    printf("%f %f %f\n", t2.a, t2.b, t2.c);
    t2.b = 10;
    printf("%f %f %f\n", t1.a, t1.b, t1.c);
    printf("%f %f %f\n", t2.a, t2.b, t2.c);
    return 0;
}
