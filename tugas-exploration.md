# Operator Bitwise dalam Bahasa C

## 1. Operator & (AND)
Operator ini mengambil dua angka sebagai operand dan menerapkan operasi AND untuk setiap bit penyusun kedua angka. Operator ini mengembalikan nilai bit 1 hanya jika kedua bit bernilai 1.

Hasil operasi nilai bit:
- 1 dengan 1 menghasilkan 1
- 1 dengan 0 menghasilkan 0
- 0 dengan 0 menghasilkan 0

Contoh:

5 & 11 ---> menghasilkan 1

Hal ini karena angka 5 dalam binary adalah 101 atau dapat ditulis 0101, sedangkan angka 11 dalam binary adalah 1011.

0101 & 1011 ---> 0001

Angka binary 0001 dalam int bernilai 1.

## 2. Operator | (OR)
Operator ini mengambil dua angka sebagai operand dan melakukan operasi OR untuk setiap bit penyusun kedua angka. Operator ini mengembalikan nilai bit 1 jika ada salah satu dari bit yang dibandingkan yang bernilai 1.

Hasil operasi nilai bit:
- 1 dengan 1 menghasilkan 1
- 1 dengan 0 menghasilkan 1
- 0 dengan 0 menghasilkan 0

Contoh:

5 | 11 ---> menghasilkan 15

0101 | 1011 ---> 1111

Angka binary 1111 dalam int bernilai 15.

## 3. Operator ^ (XOR)
Operator ini mengambil dua angka sebagai operand dan melakukan operasi XOR untuk setiap bit penyusun kedua angka. Operator ini mengembalikan nilai bit 1 jika kedua nilai bit yang dibandingkan berbeda.

Hasil operasi nilai bit:
- 1 dengan 1 menghasilkan 0
- 1 dengan 0 menghasilkan 1
- 0 dengan 0 menghasilkan 0

Contoh:

5 ^ 11 ---> menghasilkan 14

0101 ^ 1011 ---> 1110

Angka binary 1110 dalam int bernilai 14.

## 4. Operator << (left shift)
Operator ini mengambil dua angka sebagai operand. Operator ini akan membuat nilai-nilai bit dari operand pertama bergeser ke kiri sebanyak operand kedua.

Contoh:

6 << 2 ---> menghasilkan 24

Angka 6 dalam binary adalah 110 atau dapat dituliskan menjadi 00110.

00110 << 2 ---> 11000

Angka binary 11000 dalam int bernilai 24.

## 5. Operator >> (right shift)
Operator ini mengambil dua angka sebagai operand. Operator ini akan membuat nilai-nilai bit dari operand pertama bergeser ke kanan sebanyak operand kedua.

Contoh:

6 >> 2 ---> menghasilkan 1

Angka 6 dalam binary adalah 110.

110 >> 2 ---> 001

Angka binary 001 dalam int bernilai 1.

## 6. Operator ~ (NOT)
Operator ini mengambil sebuah angka sebagai operand dan membuat seluruh nilai bit dari operand-nya menjadi berlawanan dari sebelumnya. Misal, 1 menjadi 0, sedangkan 0 menjadi 1.

Hasil operasi nilai bit:
- 1 menghasilkan 0
- 0 menghasilkan 1

Contoh:

~25 ---> menghasilkan -26

Angka int 25 dalam binary adalah 11001 atau jika ditulis secara lengkap (8 bit) menjadi 00011001

~00011001 ---> 11100110

Angka binary 11100110 dalam int bernilai 230 atau -(256-230) = -26