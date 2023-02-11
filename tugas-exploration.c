#include <stdio.h>
int main()
{
	//12 (00001100), 25(00001100)
	unsigned char a = 12, b = 25;

	// Hasilnya adalah 00001100 (8)
	printf("a = %d, b = %d\n", a, b);
	printf("a&b = %d\n", a & b);

	// Hasilnya adalah 00011101 (29)
	printf("a|b = %d\n", a | b);

	// Hasilnya adalah 00010101 (21)
	printf("a^b = %d\n", a ^ b);

	// Hasilnya adalah 11110011 (243)
	printf("~a = %d\n", a = ~a);

	// Hasilnya adalah 00011000 (50)
	printf("b<<1 = %d\n", b << 1);

	// Hasilnya adalah 00000110 (12)
	printf("b>>1 = %d\n", b >> 1);

	return 0;

}
