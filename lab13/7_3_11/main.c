#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element *next;
};

void wyczysc(struct element * lista)
{
    struct element * wsk = lista->next;
    struct element * wsk2=wsk;
    while(wsk != NULL)
    {
        wsk = wsk->next;
        free(wsk2);
        wsk2 = wsk;
    }
    lista->next = NULL;
}

void wyswietlListeZGlowa(struct element * lista)
{
    if (lista->next == NULL)
    {
        printf("Lista jest pusta\n---\n");
        return;
    }
    struct element * wsk = lista->next;
    while(wsk != NULL)
    {
        printf("%d\n", wsk->i);
        wsk = wsk->next;
    }
    printf("---\n");
}

int main()
{
    struct element * lista = malloc(sizeof(struct element));
    lista->next = malloc(sizeof(struct element));
    lista->next->i = 5;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->i = 7;
    lista->next->next->next = malloc(sizeof(struct element));
    lista->next->next->next->i = -4;
    lista->next->next->next->next = NULL;
    wyswietlListeZGlowa(lista);
    wyczysc(lista);
    wyswietlListeZGlowa(lista);
    return 0;
}
