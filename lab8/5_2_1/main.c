#include <stdio.h>
#include <stdlib.h>

void wyczysc(char*napis)
{
    napis[0] = '\0';
    // napis[0] = 0;
}

int main()
{
    char n1[8] = "Olsztyn";
    printf("%s\n", n1);
    wyczysc(n1);
    printf("%s.\n", n1);
    return 0;
}
