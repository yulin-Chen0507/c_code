#include <stdio.h>
#define ADJUST 7.31
int main(void)
{
    const double SCALE = 0.333;
    double shoe, foot;
    shoe = 9.00;
    foot = SCALE * shoe + ADJUST;
    printf("shoe size (men's) foot length\n");
    printf("%0.1f %0.1f inches\n", shoe, foot);
    return 0;
}