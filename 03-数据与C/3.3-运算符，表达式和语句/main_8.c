#include <stdio.h>
#define SEC_PER_MIN 60//1分钟60秒
int main(void)
{
    int sec, min, left;
    printf("convert secongd to minutes and seconds!\n");
    printf("enter the number of seconds (<=0 to quit) :\n");
    scanf("%d", &sec);//读取秒数
    while (sec > 0)
    {
        min = sec / SEC_PER_MIN;//截断分钟数
        left = sec % SEC_PER_MIN;//剩下的秒数
        printf("%d second is %d minutes, %d seconds.\n", sec, min, left);
        printf("enter next value (<=0 to quit):\n");
        scanf("%d", &sec);
    }
    printf("done!\n");
    return 0;
}