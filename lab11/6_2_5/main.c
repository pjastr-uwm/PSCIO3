#include <stdio.h>
#include <stdlib.h>

int *** alokuj(int n, int m, int k)
{
    int *** tab = malloc(n*sizeof(int **));
    for(int i=0;i<n;i++)
    {
        tab[i] = malloc(m*sizeof(int*));
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            tab[i][j] = malloc(k*sizeof(int));
        }
    }
    return tab;
}

void zwolnij(int *** tab, int n, int m, int k)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            free(tab[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        free(tab[i]);
    }
    free(tab);
}

int main()
{
    int *** tab = alokuj(2,3,4);
    zwolnij(tab,2,3,4);
    return 0;
}
