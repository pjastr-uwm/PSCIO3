#include <stdio.h>
#include <stdlib.h>

int dlugosc(char * napis)
{
    int i;
    for(i=0; napis[i] != 0; i++)
    {

    }
    return i;
}

int dlugosc2(char * napis)
{
    int i=0;
    while(napis[i] != 0)
    {
        i++;
    }
    return i;
}

int dlugosc3(char * napis)
{
    int i=0;
    while(napis[i])
    {
        i++;
    }
    return i;
}

int dlugosc4(char * napis)
{
    int i=0;
    while(*(napis+i))
    {
        i++;
    }
    return i;
}

int dlugosc5(char * napis)
{
    if (napis[0] == 0)
        return 0;
    return 1+dlugosc5(++napis);
}

int dlugosc6(char * napis)
{
    if (!napis[0])
        return 0;
    return 1+dlugosc6(++napis);
}

int dlugosc7(char * napis)
{
    if (!*napis)
        return 0;
    return 1+dlugosc7(++napis);
}

int main()
{
    char n1[20] = "ABC";
    printf("%d\n", dlugosc(n1));
    printf("%d\n", dlugosc2(n1));
    printf("%d\n", dlugosc3(n1));
    printf("%d\n", dlugosc4(n1));
    printf("%d\n", dlugosc5(n1));
    printf("%d\n", dlugosc6(n1));
    printf("%d\n", dlugosc7(n1));
    return 0;
}
