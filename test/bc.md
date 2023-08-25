## define定义宏
```c
#include <stdio.h>
#define ADD(x,y) ((x)+(y))//ADD是宏名，(x,y)是宏的参数，参数是无类型，((x)+(y))是宏体
int main(void)
{
    int a = 10;
    int b = 20;
    int c = ADD(a, b);
    printf("%d\n", c);
    return 0;
}
```
