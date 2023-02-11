OPERATOR BITWISE
Operator Bitwise adalah suatu tipe operator yang melakukan operasi pada bit individual dalam nilai yang disimpan dalam memori komputer
1. Operator & (AND)
Operator ini akan membaca setiap bit pada kedua operand dan akan mengecek apabila kedua nilai bit individual bernilai sama sama 1 dan apabila bener akan mengembalikan 1 dan salah akan mengembalikan 0

contoh: terdapat variabel a dan b yang masing masing bernilai 5 dan 3
yang memiliki binary representation untuk masing masing 5 -> 00000101 dan 3 -> 00000011
apabila kita melakukan a & b maka akan mengeluarkan suatu nilai yang memiliki binary representation 00000001 karena yang memiliki angka 1 pada kedua bit hanyalah bit terakhir

2. Operator | (OR)
Operator ini akan membaca setiap bit pada kedua operand dan akan mengecek apabila salah satu dari nilai bit individual bernilai 1 dan apabila benar akan mengembalikan 1 dan salah akan mengembalikan 0

contoh: terdapat variabel a dan b yang masing masing bernilai 5 dan 3
yang memiliki binary representation untuk masing masing 5 -> 00000101 dan 3 -> 00000011
apabila kita melakukan a | b akan mengeluarkan suatu nilai yang memiliki binary representation 00000111 karena pada bit terakhir sampai bit ke tiga terakhir ada minimal 1 bit yang bernilai 1 sehingga mengembalikan nilai 1 juga

3. Operator ^ (XOR)
Operator ini akan membaca setiap bit pada kedua operand dan akan mengecek apabila kedua operand bernilai BERBEDA dan apabila benar akan mengeluarkan angka 1 dan salah mengeluarkan angka 0

contoh: terdapat variabel a dan b yang masing masing bernilai 5 dan 3
yang memiliki binary representation untuk masing masing 5 -> 00000101 dan 3 -> 00000011
apabila kita melakukan a ^ b akan mengeluarkan suatu nilai yang memiliki binary representation 00000110 karena bit yang memiliki nilai yang berbeda hanya bit kedua terakhir dan bit ketiga terakhir sehingga mengeluarkan angka 1 pada posisi tersebut dan 0 di tempat yang lain

4. Operator << (Left shift)
Operator ini akan menggeser kekiri setiap bit pada Operand dikiri sebanyak operand di kanan 
contoh: suatu variabel a memiliki nilai 5 yang memiliki binary representation 00000101
apabila kita melakukan a << 2 maka yang akan ditampilkan adalah sebuah nilai yang memiliki binary representation 00010100

5. Operator >> (Right shift)
Operator ini akan menggeser kekanan setiap bit pada Operand dikiri sebanyak operand di kanan 
contoh: suatu variabel a memiliki nilai 5 yang memiliki binary representation 00000101
apabila kita melakukan a >> 2 maka yang akan ditampilkan adalah sebuah nilai yang memiliki binary representation 00000001

6. Operator ~ (NOT)
Operator ini akan mengubah semua nilai bit operand yang tadinya 1 menjadi 0 dan yang 0 menjadi 1
contoh: suatu variabel a memiliki nilai 5 yang memiliki binary representation 00000101
apabila kita melakukan ~a maka akan menghasilkan sebuah nilai yang memiliki binary representation 11111010
