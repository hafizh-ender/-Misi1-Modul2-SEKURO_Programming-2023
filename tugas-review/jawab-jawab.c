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
    printf("Jenis-jenis primitive data type di C terdiri atas\n a) Boolean\n b) Numeric\n  i. Character\n  ii. Integral\n    - Integer\n     > Short\n     > Int\n     > Long\n    - Floating point\n     > Float\n     > Double\n"); // lengkapi di sini. jawaban tidak dibatasi dalam 1 baris

    /* Nomor 2 [5 point] */
    printf("2. Sebutkan perbedaan fungsi dan prosedur!\n");
    printf("Jawaban:\n");
    printf("Perbedaan pada prosedur dan fungsi terletak pada pengembalian nilai, dengan prosedur tidak mengembalikan atau mengubah nilai yang diproses,\nsementara fungsi mengubah nilai yang diproses dan memiliki nilai keluaran.\n"); // lengkapi di sini. jawaban tidak dibatasi dalam 1 baris

    /* Nomor 3 [5 point] */
    int **val;
    printf("3. Apa tipe data dari deklarasi variabel di atas?\n");
    printf("Jawaban:\n");
    printf("Tipe data di atas merupakan pointer ke pointer ke integer. Sebelumnya, pointer sendiri merupakan variabel yang berfungsi untuk menyimpan memory address dari variabel lain sebagai valuenya.\n");

    return 0;
}