#include <stdio.h>
#include <inttypes.h>//支持可移植类型
int main(void)
{
    int32_t me32;//表示整形类型的宽度正好是32位//me32是一个32位有符号整型变量
    me32 = 45678643;
    printf("first, assume int32_t is int: ");
    printf("me32 = %d\n", me32);
    printf("next let't not make any assumptios.\n");
    printf("instead, use a \"macro\" from inttyper.h: ");
    printf("me32 = %" PRId32 "\n", me32);
    return 0;
}