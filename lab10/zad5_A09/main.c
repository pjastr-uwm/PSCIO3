#include <stdio.h>
#include <stdlib.h>

void foo(int n, int tab1[], int tab2[], int tab3[])
{
    for(int i=0;i<n;i++)
    {
        tab3[i] = tab1[i] * tab2[i];
    }
}

int main()
{
    int tab1[2] = {2,3};
    int tab2[2] = {11,-23};
    int tab3[2] = {2,3};
    foo(2,tab1, tab2, tab3);
    for(int i=0;i<2;i++)
    {
        printf("%d\n", tab3[i]);
    }
    return 0;
}
