#include <stdio.h>
#include <stdlib.h>

void foo(int ** tab, int n, int m)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        temp=tab[i][m-1];
        for(int j=m-1;j>0;j--)
        {
            tab[i][j] = tab[i][j-1];
        }
        tab[i][0] = temp;
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

int main()
{
    int ** tab = malloc(3*sizeof(int *));
    tab[0] = malloc(4*sizeof(int));
    tab[1] = malloc(4*sizeof(int));
    tab[2] = malloc(4*sizeof(int));
    tab[0][0] = 9;
    tab[0][1] = 4;
    tab[0][2] = 33;
    tab[0][3] = 12;
    tab[1][0] = -6;
    tab[1][1] = 22;
    tab[1][2] = 44;
    tab[1][3] = -23;
    tab[2][0] = -1;
    tab[2][1] = 0;
    tab[2][2] = -3;
    tab[2][3] = 62;
    wyswietl(3,4, tab);
    foo(tab, 3,4);
    wyswietl(3,4, tab);
    return 0;
}
