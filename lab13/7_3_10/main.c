#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element *next;
};

struct element * utworz()
{
    struct element * wsk = malloc(sizeof(struct element));
    wsk->next = NULL;
    return wsk;
}

int main()
{
    printf("%p\n", utworz());
    return 0;
}
