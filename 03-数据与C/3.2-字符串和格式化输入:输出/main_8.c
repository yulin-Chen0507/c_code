#include <stdio.h>//跳过输入中的前两个整数
int main(void)
{
   int n;
   printf("please enter three integers:\n");//请输入三个整数
   scanf("%*d %*d %d", &n);
   printf("the last integer was %d\n", n);//最后一个整数是
   return 0;
}