#include <stdio.h>
int main(void)
{
   int age;//变量
   float assets;//变量
   char pet[30];//字符数组，用于储存字符串
   printf("enter your age, assets, and favorite pet.\n");
   scanf("%d %f", &age, &assets);//这里要使用&
   scanf("%s", pet);
   printf("%d $%.2f %s\n", age, assets, pet);
   return 0;
}