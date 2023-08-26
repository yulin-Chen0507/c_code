#include <stdio.h>
int main(void)
{
    int l = 2147483647;
    unsigned int j = 4294967295;//c语言中unsigned int是无符号整数的意思
    printf("%d %d %d\n", l, l+1, l+2);
    printf("%u %u %u\n", j, j+1, j+2);
    return 0;

}