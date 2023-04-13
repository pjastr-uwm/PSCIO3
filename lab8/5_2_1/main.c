#include <stdio.h>
#include <stdlib.h>

void wyczysc(char*napis)
{
    napis[0] = '\0';
    // napis[0] = 0;
}

void wyczysc2(wchar_t*napis)
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
    wchar_t n2[8] = L"Olsztyn";
    wprintf(L"%s\n", n2);
    wyczysc2(n2);
    wprintf(L"%s.\n", n2);
    return 0;
}
