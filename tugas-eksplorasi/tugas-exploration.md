# OPERATOR BITWISE

1. Bitwise AND (&)  
Memberikan operasi AND pada setiap bit. Hasil operasi AND adalah 1 jika dan hanya jika kedua bit sama-sama 1.
Contoh: 
~~~c
// 5 = 00000101, 9 = 00001001
printf("%d", 5 & 9); // Output: 1 (00000001)
~~~

2. Bitwise OR (|)
Memberikan operasi OR pada setiap bit. Hasil operasi OR adalah 1 jika salah satu bit adalah 1.
Contoh:
~~~c
// 5 = 00000101, 9 = 00001001
printf("%d", 5 | 9); // Output: 13 (00001101)
~~~

3. Bitwise XOR (^)
Memberikan operasi XOR pada setiap bit. Hasil operasi XOR adalah 1 jika salah satu bit adalah 1, tetapi bukan keduanya.
Contoh:
~~~c
// 5 = 00000101, 9 = 00001001
printf("%d", 5 ^ 9); // Output: 12 (00001100)
~~~

4. Bitwise NOT (~)
Memberikan operasi NOT pada setiap bit. Hasil operasi NOT adalah 1 jika bit adalah 0, dan 0 jika bit adalah 1.
Contoh:
~~~c
// 5 = 00000101
printf("%d", ~5); // Output: -6 (11111010)
~~~

5. Bitwise Left Shift (<<)
Memindahkan bit ke kiri sebanyak n kali. Bit yang dipindahkan akan diisi dengan 0.
Contoh:
~~~c
// 5 = 00000101
printf("%d", 5 << 1); // Output: 10 (00001010)
~~~

6. Bitwise Right Shift (>>)
Memindahkan bit ke kanan sebanyak n kali. Bit yang dipindahkan akan diisi dengan 0.
Contoh:
~~~c
// 5 = 00000101
printf("%d", 5 >> 1); // Output: 2 (00000010)
~~~
