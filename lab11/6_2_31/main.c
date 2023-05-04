#include <stdio.h>
#include <stdlib.h>

int ** foo(int n, int tab1[][n], int tab2[][n])
{
    int ** temp = malloc(n* sizeof(int*));
    for(int i=0;i<n;i++)
    {
        temp[i] = malloc(n* sizeof(int));
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            temp[i][j] = tab1[i][j] +tab2[i][j];
        }
    }
    return temp;
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
void wyswietl2(int n, int m, int ** tab)
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
    int tab1[2][2] = {{3,4},{-3,6}};
    int tab2[2][2] = {{-3,7},{11,8}};
    wyswietl(2,2, tab1);
    wyswietl(2,2, tab2);
    int ** wynik = foo(2, tab1, tab2);
    wyswietl2(2,2,wynik);
    return 0;
}
