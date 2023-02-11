Operator Bitwise dalam C

1. Operator & (bitwise AND)
    - Menerima 2 buah operan lalu melakukan operasi "AND" pada setiap bit masing-masing operan tersebut. Hasil adalah 1 jika dan hanya jika bit pada kedua operan adalah 1.
    - Contoh Penggunaan:
        5 & 9 (mengembalikan nilai 5 (00000101) & 9 (00001001) = 1 (00000001))

2. Operator | (bitwise OR)
    - Menerima 2 buah operan lalu melakukan operasi "OR" pada setiap bit masing-masing operan tersebut. Hasil adalah 1 jika salah satu dari bit pada kedua operan adalah 1.
    - Contoh penggunaan:
        5 | 9 (mengembalikan nilai 5 (00000101) | 9 (00001001) = 13 (00001101))

3. Operator ^ (bitwise XOR)
    - Menerima 2 buah operan lalu melakukan operasi "XOR" pada setiap bit masing-masing operan tersebut. Hasil adalah 1 jika kedua bit pada operan berbeda.
    - Contoh penggunaan:
        5 ^ 9 (mengembalikan nilai 5 (00000101) ^ 9 (00001001) = 12 (00001100))

4. Operator << (left shift)
    - Menerima 2 buah operan lalu melakukan "left shift" pada operan pertama, dengan operan kedua sebagai penentu banyaknya left shift.
    - Contoh penggunaan:
        5 << 1 (mengembalikan nilai 5 (00000101) << 1 = 10 (00001010))

5. Operator >> (right shift)
    - Menerima 2 buah operan lalu melakukan "right shift" pada operan pertama, dengan operan kedua sebagai penentu banyaknya right shift.
    - Contoh penggunaan:
        9 >> 1 (mengembalikan nilai 9 (00001001) >> 1 = 4 (00000100))

6. Operator ~ (bitwise NOT)
    - Menerima 1 buah operan lalu mengubah semua bitnya.
    - Contoh penggunaan:
        ~5 (mengembalikan nilai ~5 (00000101) = -4 (11111010))