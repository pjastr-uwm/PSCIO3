#include <stdio.h>
#include <stdlib.h>

int foo(int*a,int*b)
{
    return *a-*b;
}

int main()
{
    int tab[] = {-3,1,-2,0,2,-3,0,-2,3,9,1,0,2};
    int *wsk=tab-1;
    int b = *(wsk+=4); //b=0
    int c = b+4; // b=0  , c=4
    int d = foo(&b,&c); // b=0  , c=4  , d=-4
    int e = (wsk+=-1)[3]; // b=0  , c=4  , d= -4 , e=-3
    e = (d -= 2) - (c += 2); // b=0  , c=6  , d=-6  , e=-12
    c = d + (b+=4); // b=4  , c=-2  , d=-6  , e=-12
    b = *wsk + e; // b=-14  , c=-2  , d=-6  , e=-12
    b= (--c)-(d++);  // b=3  , c=-3  , d=-5  , e=-12
    return 0;
}
