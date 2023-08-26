#include <stdio.h>
int main()
{
    float weight;
    float value;
    printf("are you worth your weight in platinum?\n");
    printf("let's check it out.\n");
    printf("please enter your weight in pounds:");
    scanf("%f", &weight);//&符号表明找到weight变量的地点
    value = 1700.0 * weight * 14.5833;
    printf("your weight in platinum is worth $%.2f.\n",value);//%.2f中的2用于精确控制输出，指定输出的浮点小数只显示后两位
    printf("you are easily worth that! if platinum prices drop,\n");
    printf("eat more to maintain your value.\n");
    return 0;
}