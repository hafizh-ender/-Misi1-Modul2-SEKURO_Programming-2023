# Bitwise Operators

Bitwise Operator adalah operasi terhadap suatu variabel yang dilakukan pada level bit. Dalam kata lain bisa disebut juga sebagai operasi yang memodifikasi susunan biner suatu variabel.

Bitwise Operators dalam C ada 6, yaitu:

1. Operator & (AND)

    Operator ini akan membandingkan susunan biner dua variabel dan akan mengubah angkanya menjadi 1 pada urutan tertentu apabila biner pada kedua angka pada urutan itu juga 1 dan akan menjadi 0 apabila hanya salah satu yang bernilai 1.
    >Contoh:
    >
    >2 & 7 = 2
    
    >Angka biner 2 adalah 00000010 dan angka biner 7 adalah 00000111.
    >
    >Keduanya memiliki angka biner bernilai satu pada urutan ketujuh. Karena itu hasil akhirnya adalah 00000010 dan ini adalah angka biner dari 2.

2. Operator | (OR)

    Operator ini akan membandingkan susunan biner dua variabel dan akan mengubah angkanya menjadi 1 pada urutan tertentu apabila salah satu biner dari kedua angka pada urutan itu bernilai 1 dan akan menjadi 0 apabila keduanya bernilai 1.
    >Contoh:
    >
    >2 & 7 = 5
    
    >Angka biner 2 adalah 00000010 dan angka biner 7 adalah 00000111.
    >
    >Salah satu dari keduanya memiliki angka biner bernilai 1 pada urutan enam dan delapan. Kemudian memiliki nilai sama-sama 1 pada urutan ketujuh. Karena itu hasil akhirnya adalah 00000101 dan ini adalah angka biner dari 5.

3. Operator ^ (XOR)

    Operator ini akan membandingkan susunan biner dua variabel dan akan mengubah angkanya menjadi 1 pada urutan tertentu apabila dari kedua angka pada urutan itu berbeda.
    >Contoh:
    >
    >2 & 7 = 5
    
    >Angka biner 2 adalah 00000010 dan angka biner 7 adalah 00000111.
    >
    >Kedua angka memiliki biner yang berbeda pada urutan enam dan delapan. Karena itu hasil akhirnya adalah 00000101 dan ini adalah angka biner dari 5.

4. Operator << (left shift)

    Operator ini akan menggeser ke kiri susunan biner angka yang sebelah kiri sebanyak angka disebelah kanan.
    >Contoh:
    >
    >7 << 2 = 28
    
    >Angka biner dari 7 adalah 00000111. Karena angka di sebelah kanan adalah 2, maka susunan biner angka 7 digeser ke kiri sejauh 2 langkah. Maka hasilnya adalah 00011100 dan ini adalah angka biner dari 28.

5. Operator >> (right shift)

    Operator ini akan menggeser ke kanan susunan biner angka yang sebelah kiri sebanyak angka disebelah kanan.
    >Contoh:
    >
    >7 << 2 = 1
    
    >Angka biner dari 7 adalah 00000111. Karena angka di sebelah kanan adalah 2, maka susunan biner angka 7 digeser ke kanan sejauh 2 langkah. Maka hasilnya adalah 00000001 dan ini adalah angka biner dari 1.

6. Operator ~ (NOT)

    Operator ini akan mengubah semua angka 0 menjadi 1 dan sebaliknya.
    >Contoh:
    >
    >~7 = 248
    
    >Angka biner yang lengkap dari 7 adalah 0000 0000 0000 0000 0000 0000 0000 0111. Kemudian setelah angka 0 diganti menjadi 1 dan angka 1 diganti menjadi nol maka akan jadi 1111 1111 1111 1111 1111 1111 1111 1000. Untuk nilai `int`, ini adalah angka biner untuk -8. Sedangkan untuk `unsigned int`, ini adalah angka biner untuk 4294967288. Karena disini kita menggunakan `int` saja, maka nilai yang dikeluarkan adalah -8.