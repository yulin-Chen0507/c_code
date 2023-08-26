//circumference(周长) = pi(3.14159) * diameter(直径);
//float a;
//a = 1.128;
#include <stdio.h>
#define PI 3.14159
int main(void)
{
    float area, circum, radius;
    printf("what is the radius of your pizza?\n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circum = 2.0 * PI * radius;
    printf("your basic pizza parameters are as follows:\n");
    printf("circumference = = %1.2f, area = %1.2f\n", circum, area);
    return 0;
}