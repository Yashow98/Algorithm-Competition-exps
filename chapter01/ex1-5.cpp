#include <stdio.h>

int main()
{
    int n;
    double pay;

    scanf("%d", &n);
    pay = n * 95;
    if (pay >= 300)
    {
        pay *= 0.85;
    }
    printf("%.2f元\n", pay);
    return 0;
}