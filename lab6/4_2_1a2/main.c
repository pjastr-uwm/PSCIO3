#include <stdio.h>
#include <stdlib.h>

void foo(int n, int *tab)
{
    for(int i=0;i<n;i++)
    {
        *(tab+i) = 0;
    }
}

void wyswietlTablice(int n, int *tab)
{
    for(int i=0;i<n;i++)
    {
        printf("[%d]=%d\n", i, *(tab+i) );
    }
    printf("---\n");
}

int main()
{
    int *tab2 =malloc(5*sizeof(int));
    *tab2 = 2;
    *(tab2+1) = -3;
    *(tab2+2) = 4;
    *(tab2+3) = 0;
    *(tab2+4) = -9;
    wyswietlTablice(5, tab2);
    foo(5, tab2);
    wyswietlTablice(5, tab2);
    return 0;
}
