#include <stdio.h>

int main()
{
    double sum = 0, term;
    do
    {
        int i = 0;
        term = 1.0 / (2 * i + 1);
        if (i % 2 == 0)
        {
            sum += term;
        }
        else
        {
            sum -= term;
        }

    } while (term < 1e-6);

    printf("%.6f\n", sum);
    

}