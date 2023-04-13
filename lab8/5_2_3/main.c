#include <stdio.h>
#include <stdlib.h>

int porownaj(char*napis1, char*napis2)
{
    int i;
    for(i=0; napis1[i] !=0 && napis2[i] !=0;i++)
    {
        if(napis1[i] != napis2[i])
            return 0;
    }
    if (napis1[i] !=0)
        return 0;
    if (napis2[i] !=0)
        return 0;
    return 1;
}

int main()
{
    char n1[]= "ABC";
    char n2[]= "XYZ";
    char n3[] = "ABCD";
    char * n4 = malloc(sizeof(char)*4);
    n4[0] = 'A';
    n4[1] = 'B';
    n4[2] = 'C';
    n4[3] = '\0';
    printf("%d\n", porownaj(n1, n2));
    printf("%d\n", porownaj(n1, n3));
    printf("%d\n", porownaj(n1, n4));
    return 0;
}
