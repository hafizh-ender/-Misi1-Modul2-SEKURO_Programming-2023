// Program C untuk menunjukkan implementasi semua operator bitwise
#include <stdio.h>
int main()
{
    // a = 7(00000111), b = 11(00001011)
    unsigned char a = 7, b = 11;
 
    // Operator AND
    // Hasilnya 00000011 (3)
    printf("a = %d, b = %d\n", a, b);
    printf("a&b = %d\n", a & b);
 
    // Operator OR
    // Hasilnya 00001111 (15)
    printf("a|b = %d\n", a | b);
 
    // Operator XOR
    // Hasilnya 00001100 (12)
    printf("a^b = %d\n", a ^ b);
    
    // Operator <<
    // Hasilnya 00001110 (14)
    printf("a<<1 = %d\n", a << 1);

    // Operator >>
    // Hasilnya 00000011 (3)
    printf("a>>1 = %d\n", a >> 1);
 
    // Operator ~ (bitwise NOT)
    // Hasil 11111000 (248)
    printf("~a = %d\n", a = ~a);
    return 0;
   
}