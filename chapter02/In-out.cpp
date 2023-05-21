#include <stdio.h>
#define INF 1e09

int main()
{
    int x, n = 0, s = 0, min = INF, max = -INF;

    while (scanf("%d", &x) == 1)
    {
        s += x;
        if (x < min) min = x;
        if (x > max) max = x;
        ++n;
    }
    printf("%d %d %.3f\n", min, max, (double)s / n);
    return 0;

}