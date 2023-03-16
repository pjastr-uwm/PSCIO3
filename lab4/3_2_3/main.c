#include <stdio.h>
#include <stdlib.h>

void zamiana(int *x, int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

int main()
{
    int x=4, y=11;
    printf("x=%d, y=%d\n",x,y);
    zamiana(&x,&y);
    printf("x=%d, y=%d\n",x,y);
    return 0;
}
