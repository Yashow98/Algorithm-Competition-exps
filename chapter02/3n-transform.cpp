#include <stdio.h>

int main()
{
    int num, count = 0;
    scanf("%d", &num);

    long long n = num;  // avoiding overflow

    while (n > 1)
    {
        if (n % 2 == 1)
        {
            n = 3 * n + 1;
        }
        else
        {
            n /= 2;
        }
        ++count;
    }

    printf("%d\n", count);
    
}