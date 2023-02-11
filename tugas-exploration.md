# Operasi Bitwise pada Bahasa C

## AND (&)

Operasi & pada C akan melakukan AND pada tiap bit dari dua operan, yaitu jika keduanya 1 maka hasilnya 1.
> contoh:
3 (00000011) % 7 (00000111) =  3 (00000011)

## OR (|)

Operasi | pada C akan melakukan OR pada tiap bit dari dua operan, yaitu jika salah-satunya 1 maka hasilnya 1.
> contoh:
3 (00000011) | 7 (00000111) = 7 (00000111)

## XOR (^)

Operasi ^ pada C akan melakukan XOR pada tiap bit dari dua operan, yaitu jika bitnya berbeda maka hasilnya 1.
> contoh:
3 (00000011) ^ 7 (00000111) = 4 (00000100)

## Left Shift (<<)

Operasi << pada C akan melakukan pergeseran nilai bit sebanyak langkah yang dimaksud ke arah kiri.
> contoh:
3 (00000011) ^ 2 = 12 (00001100)

## Right Shift (>>)

Operasi >> pada C akan melakukan pergeseran nilai bit sebanyak langkah yang dimaksud ke arah kanan.
> contoh:
7 (00000111) >> 2 = 1 (00000001)

## Not (~)

Operasi ~ pada C akan melakukan invers untuk setiap nilai bit pada angka yang dimaksud.
> contoh:
~3 = -4 (11111100)
