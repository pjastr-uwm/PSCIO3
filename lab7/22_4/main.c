#include <stdio.h>
#include <stdlib.h>

int nww(int a, int b)
{
    int t = a%b;
    if (t==0)
        return a;
    return a* nww(b,t) /t;
}

int main()
{
    printf("%d\n", nww(12,60));
    return 0;
}
