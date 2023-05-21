#include <stdio.h>
#include <math.h>

int main()
{
    int n, m, count = 0;

    for (int a = 1; a <= 9; ++a)
    {
        for (int b = 0; b <= 9; ++b)
        {
            n = a * 1100 + b * 11;
            m = floor(sqrt(n) + 0.5);  // avoid error

            if (m * m == n)
            {
                printf("%d\n", n);
                ++count;
            }
        }
    }

    printf("%d\n", count);
}