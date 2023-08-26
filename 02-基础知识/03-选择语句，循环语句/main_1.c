#include <stdio.h>
int main()
{
    int input = 0;
    printf("加入比特");
    printf("要好好学习吗？(1/0)");
    scanf("%d",&input);
    if (input == 1)//C语言中else是与if一起使用的一个关键字，if表示如果，else表示否则
    {
        printf("好offer");
    }
    else
    {
        printf("卖地瓜");
    }

    return 0;
}