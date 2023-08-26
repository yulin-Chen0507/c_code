#include <stdio.h>
int Add(int x, int y)//int叫做函数的返回类型，Add叫做函数名，int x, int y叫做函数的参数
{
    int z = 0;
    z = x + y;
    return z;//{}里的叫做函数体，也可以直接写成return(x + y);
}
//求2个任意整数和
int main()
{
    int n1 = 0;
    int n2 = 0;
    //输入
    scanf("%d %d", &n1, &n2);
    //输出
    //int sum = n1 + n2;
    int sum = Add(n1, n2);
    //打印
    printf("%d\n",sum);
    return 0;
}