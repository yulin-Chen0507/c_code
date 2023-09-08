#include <stdio.h>
int main(void)
{
    long num;
    long sum = 0L;//把sum初始化为0(long类型的0)
    int status;//状态
    
    printf("please enter an integer to be summed");
    printf("(q to quit):");
    status = scanf("%ld", &num);
    while (status == 1)
    {
        sum = sum + num;
        printf("please enter next integer (q to quit):");
        status = scanf("%ld", &sum);
    }
    printf("those integers sum to %ld.\n", sum);
    return 0;
}
