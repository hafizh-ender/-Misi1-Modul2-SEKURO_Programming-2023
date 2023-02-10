#include <stdio.h>

int main() {
    /* Pada file ini, kalian diminta untuk menjawab tiap soal */
    /* dengan menampilkan hasilnya pada layar */

    /* Contoh */
    printf("0. Sebutkan nama lengkap dari Kak Nigel!\n");
    printf("Jawaban: Nigel Sahl\n");

    /* Nomor 1 [5 point] */
    printf("1. Sebutkan jenis-jenis primitive data type di C!\n");
    printf("Jawaban:\n");
    printf("Ada 4 yaitu :\n"); // lengkapi di sini. jawaban tidak dibatasi dalam 1 baris
    printf("1.Int, tipe data numerik yang biasa digunakan apabila bertemu dengan bilangan bulat, seperti 1, 27, 100, dll.\n");
    printf("2.Float, Tipe bilangan pecahan atau floating point adalah bilangan yang menangani bilangan desimal atau perhitungan secara detail.\n");
    printf("3.Char, Tipe data karakter tunggal yang biasa didefinisikan dengan tanda petik (‘) di awal dan di akhir karakternya.\n");
    printf("4.Boolean, Tipe data boolean merupakan tipe yang memiliki dua nilai yaitu benar (true) atau salah (false).\n\n");


    /* Nomor 2 [5 point] */
    printf("2. Sebutkan perbedaan fungsi dan prosedur!\n");
    printf("Jawaban:\n");
    printf("Prosedur adalah Prosedur adalah suatu program terpisah dalam blok sendiri yang berfungsi sebagai subprogram (program bagian). Procedure biasanya bersifat suatu aktifitas seperti meghitung faktorial sebuah bilangan, mencari bilangan genap dari sekumpulan bilangan ,dsb.\n"); // lengkapi di sini. jawaban tidak dibatasi dalam 1 baris
    printf("Fungsi sama seperti halnya dengan prosedur, namun tetap ada perbedaannya yaitu fungsi mempunyai output dengan tipe variabel yang kita tentukan. Berbeda dengan procedure yang bisa tidak menggunakan parameter, fungsi harus menggunakan parameter dalam penggunaannya.\n\n");
    printf("Perbedaan fungsi dengan prosedur\n");
    printf("Pada fungsi, nilai yang dikirimkan balik terdapat pada nama fungsinya (kalau pada prosedur pada parameter yang dikirimkan secara acuan).\n");
    printf("Karena nilai balik berada di nama fungsi tersebut, maka fungsi tersebut dapat langsung digunakan untuk dicetak hasilnya. Atau nilai fungsi tersebut dapat juga langsung dipindahkan ke pengenal variable yang lainnya.\n");
    printf("Nama Prosedur tidak dapat digunakan lagsung tidak seperti pada Nama Fungsi, yang dapat langsung digunakan dari sebuah prosedur adalah parameternya yang mengandung nilai balik.\n\n");

    
    /* Nomor 3 [5 point] */
    int **val;
    printf("3. Apa tipe data dari deklarasi variabel di atas?");
    printf("Jawaban:\n");
    printf("double pointer to int.\n");

    return 0;
}