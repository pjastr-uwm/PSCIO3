#include <stdio.h>
#include <stdlib.h>

void foo(int n, int tab[])
{
    for(int i=0;i<n;i++)
    {
        tab[i] = 0;
    }
}

void wyswietlTablice(int n, int tab[])
{
    for(int i=0;i<n;i++)
    {
        printf("[%d]=%d\n", i, tab[i]);
    }
    printf("---\n");
}

int main()
{
    int tab1[] = {3,4,5};
    int tab2[] = {2,-3,4,0,-9};
    wyswietlTablice(3, tab1);
    wyswietlTablice(5, tab2);
    foo(3, tab1);
    foo(5, tab2);
    wyswietlTablice(3, tab1);
    wyswietlTablice(5, tab2);
    return 0;
}
