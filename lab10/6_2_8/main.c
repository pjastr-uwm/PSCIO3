#include <stdio.h>
#include <stdlib.h>

void foo(int tab[][100], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<100;j++)
        {
            tab[i][j]=0;
        }
    }
}

void wyswietl(int n, int m, int tab[][m])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("[%d,%d]=%d ", i,j, tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int main()
{
    int tab[4][100];
    foo(tab, 4);
    wyswietl(4,100,tab);
    return 0;
}
