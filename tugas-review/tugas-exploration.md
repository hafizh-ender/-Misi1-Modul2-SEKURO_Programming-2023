Bitwise adalah operator khusus untuk menangani operasi logika bilangan biner dalam bentuk bit.

Bilangan biner sendiri merupakan jenis bilangan yang hanya terdiri dari 2 jenis angka, yakni 0 dan 1. Jika nilai asal yang dipakai bukan bilangan biner, akan dikonversi secara otomatis oleh compiler C menjadi bilangan biner. Misalnya 7 desimal = 0111 dalam bilangan biner.

Dalam penerapannya, operator bitwise tidak terlalu sering dipakai, kecuali anda sedang membuat program yang harus memproses bit-bit komputer. Selain itu operator ini cukup rumit dan harus memiliki pemahaman tentang sistem bilangan biner. Dalam bahasan kali ini saya menganggap anda sudah paham beda antara bilangan biner (basis 2) dan bilangan desimal (basis 10).

Bahasa C mendukung 6 jenis operator bitwise. Daftar lengkapnya dapat dilihat pada tabel berikut:

Operator	Nama			Contoh	Biner			Hasil (biner)	Hasil (decimal)
&		AND			10 & 12	1010 & 1100		1000			8
|		OR			10 | 12	1010 | 1100		1110			14
^		XOR			10 ^ 12	1010 ^ 1100		0110			6
~		NOT			~ 10	 	~1010			0101			-11 (two complement)
<<		Left shift		10 << 1	1010 << 1		10100			20
>>		Right shift		10 >> 1	1010 >> 1		101			5


Contoh Kode Program Operator Bitwise Bahasa C
#include <stdio.h>
 
int main(void) {
  int a, b, hasil; 
  a = 181;
  b = 108;
 
  hasil = a & b;
  printf("a & b : %d \n",hasil);
 
  hasil = a | b;
  printf("a | b : %d \n",hasil);
 
  hasil = a ^ b;
  printf("a ^ b : %d \n",hasil);
 
  hasil = ~a;
  printf("~a : %d \n",hasil);
 
  hasil = a >> 1;
  printf("a >> 1 : %d \n",hasil);
 
  hasil = b << 2;
  printf("b << 2 : %d \n",hasil);
  return 0;
}

OUTPUT YANG DIKELUARKAN
a & b : 36
a | b : 253
a ^ b : 217
~a : -182
a >> 1 : 90
b << 2 : 432

- Operasi bitwise “and” ini akan memproses bit per bit dari kedua variabel, jika kedua bit sama-sama 1, maka hasilnya juga 1, selain kondisi tersebut, nilai akhirnya adalah 0. Berikut perhitungan bitwise “and”:

	a     = 10110101
	b     = 01101100
      	  --------
	a & b = 00100100 = 36 (desimal)
	Dan dari hasil printf, terlihat bahwa hasilnya adalah 36 (dalam bentuk desimal).

- Operasi | (OR), hasilnya akan bernilai 0 jika kedua bit bernilai 0, selain itu nilai bit akan di set menjadi 1. Berikut cara perhitungan bitwise “or”:

	a     = 10110101
	b     = 01101100
      	  --------
	a | b = 11111101 = 253 (desimal)

- Operasi ^ (XOR), hasilnya akan bernilai 1 jika salah satu dari kedua variabel bernilai 1 (namun tidak keduanya). Atau dengan kata lain jika kedua bit berlainan, hasilnya 1 tapi kalau sama-sama 0 atau sama-sama 1, hasilnya 0.

	Berikut cara perhitungan bitwise “xor”:

	a       = 10110101
	b       = 01101100
      	    --------
	$a ^ $b = 11011001 = 217 (desimal)

- Operasi ~ atau not, yang akan membalikkan nilai bit sebuah variabel dari 0 menjadi 1, dan 1 menjadi nol. Namun perhitungan bit not ini sedikit membingungkan karena jika kita hanya membalikkan seluruh bit saja, hasilnya tidak sesuai dengan apa yang dihitung oleh compiler C:

	a  = 10110101
	     --------
	~a = 01001010 = 74 (desimal) ==> salah ???

	
	Dari hasil menjalankan program, dapat dilihat bahwa ~a = -182, dari manakah datangnya angka -182?
	Ini berkaitan dengan cara compiler bahasa C menyimpan angka biner (dan juga hampir semua bahasa pemrograman komputer modern). Angka biner di dalam bahasa C disimpan dalam format “Two’s complement”. Penjelasan tentang “Two’s complement” ini cukup panjang, jika tertarik saya sudah membahasnya lengkap di buku Pascal Uncover, atau bisa ke Two’s complement Wikipedia.
	Secara singkat, rumusnya adalah -a - 1, sehingga ~a = -181 - 1 = -182 (desimal)

- Operator shift right “>>” dimana bahasa C akan menggeser posisi bit dalam variabel a ke kanan sebanyak 1 tempat. Berikut proses yang terjadi:

	a      = 10110101 = 181
	a >> 1 =  1011010 = 90 (desimal)

	Operator shift right menggeser nilai biner variabel a ke arah kanan, sehingga digit paling kanan akan dihapus. Operator shift right ini akan menghasilkan nilai asal / 2. Dalam contoh kita, hasilnya adalah 180/2 = 90 (dibulatkan). Setiap penggeseran 1 tempat ke kanan akan membagi 2 nilai asal.

- Operator shift left “<<” dimana nilai variabel b akan digeser sebanyak 2 digit ke kiri. Berikut proses yang terjadi:

	b       =   01101100 = 108
	b << 1  =  011011000 = 216 (desimal)
	b << 2  = 0110110000 = 432 (desimal)

	Ketika hasil pergeseran ke kiri, digit paling kanan akan diisi angka 0. Setiap penggeseran 1 tempat ke kiri akan mengkali 2 nilai asal. Karena variabel b berisi desimal 108, maka hasil dari << 2 sama dengan 108 * 2 = 216, 216 * 2 = 432.

