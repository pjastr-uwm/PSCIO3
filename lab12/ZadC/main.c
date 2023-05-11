#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Ksiazka
{
    char tytul[50];
    int liczba_stron;
};

struct Ksiazka initKsiazka(char t[50], int liczba)
{
    struct Ksiazka temp;
    temp.liczba_stron = liczba;
    //strcpy(temp.tytul, t);
    int i;
    for(i=0; t[i] !=0; i++)
    {
        temp.tytul[i] = t[i];
    }
    temp.tytul[i] = 0;
    return temp;
};

void pokazKsiazka(struct Ksiazka arg)
{
    printf("Tytul: %s, liczba stron: %d.\n", arg.tytul, arg.liczba_stron);
}

void dodajStrony(struct Ksiazka * wsk)
{
    wsk->liczba_stron +=10;
}



int main()
{
    struct Ksiazka nowa = initKsiazka("Pan Tadeusz", 200);
    pokazKsiazka(nowa);
    dodajStrony(&nowa);
    pokazKsiazka(nowa);
    return 0;
}
