#include <stdio.h>

int main()
{
    int a = 112, b = 212;
    int c;
    c = a & b;
    printf("Bitwise OR antara %d | %d adalah %d\n", a, b, c);
    c = a | b;
    printf("Bitwise OR antara %d | %d adalah %d\n", a, b, c);
    c = a ^ b;
    printf("Bitwise XOR antara %d ^ %d adalah %d\n", a, b, c);
    b = ~a;
    printf("Bitwise NOT dari %d adalah %d\n", a, b);
    b = a << 2;
    printf("Bitwise Shift Left dari %d << 2 adalah %d\n", a, b);
    b = a >> 2;
    printf("Bitwise Shift Right dari %d >> 2 adalah %d\n", a, b);
    return 0;
}
