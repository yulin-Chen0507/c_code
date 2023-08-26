#include <stdio.h>
#define SECONDS_OF_YEAR 3.156e7

int main(void)
{
    unsigned int age;
    printf("请输入年龄: ");
    scanf("%d", &age);
    // 请你确保用户输入的年龄>1,如果不满足，让用户重新输入
    while (age < 1)
    {
        printf("请重新输入：\n");
        scanf("%d", &age);
    }
    printf("条件合格, age");
    printf("%d 岁过了 %.lf 秒", age, SECONDS_OF_YEAR*age);
    return 0;
}