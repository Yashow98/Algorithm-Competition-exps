#include <stdio.h>

int main()
{
    double a = -1.5e38, b = 1.5e38, c = 1.0;
    double d = a + (b + c);
    double e = a + b + c;

    printf("%f\n", d); // 0.000000
    printf("%f\n", e); // 1.000000
    
    return 0;
}