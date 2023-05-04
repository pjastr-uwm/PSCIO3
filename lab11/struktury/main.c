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
    struct Punkt2D *punkt = (struct Punkt2D *)malloc(sizeof(struct Punkt2D));
    punkt->x = 5;
    punkt->y = -3;
    return 0;
}
