# Rangkuman Operator Bitwise dalam C

## Operator

1. Bitwise AND (&): Melakukan operasi logika AND pada setiap bit dari operand. Hasilnya adalah 1 jika kedua operand memiliki 1 pada posisi bit yang sesuai, dan 0 jika tidak.

   Contoh:
   1101 & 0011 (mengembalikan nilai 0001)

2. Bitwise OR (|): Melakukan operasi logika OR pada setiap bit dari operand. Hasilnya adalah 1 jika salah satu atau kedua operand memiliki 1 pada posisi bit yang sesuai, dan 0 jika tidak.

   Contoh:
   1101 | 0011 (mengembalikan nilai 1111)

3. Bitwise XOR (^): Melakukan operasi logika exclusive OR pada setiap bit dari operand. Hasilnya adalah 1 jika hanya ada satu operand yang memiliki 1 pada posisi bit yang sesuai, dan 0 jika tidak.

   Contoh:
   1101 ^ 0011 (mengembalikan nilai 1010)

4. Bitwise NOT (~): Operator unary yang membalikkan semua bit dari operand-nya.

   Contoh:
   ~1101 (mengembalikan nilai 0010)

5. Bitwise shift left (<<): Menggeser bit dari operand pertama ke kiri sejumlah posisi yang ditentukan oleh operand kedua. Bit yang digeser dari ujung kiri operand pertama hilang, dan nol digeser pada bagian kanan.

   Contoh:
   1101000001 << 2 (mengembalikan nilai 0100000100)

6. Bitwise shift right (>>): Menggeser bit dari operand pertama ke kanan sejumlah posisi yang ditentukan oleh operand kedua. Bit yang digeser dari ujung kanan operand pertama hilang, dan bit tanda (bit terbesar) digeser pada bagian kiri.

   Contoh:
   1101000001 >> 3 (mengembalikan nilai 0001101000)
