# Rangkuman mengenai operator bitwise dalam C.
### Bitwise Operator
> Operator &
Operator ini memberikan hasil 1 jika kedua bit bernilai sama.
Contoh:
//  5(00000101), 9(00001001), 1(00000001)
5 & 9 (mengembalikan nilai 5 & 9 => 1)

> Operator |
Operator ini memberikan hasil 1 jika salah satu dari kedua bit bernilai satu.
Contoh:
//  5(00000101), 9(00001001), 13(00001101)
5 | 9 (mengembalikan nilai 5 | 9 => 13)

> Operator ^
Operator ini memberikan hasil 1 jika kedua bit berbeda nilai
contoh:
//  5(00000101), 9(00001001), 12(00001100)
5 ^ 9 (mengembalikan nilai 5 ^ 9 => 12)

> Operator ~
Operator ini memberikan hasil invers dari tiap digit
contoh:
// 5(00000101), -6(11111010)
~5 (mengembalikan nilai ~5 => -6)

> Operator <<
Operator ini memberikan hasil bit yang digeser ke arah kiri
contoh:
// 9(00001001), 18(00010010)
9<<1 (mengembalikan nilai 9<<1 => 18)

> Operator >>
Operator ini memberikan hasil bit yang digeser ke arah kiri
contoh:
// 9(00001001), 4(00000100)
9>>1 (mengembalikan nilai 9>>1 => 4)


