# Tugas Exploration Operator Bitwise dalam C

## Operator bitwise yang ada dalam c
- & = Operasi bitwise “and” ini akan memproses bit per bit dari kedua variabel, jika kedua bit sama-sama 1, maka hasilnya juga 1, selain kondisi tersebut, nilai akhirnya adalah 0.
- | = Operasi bitwise “or” ini akan memproses bit per bit dari kedua variabel, jika kedua bit sama-sama 0, maka hasilnya juga 0, selain kondisi tersebut, nilai akhirnya adalah 1.
- ^ = Operasi bitwise “xor” ini akan memproses bit per bit dari kedua variabel, jika kedua bit bernilai beda, maka hasilnya juga 1, jika kedua bit bernilai sama, nilai akhirnya adalah 0.
- ~ = Operasi bitwise "not” ini akan memproses bit per bit dari suatu variabel, yang akan memberikan nilai ke balikan dari nilai bit tersebut.
- >> = Operasi bitwise “shift right” ini akan menggeser nilai biner variabel a ke arah kanan, sehingga digit paling kanan akan dihapus. Operator shift right ini akan menghasilkan nilai asal / 2.
- << = Operasi bitwise “shift left” ini akan menggeser nilai biner variabel a ke arah kiri, sehingga digit paling kiri akan diisi nilai 0. Operator shift right ini akan menghasilkan nilai asal * 2.

##  Contoh pengunaan operator bitwise 
- Hasil dari operasi 2 & 3 = 2
- Hasil dari operasi 2 | 3 = 3
- Hasil dari operasi 2 ^ 3 = 1
- Hasil dari operasi ~2 = -3
- Hasil dari operasi 2 >> 1 = 1
- Hasil dari operasi 2 << 1 = 4