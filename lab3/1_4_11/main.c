#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    int x=0;
    int max_x=0;
    if (b<c)
    {
        int result = 5*x*x+a*x+b;
        while(result <c)
        {
            max_x=x;
            x++;
            result = 5*x*x+a*x+b;
        }
    }
    else
    {
        int result = 5*x*x+a*x+b;
        while(result >=c)
        {
            max_x=x;
            x++;
            result = 5*x*x+a*x+b;
        }
        while(result <c)
        {
            max_x=x;
            x++;
            result = 5*x*x+a*x+b;
        }
    }
    printf("Wynik: %d\n", max_x);
    return 0;
}
