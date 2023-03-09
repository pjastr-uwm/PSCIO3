#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,k;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&k);
    for(int i=m+1;i<k;i++)
    {
        if (i%n == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
