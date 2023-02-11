/*
Misi 1 Modul 2 Programming SEKURO 2023
Program tugas-exploration mengimplementasikan cara kerja bitwise operator di bahasa C.
Nama: Angela Geraldine H. P.
NIM: 18221158
*/

#include <stdio.h>

int main() {
    unsigned int a, b;

    // AND operator
    // &
    a = 7; b = 9;
    // a = 00000111  b = 00001001
    // a & b = 00000001 = 1
    printf("1.) & operator\n");
    printf("a = %d, b = %d\n", a, b);
    printf("a & b = %d\n\n", a&b);

    // OR operator
    // |
    // a = 00000111  b = 00001001
    // a | b = 00001111 = 15
    printf("2.) | operator\n");
    printf("a = %d, b = %d\n", a, b);
    printf("a | b = %d\n\n", a|b);

    // XOR operator
    // ^
    // a = 00000111  b = 00001001
    // a ^ b = 00001110 = 14
    printf("3.) ^ operator\n");
    printf("a = %d, b = %d\n", a, b);
    printf("a ^ b = %d\n\n", a^b);

    // left shift operator
    // <<
    // a = 00001011  b = 2
    // a << b = 00010110 = 44
    a = 11; b = 2;
    printf("4.) << operator\n");
    printf("a = %d, b = 2", a, b);
    printf("a << b = %d\n\n", a << b);

    // right shift operator
    // >>
    // a = 00101100  b = 2
    // a << b = 00001011 = 11
    a = 44;
    printf("5.) >> operator\n");
    printf("a = %d, b = %d\n", a, b);
    printf("a >> b = %d\n\n", a >> 2);

    // NOT operator
    // ~
    // a = 00000111  b = 00001001
    // ~a = 11111000 = -8
    // ~b = 11110110 = -10
    a = 7; b = 9;
    printf("6.) ~ operator\n");
    printf("a = %d, b = %d\n", a, b);
    printf("~a = %d\n", ~a);
    printf("~b = %d\n", ~b);

    return 0;
}