#include <stdio.h>
#include <stdlib.h>

void foo(int n, int tab[])
{
    for(int i=0;i<n/2;i++)
    {
        int temp = tab[i];
        tab[i] = tab[n-1 -i];
        tab[n-1-i] = temp;
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
    int tab[] = {4,-5,6,7,8,0,1,2,33,44,55,-12};
    wyswietlTablice(12, tab);
    foo(12, tab);
    wyswietlTablice(12, tab);
    return 0;
}
