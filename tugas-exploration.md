# Bitwise Operator di C/C++

Bitwise adalah operator khusus untuk menangani operator logika bilangan biner dalam bentuk bit. Dalam C, ada 6 operator bitwise.

## 1. Bitwise AND Operator &
Operator & akan mengambil dua angka sebagai operan dan melakukan *AND* kepada setiap bit dari kedua angka tersebut. Hasil dari *AND* adalah 1 jika dan hanya jika kedua bit adalah 1.

Contoh: 
```
12 (00001100) & 25 (00011001) = 8 (00001000)
```
## 2. Bitwise OR Operator | 
Operator | akan mengambil dua angka sebagai operan dan melakukan *OR* untuk setiap bit dari kedua angka tersebut. Hasil dari *OR* adalah salah satu dari kedua bit adalah 1.

Contoh:
```
12 (00001100) | 25 ( 00001100) = 29 (00001100)
```
## 3. Bitwise XOR Operator ^
Operator ^ akan mengambil dua angka sebagai operan dan melakukan *OR* untuk setiap bit dari kedua angka tersebut. Hasil dari *XOR* adalah 1 jika kedua bit berbeda.

Contoh:
```
12 (00001100) | 25 ( 00001100) = 21 (00010101)
```

## 4. Left shift Operator <<
Operator << akan menggeser semua bit ke arah kiri sejumlah spesifik bit tertentu. Posisi bit yang telah dikosongkan oleh operator shift kiri diisi dengan 0. Simbol dari operator shift kiri adalah <<.

Contoh:
```
212 = 11010100 (Dalam biner)
212<<1 = 110101000 (Dalam biner) [Geser kiri satu bit]
212<<0 = 11010100 (geser sejumlah 0)
212<<4 = 110101000000 (dalam biner) =3392(Dalam desimal)
```

## 5. Right shift operator >>
Operator >> menggeser semua bit ke kanan sejumlah spesifik bit tertentu. Posisi bit yang telah dikosongkan oleh operator shift kanan diisi dengan 0. Simbol dari operator shift kanan adalah >>.

Contoh:
```
212 = 11010100 
212 >> 2 = 00110101 (Geser kanan dua bit)
212 >> 7 = 00000001 
212 >> 8 = 00000000 
212 >> 0 = 11010100 
```
## 6. Bitwise NOT operator ~
Operator ~ akan mengambil satu angka dan melakukan invers atau membalikkan setiap bit yang ada di dalam angka tersebut.

Contoh: 
```
~ 35 (00100011) =220 (11011100)
```
