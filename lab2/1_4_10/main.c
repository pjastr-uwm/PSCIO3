#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i=0;
    while(i*i<=n)
    {
        i++;
    }
    printf("%d\n",i-1);
    return 0;
}
