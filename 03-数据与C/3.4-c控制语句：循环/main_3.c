//浮点数比较
#include <math.h>
#include <stdio.h>
int main(void)
{
    const double ANSWER = 3.14159;
    double response;//响应
    
    printf("what is the value of pi?\n");
    scanf("%lf", &response);
    while (fabs(response - ANSWER) > 0.0001)
    {
        printf("try again!");
        scanf("%lf", &response);
    }
    printf("close enough!\n");
    return 0;
}
