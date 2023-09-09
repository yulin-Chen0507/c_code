/*
项目说明：手动实现前++和后++，使用函数、指针
*/

#include <stdio.h>

// // 前++
// int pp_a(){

// }


// //后++
// int a_pp(){
    
// }

int main(){
    int a = 10;
    // int b = a++;
    // a = a++;
    // a = a++;
    // a = a++;
    // a = a++;
    // a = a++;
    // a = a++;
    // a++;
    // a++;
    // a++;
    // a++;
    // a++;
    // printf("a = %d\n", a);
    // printf("b = %d\n", b);
    int *p = &a;
    printf("p = %p\n", p);
    int *p2 = p;
    printf("p2 = %p2\n", p2);
    *p2 = *p + 1;
    printf("a = %d\n", a);

    return 0;
}