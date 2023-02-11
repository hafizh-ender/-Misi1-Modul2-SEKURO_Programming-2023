Operator BITWISE pada C

Bitwise adalah operator khusus untuk menangani operasi logika bilangan biner dalam bentuk bit.

Bahasa C mendukung 6 jenis operator bitwise. 
1. & (AND)
2. | OR
3. ^ XOR 
4. ~ NOT
5. << Left Shift
6. >> Right Shift

Deskripsi Proses
Operator bitwise digunakan untuk melakukan operasi pada bit-bit dari sebuah bilangan. Masing-masing operator memiliki fungsinya sendiri-sendiri dalam mengolah bit-bit tersebut.
1. & (AND bitwise) akan menghasilkan 1 jika kedua bit yang dibandingkan bernilai 1, dan 0 jika salah satu atau kedua bit bernilai 0.
2. | (OR bitwise) akan menghasilkan 1 jika salah satu atau kedua bit bernilai 1, dan 0 jika kedua bit bernilai 0.
3. ^ (XOR bitwise) akan menghasilkan 1 jika kedua bit bernilai berbeda, dan 0 jika kedua bit bernilai sama.
4. ~ (NOT bitwise) akan mengubah setiap bit dari 0 menjadi 1, dan setiap bit dari 1 menjadi 0.
5. << (left shift) akan memindahkan setiap bit ke kiri sebanyak jumlah yang ditentukan (shift amount). Bit baru yang ditambahkan ke sebelah kanan adalah 0.
6. >> right shift akan memindahkan setiap bit ke kanan sebanyak jumlah yang ditentukan (shift amount). Bit baru yang ditambahkan ke sebelah kiri adalah sama dengan bit sign (0 jika bilangan positif, 1 jika bilangan negatif).

Contoh Penggunaan

#include <stdio.h>

int main()
{
    int a = 5, b = 3;

    // Contoh penggunaan operator & (AND bitwise)
    printf("a & b = %d\n", a & b); // Hasil: 1

    // Contoh penggunaan operator | (OR bitwise)
    printf("a | b = %d\n", a | b); // Hasil: 7

    // Contoh penggunaan operator ^ (XOR bitwise)
    printf("a ^ b = %d\n", a ^ b); // Hasil: 6

    // Contoh penggunaan operator ~ (NOT bitwise)
    printf("~a = %d\n", ~a); // Hasil: -6

    // Contoh penggunaan operator << (left shift)
    printf("a << 2 = %d\n", a << 2); // Hasil: 20

    // Contoh penggunaan operator >> (right shift)
    printf("a >> 2 = %d\n", a >> 2
