#include <stdio.h>
int main()
{
    // char 字符类型
    //'a'; 两个单引号中间写一个字符这就是一个字符常量
    // char ch = 'w';
    char arr[] = "asdf";
    // printf("%d\n",strlen(arr));
    // int len = strlen("abc"); // 求字符串长度的一个函数string length.strlen是一个库函数，得包含头文件（string.h）
    printf("%s\n", arr); // s是用来打印字符串的
    return 0;
}