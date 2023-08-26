#include <stdio.h>
int main(void)
{
   unsigned width, precision;
   int number = 256;//数量
   double weight = 242.5;//重量
   printf("enter a field width;\n");//输入字段宽度
   scanf("%d", &width);
   printf("the number is :%*d\n", width, number);
   printf("now enter a width and a precision:\n");//现在输入宽度和精度
   scanf("%d %d", &width, &precision);
   printf("weight = %*.*f\n", width, precision, weight);
   printf("done!\n");
   return 0;
}