#include <stdio.h>

int main() {
    /* Pada file ini, kalian diminta untuk menjawab tiap soal */
    /* dengan menampilkan hasilnya pada layar */

    /* Contoh */
    printf("0. Sebutkan nama lengkap dari Kak Nigel!\n");
    printf("Jawaban: Nigel Sahl\n");

    /* Nomor 1 [5 point] */
    printf("1. Sebutkan jenis-jenis primitive data type di C!\n");
    printf("Jawaban: char, int, double, float");
    printf("char adalah karakter, int adalah integer (bilangan bulat), double adalah bilangan desimal yang lebih spesifik dengan ukuran 8 byte, float adalah \n");
    printf("bilangan desimal dengan ukuran 4 byte. \n"); // lengkapi di sini. jawaban tidak dibatasi dalam 1 baris

    /* Nomor 2 [5 point] */
    printf("2. Sebutkan perbedaan fungsi dan prosedur!\n");
    printf("Jawaban: Fungsi merupakan subprogram yang akan mengembalikan suatu value, sementara prosedur merupakan subprogram yang akan mengubah suatu state\n");
    printf("dari program tanpa mengembalikan value. \n"); // lengkapi di sini. jawaban tidak dibatasi dalam 1 baris

    /* Nomor 3 [5 point] */
    int **val;
    printf("3. Apa tipe data dari deklarasi variabel di atas?");
    printf("Jawaban: val merupakan pointer yang menunjuk ke pointer yang menunjuk ke sebuah integer.");

    return 0;
}
