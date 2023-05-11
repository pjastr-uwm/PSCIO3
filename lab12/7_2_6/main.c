#include <stdio.h>
#include <stdlib.h>

struct punktn
{
    int n;
    float*wspolrzedne;
};

void przepisz(struct punktn tab1[], struct punktn tab2[], int n)
{
    for(int i=0;i<n;i++)
    {
        tab2[i] =  tab1[i];
    }
}

void wyswielt(struct punktn tab[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("[%d]:", i);
        for(int j=0;j<tab[i].n;j++)
        {
            printf("%f ", tab[i].wspolrzedne[j]);
        }
        printf("\n");
    }
    printf("--\n");
}

int main()
{
    struct punktn p1;
    p1.n = 3;
    p1.wspolrzedne = malloc(p1.n * sizeof(float));
    p1.wspolrzedne[0] = 4.5;
    p1.wspolrzedne[1] = 2.3;
    p1.wspolrzedne[2] = 1.8;
    struct punktn p2;
    p2.n = 2;
    p2.wspolrzedne = malloc(p1.n * sizeof(float));
    p2.wspolrzedne[0] = -2.2;
    p2.wspolrzedne[1] = 8.9;
    struct punktn p3;
    p3.n = 4;
    p3.wspolrzedne = (float[]) {8,9,2,4};
    struct punktn tab[] ={p1,p2,p3};
    struct punktn tab2[] =
    {
        {3, (float[]) {9,2,4}},
        {5, (float[]) {1,2,3,4,5}},
        {1, (float[]) {-22}}
    };
    wyswielt(tab,3);
    wyswielt(tab2,3);
    przepisz(tab,tab2,3);
    wyswielt(tab,3);
    wyswielt(tab2,3);
    return 0;
}
