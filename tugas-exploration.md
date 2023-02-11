# Tugas Eksplorasi: Binary Representation
Catatan: Untuk mengakses program yang digunakan dalam penjelasan ini, silakan akses `tugas-exploration.c` yang tertera.

<p>&nbsp;</p>

## Daftar Isi
1. [Operator dan Operator Bitwise](#operator-dan-operator-bitwise-)
2. [Fungsi dari Operator Bitwise](#fungsi-dari-operator-bitwise-)
3. [Contoh Implementasi](#contoh-implementasi-)

<p>&nbsp;</p>

## Operator dan Operator Bitwise <a name = "Operator"></a>

~~Nomor yang ada tuju sedang tidak aktif....~~ Bukan operator yang buat telepon, ya. Operator dalam C merupakan suatu simbol yang merepresentasikan perintah tugas atau operasi tertentu pada sebuah data. Operasi ini melingkupi pemrosesan data, pengubahan data, dan pengambilan data. 

Salah satu operator yang dapat ditemukan dalam C adalah operator bitwise. Operator ini akan melakukan tugas pada bit individual pada nilai integer.

Jenis-jenis operator bitwise dalam C antara lain adalah:
1. `&` (bitwise AND)
2. `|` (bitwise OR)
3. `^` (bitwise XOR)
4. `~` (bitwise NOT)
5. `<<` (left shift)
6. `>>` (left shift)

<p>&nbsp;</p>

## Fungsi dari Operator Bitwise <a name = "Operator_f"></a>

### 1. `&` (bitwise AND)
- Masing-masing bit dari operand kiri dan operand kanan dibandingkan satu per satu.
- Jika kedua bit sama-sama 1, maka bit hasil akan menjadi 1.
- Jika salah satu atau kedua bit bernilai 0, maka bit hasil akan menjadi 0.

### 2. `|` (bitwise OR)

- Masing-masing bit dari operand kiri dan operand kanan dibandingkan satu per satu.
- Jika salah satu atau kedua bit bernilai 1, maka bit hasil akan menjadi 1.
- Jika kedua bit sama-sama 0, maka bit hasil akan menjadi 0.

### 3. `^` (bitwise XOR)
- Masing-masing bit dari operand kiri dan operand kanan dibandingkan satu per satu.
- Jika kedua bit berbeda (satu bernilai 1 dan satu bernilai 0), maka bit hasil akan menjadi 1.
- Jika kedua bit sama (sama-sama 1 atau sama-sama 0), maka bit hasil akan menjadi 0.

### 4. `~`(bitwise NOT)
- Mengubah setiap bit dari operand menjadi kebalikannya (0 menjadi 1 dan sebaliknya).

### 5. `<<` (left shift)
- Mengalikan operand kiri dengan 2 pangkat jumlah shift yang ditentukan oleh operand kanan.

### 6. `>>` (right shift)
- Mengalikan operand kiri dengan 1/2 pangkat jumlah shift yang ditentukan oleh operand kanan.

<p>&nbsp;</p>

## Contoh Implementasi <a name = "Operator_imp"></a>

Daripada dibawa pusing, ayo langsung lihat implementasinya!

### Kode yang digunakan:
```c
#include <stdio.h>

int main() {
   int a = 69, b = 42;

   printf("a & b = %d\n", a & b);
   printf("a | b = %d\n", a | b);
   printf("a ^ b = %d\n", a ^ b);
   printf("~a = %d\n", ~a);
   printf("a << 2 = %d\n", a << 2);
   printf("b >> 1 = %d\n", b >> 1);

   return 0;
}
```

### Hasil

```c
a & b = 0
a | b = 111
a ^ b = 111
~a = -70
a << 2 = 276
b >> 1 = 21
```

### Penjelasan

 ### Operator & (AND)

Nilai bit 1 hanya akan didapatkan jika kedua bit pada posisi yang sama bernilai 1.

Ilustrasi binary:
```
a (1000101) & b (0101010) = 0000000
```

 #### Operator | (OR)

Nilai bit 1 akan didapatkan jika salah satu bit pada posisi yang sama bernilai 1.

Ilustrasi binary:
```
a (1000101) | b (0101010) = 1101111
```

 #### Operator ^ (XOR)

Nilai bit 1 akan didapatkan jika salah satu bit pada posisi yang sama bernilai 1 dan kedua bit tidak sama.

Ilustrasi binary:
```
a (1000101) ^ b (0101010) = 1101111
```

 #### Operator ~ (NOT)

Digunakan untuk membalikkan nilai dari bit, yaitu 0 menjadi 1 dan 1 menjadi 0.

Ilustrasi binary:
```
~a (1000101) = 0111010
```
Jika kita mengambil representasi biner dari angka positif (69) yaitu 1000101, maka representasi biner dari angka negatif (-70) adalah tanda komplement dari 1000101 yaitu 0111010.

#### Operator << (Left Shift)

Digunakan untuk memindahkan posisi bit ke kiri sebanyak jumlah yang ditentukan.

Ilustrasi binary:
```
a (1000101) << 2 = 100010100
```

#### Operator >> (Right Shift)

Digunakan untuk memindahkan posisi bit ke kanan sebanyak jumlah yang ditentukan.

Ilustrasi binary:
```
b (0101010) >> 1 = 0010101
```

<p>&nbsp;</p>
