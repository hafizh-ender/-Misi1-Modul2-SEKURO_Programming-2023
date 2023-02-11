# Operator Bitwise

## & (bitwise AND)

Mengambil dua angka sebagai operan dan melakukan AND pada setiap bit dari dua angka. Hasil AND adalah 1 hanya jika kedua bit adalah 1.

Contoh:

11 = 00001011

13 = 00001101

11 & 13 = 9 (00001001)

## | (bitwise OR)

Mengambil dua angka sebagai operan dan melakukan OR pada setiap bit dari dua angka. Hasil OR adalah 1 jika salah satu dari dua bit adalah 1.

Contoh:

11 = 00001011

13 = 00001101

11 | 13 = 15 (00001111)

## ^ (bitwise XOR)

Mengambil dua angka sebagai operan dan melakukan XOR pada setiap bit dari dua angka. Hasil XOR adalah 1 jika kedua bit berbeda.

Contoh:

11 = 00001011

13 = 00001101

11 ^ 13 = 6 (00000110)

## << (left shift)

Mengambil dua angka, menggeser bit operan pertama ke kiri, operan kedua menentukan jumlah tempat yang akan digeser.

Contoh:

11 = 00001011

11 << 2 = 44 (00101100)

# >> (right shift)

Mengambil dua angka, menggeser bit operan pertama ke kanan, operan kedua menentukan jumlah tempat yang akan digeser.

Contoh:

11 = 00001011

11 >> 1 = 5 (00000101)

## ~ (bitwise NOT)

Mengambil suatu angka dan membalikkan semua bitnya.

Contoh:

11 = 00001011

~11 = -12 (11110100)
