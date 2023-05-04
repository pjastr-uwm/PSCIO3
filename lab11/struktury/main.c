#include <stdio.h>
#include <stdlib.h>

struct Punkt2D
{
    float x;
    float y;
};

int main()
{
    struct Punkt2D zmienna ={3.4, 3.5};
    printf("%f\n", zmienna.x);
    return 0;
}
