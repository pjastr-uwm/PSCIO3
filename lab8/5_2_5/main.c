#include <stdio.h>
#include <stdlib.h>

void przepisz(char napis1[], char napis2[])
{
    int i;
    for(i=0; napis1[i] !=0; i++)
    {
        napis2[i] = napis1[i];
    }
    napis2[i] = 0;
}

int main()
{
    char n1[]  = "ABC";
    char n2[] = "Olsztyn";
    printf("%s\n", n1);
    printf("%s\n", n2);
    przepisz(n1, n2);
    printf("%s\n", n1);
    printf("%s\n", n2);
    return 0;
}
