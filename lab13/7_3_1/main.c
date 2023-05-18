#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element *next;
};

struct element * utworz()
{
    return NULL;
}

int main()
{
    printf("%p\n", utworz());
    return 0;
}
