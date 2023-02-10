#include <stdio.h>
int main()
{
	// a = 9 (00001001), b = 100 (01100100)
	unsigned char a = 9, b = 100;
  printf("a = %d, b = %d\n", a, b);
  
	// Hasilnya 00000000
	printf("a&b = %d\n", a & b);

	// Hasilnya 01101101
	printf("a|b = %d\n", a | b);

	// Hasilnya 01101101
	printf("a^b = %d\n", a ^ b);

	// Hasilnya 00010010
	printf("a<<1 = %d\n", a << 1);

	// Hasilnya 00000001
	printf("a>>3 = %d\n", a >> 3);
  
	// Hasilnya 11110110
	printf("~a = %d\n", a = ~a);
  
	return 0;
// Kode ini diambil dari website https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/ dengan pengubahan angka
}
