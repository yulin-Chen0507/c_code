#include <stdio.h>
int main()
{
    float a = 7 / 2.0;//除号/的两端都是整数的时候，执行的是整数除法，如果两端只要有一个浮点数就执行浮点数的除法
    int b = 7 % 2;//取模，在这边的意思就是7/2得到的余数
    printf("%.2f\n",a);
    printf("%d\n",b);
    return 0;
}