#include <stdio.h>
#include <stdlib.h>

int foo(const int *x,const int*y)
{
    return *x+*y;
}

int main()
{
    int x=2, y=-6;
    printf("%d\n", foo(&x,&y));
    return 0;
}
