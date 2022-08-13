#include <stdio.h>

int main()
{
    /* -12345的16位补码表示与53191的16位无符号表示是完全一样的 */
    short int v = -12345;
    unsigned short uv = (unsigned short) v;
    printf("v = %d, uv = %u\n", v, uv);

    /* UMax */
    unsigned u = 4294967295u;
    int tu = (int) u;
    printf("u = %u, tu = %d\n", u, tu);

    short int a = -2;
    unsigned short ua = (unsigned short) a;
    printf("a = %d, ua = %u", a, ua);

    return 0;
}