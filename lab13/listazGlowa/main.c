#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element *next;
};

int main()
{
    // stwórz listê z g³ow¹ o elementach 5,7,-4
    struct element * lista = malloc(sizeof(struct element));
    lista->next = malloc(sizeof(struct element));
    lista->next->i = 5;
    lista->next->next = malloc(sizeof(struct element));
    lista->next->next->i = 7;
    lista->next->next->next = malloc(sizeof(struct element));
    lista->next->next->next->i = -4;
    lista->next->next->next->next = NULL;
    //wyswietl listê
    struct element * wsk = lista->next;
    while(wsk != NULL)
    {
        printf("%d\n", wsk->i);
        wsk = wsk->next;
    }
    return 0;
}
