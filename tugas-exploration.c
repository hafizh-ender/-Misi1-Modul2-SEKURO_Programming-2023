// C Program to demonstrate use of bitwise operators
#include <stdio.h>
int main()
{
	unsigned char a = 7, b = 9;

	// Operasi &
	printf("a = %d, b = %d\n", a, b);
	printf("a&b = %d\n", a & b);

	// Operasi |
	printf("a|b = %d\n", a | b);

	// Operasi ^
	printf("a^b = %d\n", a ^ b);

	// Operasi ~
	printf("~a = %d\n", a = ~a);

	// Operasi <<
	printf("b<<1 = %d\n", b << 1);

	// Operasi >>
	printf("b>>1 = %d\n", b >> 1);

	return 0;

}
