#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element *next;
};

int main()
{
    // stwórz listê bez g³owy o elementach 5,7,-4
    struct element * lista = malloc(sizeof(struct element));
    lista->i = 5;
    lista->next = malloc(sizeof(struct element));
    lista->next->i = 7;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->i = -4;
    lista->next->next->next = NULL;
    //wyswietl listê
    struct element * wsk = lista;
    while(wsk != NULL)
    {
        printf("%d\n", wsk->i);
        wsk = wsk->next;
    }
    return 0;
}
