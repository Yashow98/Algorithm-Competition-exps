#include <stdio.h>
#include <string.h>
#define Maxn 1005

int a[Maxn];

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    
    // 模拟关灯，将数组清零
    memset(a, 0, sizeof(a));

    for (int i = 1; i <= k; ++i)
        for (int j = 1; j <= n; ++j)
            if (j % i == 0) a[j] = !a[j];
    
    for (int i = 1; i <= n; ++i)
    {
        if (a[i])
        {
            printf("%d ", i);
        }
    }
    printf("\n");

}