#include <stdio.h>
int main(void)
{
    int a = 10;
    int b = 2;
    printf("doing it right:");
    printf("%d minus %d is %d\n", a, 2, a - b);
    printf("doing it wrong:");
    printf("%d minus %d is %d\n",a, a, a);
    return 0;
}