// Program ini untuk menunjukkan penggunaan operator bitwise

#include <stdio.h>
int main()
{
    // a = 5(00000101), b = 9(00001001)
    unsigned char a = 5, b = 9;
 
    // Hasilnya = 1 = 00000001
    printf("a = %d, b = %d\n", a, b);
    printf("a&b = %d\n", a & b);
 
    // Hasilnya = 13 = 00001101
    printf("a|b = %d\n", a | b);
 
    // Hasilnya = 12 = 00001100
    printf("a^b = %d\n", a ^ b);
 
    // Hasilnya = -6 = 11111010
    printf("~a = %d\n", ~a);
    printf("\n");
 
    // Hasilnya = 18 = 00010010
    printf("b<<1 = %d\n", b << 1);
 
    // Hasilnya = 4 = 00000100
    printf("b>>1 = %d\n", b >> 1);
 
    return 0;
   
}
