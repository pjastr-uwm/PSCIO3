#include <stdio.h>
#include <stdlib.h>

float foo()
{
    static float ciag=0.4;
    static int licznik=0;
    if (licznik ==0)
    {
        licznik++;
        return ciag;
    }
    ciag = 1 - ciag*ciag;
    licznik++;
    return ciag;
}

int main()
{
    printf("%f\n", foo());
    printf("%f\n", foo());
    printf("%f\n", foo());
    printf("%f\n", foo());
    printf("%f\n", foo());
    printf("%f\n", foo());
    printf("%f\n", foo());
    printf("%f\n", foo());
    printf("%f\n", foo());
    printf("%f\n", foo());
    printf("%f\n", foo());
    printf("%f\n", foo());
    printf("%f\n", foo());
    return 0;
}
