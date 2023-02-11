#include <stdio.h>

int main() {
    int a = 5; // 0000 0101
    int b = 9; // 0000 1001

    printf("a = %d, b = %d", a, b);

    // AND
    printf("AND: %d", a & b); // 0000 0001 = 1

    // OR
    printf("OR: %d", a | b); // 0000 1101 = 13

    // XOR
    printf("XOR: %d", a ^ b); // 0000 1100 = 12

    // NOT
    printf("NOT: %d", ~a); // 1111 1010 = -6

    // Shift Left
    printf("Shift Left: %d", a << 1); // 0000 1010 = 10

    // Shift Right
    printf("Shift Right: %d", a >> 1); // 0000 0010 = 2

    return 0;