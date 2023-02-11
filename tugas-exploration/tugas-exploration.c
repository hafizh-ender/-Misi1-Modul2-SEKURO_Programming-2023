#include <stdio.h>

int main(){
    int var1 = 2, var2 = 3;
    printf("Hasil dari operasi %d & %d = %d\n", var1, var2, (var1 & var2));
    printf("Hasil dari operasi %d | %d = %d\n", var1, var2, (var1 | var2));
    printf("Hasil dari operasi %d ^ %d = %d\n", var1, var2, (var1 ^ var2));
    printf("Hasil dari operasi ~%d = %d\n", var1, ~var1);
    printf("Hasil dari operasi %d >> 1 = %d\n", var1, (var1 >> 1));
    printf("Hasil dari operasi %d << 1 = %d\n", var1, (var1 << 1));
}

