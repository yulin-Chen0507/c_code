#include <stdio.h>
int main(void)
{
    int n = 3;

    while (n)
    printf("%d is turn\n", n--);
    printf("%d is false\n", n);

    n = -3;
    while (n)
    printf("%d is true\n", n++);
    printf("%d is false\n", n);
    return 0;
}