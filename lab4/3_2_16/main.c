#include <stdio.h>
#include <stdlib.h>

void foo(const int * a, int* const b)
{
    *b=*a;
}

int main()
{
    int a=5l, b =12;
    printf("a=%d, b=%d\n",a,b);
    foo(&a,&b);
    printf("a=%d, b=%d\n",a,b);
    return 0;
}
