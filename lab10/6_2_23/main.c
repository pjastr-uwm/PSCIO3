#include <stdio.h>
#include <stdlib.h>

void foo(int **tab, int n, int m)
{
    int * temp = tab[n-1];
    for(int i=n-1;i>0;i--)
    {
        tab[i]=tab[i-1];
    }
    tab[0] = temp;
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

int main()
{
    int ** tab = malloc(3*sizeof(int *));
    tab[0] = malloc(2*sizeof(int));
    tab[1] = malloc(2*sizeof(int));
    tab[2] = malloc(2*sizeof(int));
    tab[0][0] = 9;
    tab[0][1] = 4;
    tab[1][0] = -6;
    tab[1][1] = 22;
    tab[2][0] = -1;
    tab[2][1] = 0;
    wyswietl(3,2,tab);
    foo(tab, 3,2);
    wyswietl(3,2,tab);
    return 0;
}
