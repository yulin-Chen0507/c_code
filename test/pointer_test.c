#include <stdio.h>

void plus1(int * a)
{
    (*a)++;
    return;
}

void plus3(int a){
    a++;
    return;
}

int plus2(int a){
    return a + 1;
}



int main()
{
    int c = 10;
    int d = 10;
    int e = 10;

    plus1(&c);// 0x768112
    // int * a = &c;
    // (*a)++
    plus3(d);
    // int a = d;
    // a++;
    e = plus2(e);
    // int a = e;
    // e =  a + 1

    printf("c = %d\n", c);
    printf("d = %d\n", d);
    printf("e = %d\n", e);
    return 0;
}
