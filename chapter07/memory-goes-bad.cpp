#include <stdio.h>

int *ptr()
{
    int y;
    y = 3;
    return &y;
}

int main()
{
    int* stackAddr;
    int content;
    stackAddr = ptr();
    content = *stackAddr;
    printf("%d\n", content);
    content = *stackAddr;
    printf("%d\n", content);
    return 0;

}