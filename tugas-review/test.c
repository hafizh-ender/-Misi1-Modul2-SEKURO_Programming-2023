#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 12;
    int and;
    int or;
    int xor;
    int not;
    int lshift;
    int rshift;

    printf("Operator Bitwise Bahasa C\n");

    and = a & b;
    printf("a & b: %d \n", and);

    or = a | b;
    printf("a | b: %d \n", or);

    xor = a ^ b;
    printf("a ^ b: %d \n", xor);

    not = ~a;
    printf("~a: %d \n", not);

    lshift = a << 1;
    printf("a << 1: %d \n", lshift);

    rshift = a >> 1;
    printf("a >> 1: %d \n", rshift);
}