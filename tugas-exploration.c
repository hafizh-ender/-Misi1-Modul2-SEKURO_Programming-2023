#include <stdio.h>
int main()
{
	//7 (00000111), 15(00001101)
	unsigned char a = 7, b = 13;

	// Hasilnya adalah 00000101 (5)
	printf("a = %d, b = %d\n", a, b);
	printf("a&b = %d\n", a & b);

	// Hasilnya adalah 00001111 (15)
	printf("a|b = %d\n", a | b);

	// Hasilnya adalah 00001010 (10)
	printf("a^b = %d\n", a ^ b);

	// Hasilnya adalah 11111000 (248)
	printf("~a = %d\n", a = ~a);

	// Hasilnya adalah 00011010 (26)
	printf("b<<1 = %d\n", b << 1);

	// Hasilnya adalah 00000110 (6)
	printf("b>>1 = %d\n", b >> 1);

	return 0;

}
