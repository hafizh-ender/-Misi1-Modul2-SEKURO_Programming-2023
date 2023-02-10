# Operator Bitwise dalam C - Misi 1 Modul 2

Berikut merupakan penjelasan mengenai operator bitwise di dalam C.

## Ada 6 operator bitwise di dalam C, yaitu:

& (AND), | (OR), ^ (XOR), << (left shift), >> (right shift), ~ (NOT)

## Operator ini fungsinya:

Misalnya:

a = 9 (kode bit: 00001001)

b = 100 (kode bit: 01100100)

```
Operator & (AND)
Operator ini melakukan AND dari bit kedua integer, hasil AND adalah 1 jika dan hanya jika kedua kode bit bernilai 1 di kolom sama.
Contoh:
a & b = 0 (kode bit: 00000000).
```
```
Operator | (OR)
Operator ini melakukan OR dari bit kedua integer, hasil OR adalah 1 jika salah satu atau kedua bit kolomnya bernilai 1.
Contoh:
a | b = 109 (kode bit: 01101101)
```
```
Operator ^ (XOR)
Operator ini melakukan XOR dari bit kedua integer, hasil XOR adalah 1 jika kedua bit memiliki nilai berbeda di kolom sama.
Contoh:
a ^ b = 109 (kode bit: 01101101)
```
```
Operator << (left shift)
Operator ini melakukan left shift pada bit pertama, nilai kedua menentukan jumlah kolom bit yang akan di-shift.
Contoh:
a << 1 = 18 (kode bit: 00010010, kolom bit digeser 1 ke kiri)
```
```
Operator >> (right shift)
Operator ini melakukan right shift pada bit pertama, nilai kedua menentukan jumlah kolom bit yang akan di-shift.
Contoh:
a >> 3 = 1 (kode bit: 00000001, kolom bit digeser 3 ke kanan )
```
