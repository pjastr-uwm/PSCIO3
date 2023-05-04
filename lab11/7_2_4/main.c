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

int main()
{
    struct punkt p1 = {2,3,4};
    struct punkt p2 = {1,2,3};
    struct punkt p3 = {7,8,9};
    struct punkt tab1[] = {p1,p2,p3};
    struct punkt tab2[3];
    przepisz(tab1,tab2, 3);
    return 0;
}
