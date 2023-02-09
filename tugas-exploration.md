># **Operator Bitwise dalam C**
> Komputer dan Micro Controller membaca data dalam bentuk binary (0 atau 1). Setiap nilai dapat direpresentasikan dalam bentuk binary. Dalam C, terdapat operator-operator yang dapat mengoperasikan bentuk binary dari sebuah nilai. Pada kasus ini, type dari nilai tersebut dibatasi hanya pada integer. Ada 6 operator bitwise dalam C yaitu &, |, <<, >>, ~, ^.
>> ### **1. Bitwise AND "&"**
>> Operator ini akan memproses bit per bit dari kedua variabel. Jika kedua bit sama-sama 1, maka hasilnya juga 1, selain kondisi tersebut, nilai akhirnya adalah 0.
>> Contoh :
>> ```
>> a = 5 (desimal) = 00000101 (biner)
>> b = 9 (desimal) = 00001001 (biner)
>> a & b (Hasilnya 00000001)
>> ```
>
>> ### **2. Bitwise OR "|"** 
>> Operator ini akan memproses bit per bit dari kedua variabel. Hasilnya akan bernilai 0 jika kedua bit bernilai 0, selain itu nilai bit akan di set menjadi 1.
>> Contoh :
>> ```
>> a = 5 (desimal) = 00000101 (biner)
>> b = 9 (desimal) = 00001001 (biner)
>> a | b (Hasilnya 00001101)
>> ```
>
>> ### **3. Bitwise XOR "^"**
>> Operator ini akan memproses bit per bit dari kedua variabel. Hasilnya akan bernilai 1 jika salah satu dari kedua variabel bernilai 1 (namun tidak keduanya). Atau dengan kata lain jika kedua bit berlainan, hasilnya 1 tapi kalau sama-sama 0 atau sama-sama 1, hasilnya 0.
>> Contoh :
>> ```
>> a = 5 (desimal) = 00000101 (biner)
>> b = 9 (desimal) = 00001001 (biner)
>> a ^ b (Hasilnya 00001100)
>> ```
>
>> ### **4. Bitwise NOT "~"**
>> Operator ini akan membalikkan nilai bit sebuah variabel dari 0 menjadi 1, dan 1 menjadi 0.
>> Contoh :
>> ```
>> a = 5 (desimal) = 00000101 (biner)
>> ~a (Hasilnya 11111010)
>> ```
>
>> ### **5. Left Shift "<<"**
>> Operator ini akan menggeser posisi bit dalam variabel a ke kiri sebanyak 1 tempat. Dan posisi bit yang kosong akan tertulis sebagai 0.
>> Contoh :
>> ```
>> a = 5 (desimal) = 00000101 (biner)
>> ~a (Hasilnya 00001010)
>> ```
>
>> ### **6. Right Shift ">>"**
>> Operator ini akan menggeser posisi bit dalam variabel a ke kanan sebanyak 1 tempat. Dan posisi bit yang kosong akan tertulis sebagai 0.
>> Contoh :
>> ```
>> a = 5 (desimal) = 00000101 (biner)
>> ~a (Hasilnya 00000010)
>> ```
