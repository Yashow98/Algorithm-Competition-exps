#include <stdio.h>
#include <math.h>

typedef struct
{
    double x, y;
}Point;

double dist(Point& a, Point& b)
{
    return hypot(a.x - b.x, a.y - b.y);
}

int main()
{
    Point a = {1, 2}, b = {2, 3};
    printf("%.2f\n", dist(a, b));
    return 0;

}