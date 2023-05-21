#include <stdio.h>

int main()
{
    printf("%d\n", 11111 * 11111);  // 123454321
    printf("%f\n", 111111. * 111111.);  // -539247567 overflow, 12345654321.000000
    printf("%f\n", 111111111. * 111111111.); // 1653732529 overflow, double is ok, 12345678987654320.000000
    return 0;
}