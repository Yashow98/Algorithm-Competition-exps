#include <stdio.h>
#include <string.h>
#define Maxn 20

int a[Maxn][Maxn];

int main()
{
    int n, x, y, t;
    scanf("%d", &n);
    memset(a, 0, sizeof(a));

    t = a[x = 0][y = n - 1] = 1;
    while (t < n * n)
    {
        //down
        while (x + 1 < n && !a[x + 1][y]) a[++x][y] = ++t;
        
        // left
        while (y - 1 >= 0 && !a[x][y - 1]) a[x][--y] = ++t;

        // up
        while (x - 1 >= 0 && !a[x - 1][y]) a[--x][y] = ++t;

        // right
        while (y + 1 < n && !a[x][y + 1]) a[x][++y] = ++t;
    }

    // printf
    for (x = 0; x < n; ++x)
    {
        for (y = 0; y < n; ++y)
        {
            printf("%3d", a[x][y]);
        }
        printf("\n");

    }
    return 0;

}