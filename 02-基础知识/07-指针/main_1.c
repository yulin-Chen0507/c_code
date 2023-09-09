#include <stdio.h>
int main(void)
{
    int a;//向内存申请4个字节，存储10
    printf("%p\n", &a);
    int * p = &a;//p就是指针变量
    //int说明p指向的对象是int类型的，*说明p是指针变量
    * p = 20;//解引1用操作符，意思就是通过p中存放的地址，找到p所指向的对象，*p就是p指向的对象
    printf("%d\n", a);
    return 0;
}