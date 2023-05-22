#include <stdio.h>
#include <math.h>

int is_prime(int n)
{
    if (n <= 1) return 0;

    int m;
    m = floor(sqrt(n) + 0.5);

    for (int i = 2; i <= m; ++i)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    bool ans;
    ans = is_prime(n);

    if (ans) printf("%d is prime\n", n);
    else printf("%d is not prime", n);
    return 0;
}