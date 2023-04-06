#include <stdio.h>
#include <stdlib.h>

double * foo(int n, double * tab)
{
    double * new_tab = (double*)malloc(n*sizeof(double));
    if (new_tab == NULL)
        return NULL;
    for(int i=0;i<n;i++)
    {
        *(new_tab +i) = *(tab+i);
    }
    return new_tab;
}

void wyswietl(int n, double * tab)
{
    for(int i=0;i<n;i++)
    {
        printf("%lf\n", *(tab+i));
    }
    printf("---\n");
}

int main()
{
    double tab[] = {3.2, -4.1, 8.7};
    wyswietl(3, tab);
    double * tab2 = foo(3, tab);
    if (tab2 == NULL)
        return 1;
    wyswietl(3, tab2);
    tab[1] = 11.3;
    wyswietl(3, tab);
    wyswietl(3, tab2);
    return 0;
}
