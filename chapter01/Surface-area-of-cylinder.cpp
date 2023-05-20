#include <stdio.h>
#include <math.h>

int main()
{
    const double pi = acos(-1.0);
    double r, height, surface_area, bottom_area, s;

    scanf("%lf%lf", &r, &height);
    surface_area = 2 * pi * r * height;
    bottom_area = 2 * pi * r * r;
    s = surface_area + bottom_area;
    printf("Area = %.3f\n", s);
    return 0;
}