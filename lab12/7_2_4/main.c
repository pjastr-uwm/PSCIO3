#include <stdio.h>
#include <stdlib.h>

struct punkt
{
    float x,y,z;
};

void przepisz(struct punkt tab1[], struct punkt tab2[], int n)
{
    for(int i=0;i<n;i++)
    {
        tab2[i] =  tab1[i];
    }
}

void wyswielt(struct punkt tab[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("[%d]: %f %f %f\n", i, tab[i].x, tab[i].y, tab[i].z);
    }
    printf("--\n");
}

int main()
{
    struct punkt tab1[] =
    {
        {2,2,3}, {5,-6,2}, {4,5,9}, {3,4,5}
    };
    struct punkt tab2[] =
    {
        {2,2,3}, {1,2,3}, {8,9,2}, {3,9,2}
    };
    wyswielt(tab1, 4);
    wyswielt(tab2, 4);
    przepisz(tab1,tab2, 3);
    wyswielt(tab1, 4);
    wyswielt(tab2, 4);
    return 0;
}
