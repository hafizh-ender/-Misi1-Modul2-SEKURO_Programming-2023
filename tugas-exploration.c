#include <stdio.h>

int main() {
   int a = 69, b = 42;

   printf("a & b = %d\n", a & b);
   printf("a | b = %d\n", a | b);
   printf("a ^ b = %d\n", a ^ b);
   printf("~a = %d\n", ~a);
   printf("a << 2 = %d\n", a << 2);
   printf("b >> 1 = %d\n", b >> 1);

   return 0;
}