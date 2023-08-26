#include <stdio.h>
#include <string.h>//提供strlen()函数的原型
#define PRAISE "you are an extraordinary being."//用双引号括起来的文本是一个字符串，编译器会在末尾加上空字符
int main(void)
{
    char name[40];
    printf("what's you name?\n");
    scanf("%s", name);
    printf("hello, %s. %s\n", name, PRAISE);
    printf("your name of %zd letters occupies %zd memory cells.\n", strlen(name), sizeof name);
    printf("the phrase of praise has %zd letters.\n", strlen(PRAISE));
    printf("and occupies %zd memory cells.\n", sizeof PRAISE);
    return 0;//sizeof运算对象是类型时，圆括号必不可少，但是对于特定量，可有可无
}