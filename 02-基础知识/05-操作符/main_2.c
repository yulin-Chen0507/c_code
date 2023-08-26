#include <stdio.h>
int main()
{
    int a = 10;
    int b = a++;//后置++，先使用，后++
    //int b = ++a;前置++，先++，后使用
    //int b = a, a=a+1;
    printf("%d\n",b);
    printf("%d\n",a);
    return 0;
}