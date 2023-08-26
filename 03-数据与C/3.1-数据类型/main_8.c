#include <stdio.h>
int main(void)
{
    printf("type int has a size of %zd bytes.\n", sizeof(int));//sizeof是c语言的内置运算符，以字节为单位给出指定类型的大小
    printf("type char has a size of %zd bytes.\n", sizeof(char));// type 可以用来定义变量、函数参数、函数返回值等的数据类型
    printf("type long has a size of %zd bytes.\n", sizeof(long));//%zd转换说明匹配sizeof的返回类型
    printf("type long long has a size of %zd bytes.\n", sizeof(long long));
    printf("type double has a size of %zd bytes.\n", sizeof(double));
    printf("type long double has a size of %zd bytes.\n", sizeof(long double));
    return 0;
}