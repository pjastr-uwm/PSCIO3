#include <stdio.h>
#include <stdlib.h>

void foo(int n, int tab[])
{
    int temp = tab[0];
    int temp2 = tab[1];
    for(int i=2;i<n-1;i++)
    {
        tab[i-2]=tab[i];
    }
    tab[n-1] = temp2;
    tab[n-2] = temp;
}

void wyswietl(int n, int tab[])
{
    for(int i=0;i<n;i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main()
{
    int tab[] = {2,-3,4,1,0,8,3};
    wyswietl(7, tab);
    foo(7, tab);
    wyswietl(7, tab);
    return 0;
}
