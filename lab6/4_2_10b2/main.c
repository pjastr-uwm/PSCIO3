#include <stdio.h>
#include <stdlib.h>

int foo(int n, int *tab)
{
    int temp = *tab;
    for(int i=1;i<n;i++)
    {
        if (temp > *(tab+i))
        {
            temp = *(tab+i);
        }
    }
    return temp;
}

int main()
{
    int *tab = malloc(4*sizeof(int));
    *tab = 3;
    *(tab+1) = -4;
    *(tab+2) =2;
    *(tab+3) = -23;
    printf("%d\n", foo(4, tab));
    return 0;
}
