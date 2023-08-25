#include <stdio.h> //头文件
int main()
{
    int a = 0;
    int b = 0; // （初始化）
    // 1:输入两个整数
    printf("%d %d\n", a, b); //(%d %d代表输入了两个数值分别放到了&a，&b中去）
    printf("INPUT:\n");
    scanf("%d %d", &a, &b);
    // 2:求和
    int sum = a + b;
    // 3:输出
    printf("%d\n", sum);
    return 0;
}