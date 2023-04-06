#include <stdio.h>
#include <stdlib.h>

int foo(float const * wsk1, float* const wsk2)
{
    return (wsk1-wsk2) *sizeof(float);
}

int main()
{
    float tab[] = {2.3, -4.3, 6.2, 1.3};
    printf("%Iu\n", sizeof(float));
    printf("%d\n", foo(&tab[0], &tab[3]));
    return 0;
}
