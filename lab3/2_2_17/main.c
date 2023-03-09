#include <stdio.h>
#include <stdlib.h>

int liczba=0;

void foo()
{
    liczba++;
    printf("Wywolanie nr: %d\n", liczba);
}

int main()
{
    foo();
    foo();
    foo();
    return 0;
}
