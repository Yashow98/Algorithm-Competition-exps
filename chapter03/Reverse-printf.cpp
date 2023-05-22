#include <stdio.h>
#define Max 1000000

int a[Max];  // 只有放在外面，数组才可以开得很大

int main()
{
    // int a[Max];  // 放在里面出现异常错误
    int x, n = 0;
    while (scanf("%d", &x) == 1)
        a[n++] = x;
    
    // reverse printf
    for (int i = n - 1; i >= 0; --i)
        printf("%d ", a[i]);

    printf("\n"); 
    return 0;
}