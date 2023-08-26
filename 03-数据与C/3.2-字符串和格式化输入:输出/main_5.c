#include <stdio.h>
 #define PI 3.141593
 int main()
 {
    int number = 1;//数
    float pies = 12.75;//馅饼
    int cost = 7800;//成本
    printf("the %d contestans ate %0.2f berry pies.\n", number, pies);
    printf("the value of pi is %f.\n", PI);
    printf("farewell! thou art too dear for my possessing,\n");
    printf("%c%d\n", '$', 2 * cost);
    return 0;
 }