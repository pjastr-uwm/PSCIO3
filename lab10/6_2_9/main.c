#include <stdio.h>
#include <stdlib.h>

void foo(int ** tab, int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            tab[i][j]=0;
        }
    }
}

void wyswietl(int n, int m, int** tab)
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

int ** alokuj(int n, int m)
{
    int ** tab= malloc(n* sizeof(int*));
    for(int i=0;i<n;i++)
    {
        tab[i] = malloc(m*sizeof(int));
    }
    return tab;
}

void zwolnij(int ** tab, int n, int m)
{
    for(int i=0;i<n;i++)
    {
        free(tab[i]);
    }
    free(tab);

}


int main()
{
    int ** tablica = alokuj(4,5);
    foo(tablica, 4,5);
    wyswietl(4,5, tablica);
    zwolnij(tablica,4,5);
    return 0;
}
