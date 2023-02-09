#include <stdio.h>

int main()
{
	unsigned char a = 8, b = 3;
	printf("Bitwise Operator | (OR)\n");
	printf("%d | %d = %d\n", a, b, a|b);

	printf("Bitwise Operator ^ (XOR)\n");
	printf("%d ^ %d = %d\n", a, b, a^b);

	printf("Bitwise Operator ~ (NOT)\n");
	printf("%d\n\n", a = ~a);

	// Problem: Gunakan property & operator untuk menentukan bilangan ganjil
	int x = 98;
	if (x&1) // Perhatikan bahwa angka ganjil pasti memiliki bit 1 pada ujung paling kanannya
	{
		printf("%d adalah bilangan ganjil\n\n", x);
	}
	else
	{
		printf("%d adalah bilangan genap\n\n", x);
	}

    	// Problem: kalikan sebuah variable dengan angka dua, menggunakan bitwise operator
	int a1 = 20;
	printf("%d x 2 adalah %d\n\n", a1, a1 << 1);

	// Problem: Gunakan bitwise operator untuk melakukan integer division by 2
	int a2 = 11;
   	printf("Integer division 11 dengan 2 adalah %d\n\n", a2 >> 1);

    return 0;
}
