#include <stdio.h>

int main(){
    printf("Operator & (AND)\n");
    printf("3 & 5 = %d\n", 3 & 5);

    printf("Operator | (OR)\n");
    printf("3 | 5 = %d\n", 3 | 5);

    printf("Operator ^ (XOR)\n");
    printf("3 ^ 5 = %d\n", 3 ^ 5);
    
    printf("Operator ~ (NOT)\n");
    printf("~3 = %d\n", ~3);

    printf("Operator << (Left shift)\n");
    printf("3 << 2 = %d\n", 3 << 2);

    printf("Operator >> (Right shift)\n");
    printf("3 >> 5 = %d\n", 3 >> 2);
    return 0;
}