#include <stdio.h>
int main(void)
{
    float a = 32000.0;
    double b = 2.14e9;
    long double c = 5.32e-5;
    printf("%f can be wrtten %e\n", a, a);
    printf("and it's %a in hexadecimal, 2 notation\n", a);
    printf("%f can be written %e\n", b, b);
    printf("%Lf can be written %Le\n", c, c);
    return 0;
}