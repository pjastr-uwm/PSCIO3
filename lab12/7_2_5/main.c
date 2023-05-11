#include <stdio.h>
#include <stdlib.h>

struct punkt10
{
    float wspolrzedne[10];
};

void przepisz(struct punkt10 tab1[], struct punkt10 tab2[], int n)
{
    for(int i=0;i<n;i++)
    {
        tab2[i] = tab1[i];
    }
}

void wyswielt(struct punkt10 tab[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("[%d]:", i);
        for(int j=0;j<10;j++)
        {
            printf("%f ", tab[i].wspolrzedne[j]);
        }
        printf("\n");
    }
    printf("--\n");
}

int main()
{
    struct punkt10 tab1[] =
    {
        {.wspolrzedne={2,2,3,3,3,4,23,-4,7,2}},
        {.wspolrzedne={5}},
        {.wspolrzedne={4}},
        {.wspolrzedne={3}}
    };
    struct punkt10 tab2[] =
    {
        {{2,2,3}}, {{1,2,3}}, {{8,9,2}}, {{3,9,2}}
    };
    wyswielt(tab1, 4);
    wyswielt(tab2, 4);
    przepisz(tab1,tab2, 4);
    wyswielt(tab1, 4);
    wyswielt(tab2, 4);
    return 0;
}
