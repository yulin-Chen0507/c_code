#include <stdio.h>
#include <string.h>


//%d 打印整形
//%c 打印字符
//%s 打印字符串
//%f 打印float类型的数据
//%lf 打印double类型的数据
//%zu 打印sizeof的返回值
int main()
{
    // printf("%c\n",'\130');
    // printf("%c\n",'\x30');
    printf("%ld\n", strlen("7\62 663hah\63\n")); //\62被解析成一个转义字符
    return 0;
}