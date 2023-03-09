#include <stdio.h>
#include <stdlib.h>

int potega(int podstawa, int wykladnik)
{
    int temp=1;
    for(int i=1;i<=wykladnik;i++)
    {
        temp *= podstawa;
    }
    return temp;
}

int czescCalkPierw(int liczba, int stopien)
{
    int i=0;
    while(potega(i, stopien) <=liczba)
    {
        i++;
    }
    return i-1;
}

int sumaCzesci(int n, int m)
{
    int temp=0;
    for(int i=0;i<=n;i++)
    {
        temp += czescCalkPierw(i, m);
    }
    return temp;
}

int main()
{
    printf("%d\n", potega(3,4));
    printf("%d\n", czescCalkPierw(20,3));
    printf("%d\n", sumaCzesci(10,3));
    return 0;
}
