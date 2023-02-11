# BITWISE OPERATOR IN C
### Bitwise operator adalah operator yang digunakan untuk memproses pola bit dari suatu bilangan. Terdapat 6 bitwise operator :

## 1. Operator & (bitwise AND)
Operator ini membutuhkan dua angka sebagai operan dan akan memproses "AND" yang akan menghasilkan 1 jika bit kedua bilangan adalah 1.

Contoh : 
```
7 (00000111) and 11 (00001011) = 00000011 (3)
```

## 2. Operator | (bitwise OR)
Operator ini membutuhkan dua angka sebagai operan dan akan memproses "OR" yang akan menghasilkan 1 jika salah satu bit kedua bilangan adalah 1.

Contoh : 
```
7 (00000111) and 11 (00001011) = 00001111 (15)
```

## 3. Operator ^ (bitwise XOR)
Operator ini membutuhkan dua angka sebagai operan dan akan memproses "XOR" yang akan menghasilkan 1 jika kedua bit bilangan berbeda

Contoh : 
```
7 (00000111) and 11 (00001011) = 00001100 (12)
```

## 4. Operator << (left shift)
Operator ini membutuhkan satu angka sebagai operan dan satunya lagi akan menentukan berapa jauh angka akan bergeser ke kiri

Contoh : 
```
7 (00000111) << 1 = 14 (00001110)
```

## 5. Operator >> (right shift)
Operator ini membutuhkan satu angka sebagai operan dan satunya lagi akan menentukan berapa jauh angka akan bergeser ke kanan

Contoh : 
```
7 (00000111) >> 1 = 3 (00000011)
```

## 6. Operator ~ (bitwise NOT)
Operator ini membutuhkan satu angka dan akan membalikkan nilai bit dari angka tersebut

Contoh : 
```
~ 7 (00000111) = -8 (11111000)
```