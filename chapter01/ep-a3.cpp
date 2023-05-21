#include <stdio.h>
#include <math.h>

int main()
{
    printf("%f\n", sqrt(-10.)); // nan
    printf("%f\n", 1.0 / 0.0);  // inf
    printf("%f\n", 0.0 / 0.0);  // nan
    // printf("%d\n", 1 / 0);      // exception, division by zero
    return 0;
}