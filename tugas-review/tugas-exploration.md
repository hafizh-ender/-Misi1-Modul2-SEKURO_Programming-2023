# Bitwise Operators in C

## Operator & (AND)
Membandingkan kedua binary dan mengcopy bit jika pada urutan bit di kedua binary bernilai 1. Jika berbeda atau keduanya bernilai 0 maka akan bernilai 0 pada urutan bit tersebut.

Contoh:

3 & 5 = 1

0000 0011 (3)

0000 0101 (5)

------------ &

0000 0001 (1)

## Operator | (OR)
Membandingkan kedua binary dan menghasilkan bit 1 jika pada urutan bit di kedua binary salah satu atau keduanya bernilai 1. Jika keduanya bernilai 0 maka akan bernilai 0 pada urutan bit tersebut.

Contoh:

3 | 5 = 7

0000 0011 (3)

0000 0101 (5)

------------ |

0000 0111 (7)

## Operator ^ (XOR)
Membandingkan kedua binary dan menghasilkan bit 1 jika dan hanya jika pada urutan bit di kedua binary salah satunya  bernilai 1. Jika keduanya bernilai 1 atau keduanya bernilai 0 maka akan bernilai 0 pada urutan bit tersebut. 

Contoh:

3 ^ 5 = 6

0000 0011 (3)

0000 0101 (5)

------------ ^

0000 0110 (6)

## Operator ~ (NOT)
Mengubah bit menjadi 1 jika bernilai 0 dan juga kebalikannya.

Contoh:

~3 = -4

0000 0011 (3)

------------ ~

1111 1100 (-4)

## Operator << (Left shift)
Seluruh urutan bit pada suatu binary di operand kiri digeser ke kiri sebanyak jumlah pada operand kanan dan pada urutan bit yang tergeser akan diisi oleh 0.

Contoh:

3 << 2 = 12

0000 0011 (3)

------------ << 2

0000 1100 (12)

## Operator >> (Right shift)
Seluruh urutan bit pada suatu binary di operand kiri digeser ke kanan sebanyak jumlah pada operand kanan dan pada urutan bit yang tergeser akan diisi oleh 0.

Contoh:

3 >> 2 = 0

0000 0011 (3)

------------ >> 2

0000 0000 (0)
