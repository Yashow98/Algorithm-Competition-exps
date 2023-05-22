#include <stdio.h>

long long combination(int n, int m)
{
    if (m < n - m) m = n - m;
    long long ans = 1;

    // compute n! / m! = (m + 1)...(n - 1)n
    for (int i = m + 1; i <= n; ++i)
    {
        ans *= i;
    }

    // ans / (n - m)!
    for (int i = 1; i <= n -m; ++i)
    {
        ans /= i;
    }
    return ans;
}

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    long long ans;
    ans = combination(n, m);
    printf("%d\n", ans);
    return 0;
}