#include <stdio.h>
int main()
{
    int a = 5, b = 3;
    int c = a & b;
    int d = a | b;
    int e = a ^ b;
    int f = ~a;
    int g = a << b;
    int h = a >> b;
    printf("Hasil dari %d & %d = %d\n", a, b, c);
    printf("Hasil dari %d | %d = %d\n", a, b, d);
    printf("Hasil dari %d ^ %d = %d\n", a, b, e);
    printf("Hasil dari ~%d = %d\n", a, f);
    printf("Hasil dari %d << %d = %d\n", a, b, g);
    printf("Hasil dari %d >> %d = %d\n", a, b, g);
}