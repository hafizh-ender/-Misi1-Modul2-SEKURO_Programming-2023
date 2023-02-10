#include <stdio.h>

int main() {
    int a = 12; // 0000 1100
    int b = 25; // 0001 1001

    // 1. And 
    int c = a & b; // 0000 1000
    printf("Hasil dari %d & %d = %d\n", a, b, c);
    // Output: 8

    // 2. OR
    int d = a | b; // 0001 1101
    printf("Hasil dari %d | %d = %d\n", a, b, d);
    // Output: 29
    
    // 3. XOR
    int e = a ^ b; // 0001 0101
    printf("Hasil dari %d ^ %d = %d\n", a, b, e);
    // Output: 21

    // 4. Not 
    int f = ~a;
    printf("Nilai awal a: %d\n", a);
    printf("Nilai b setelah operator NOT: %d\n", f);
    // Output: 13

    // 4. Left Shift
    int g = a << 2; // 0011 0000
    printf("Hasil dari %d << 2 = %d\n", a, g);
    // Output: 48

    // 5. Right SHift
    int h = a >> 2; // 0011 0000
    printf("Hasil dari %d << 2 = %d\n", a, h);
    // Output: 3

    return 0;
}

