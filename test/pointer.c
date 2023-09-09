#include <stdio.h>

// 需求：写一个函数，传入一个整数，打印这个整数，无返回值
void apple(int abc)
{
    printf("%d", abc);
}

// 需求：写一个函数，传入2个整数，返回他们的乘积
int time(int xxxx, int yy)
{
    xxxx = xxxx - 1;
    yy = yy + 1;
    return xxxx * yy;
}

int main()
{

    // int a = 888;
    // int * p = &a;
    // printf("%p\n", p);
    // printf("%d\n", *p);
    // apple(a);
    

    int a = 10;
    int b = 20;
    // 调用这个函数，获取返回值,并打印
    int abc;// 接受返回值
    abc = time(a, b);
    
    printf("%d\n", abc);

    return 0;
}
