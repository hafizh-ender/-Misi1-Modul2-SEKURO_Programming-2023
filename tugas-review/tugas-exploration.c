#include <stdio.h>

int main() {
    int a = 3, b = 10;           // a = 3 (00000011) b = 10 (00001010)

    printf("a=%d, b=%d\n", a, b);

    // Operator &
    printf("a&b= %d\n", a & b);      // output = 2 (00000010)

    // Operator |
    printf("a|b= %d\n", a | b);      // output = 11 (00001011)

    // Operator ^
    printf("a^b= %d\n", a ^ b);      // output = 9 (00001001)

    // Operator <<
    printf("a<<1= %d\n", a << 1);    // output = 6 (00000110)

    // Operator >>
    printf("b>>1= %d\n", b >> 1);    // output = 5 (00000101)

    // Operator ~
    printf("~a= %d\n", ~a);          // output = -4 (11111010)

    return 0;
}