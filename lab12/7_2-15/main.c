#include <stdio.h>
#include <stdlib.h>

enum zwierzak  {PIES=7, KOT, KACZKA, KOGUT};

int main()
{
    enum zwierzak zmienna = KOT;
    printf("%u\n", zmienna);
    enum zwierzak tab[] = {KACZKA, KOGUT};
    printf("%Iu\n", sizeof(enum zwierzak));
    return 0;
}
