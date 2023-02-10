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
    printf("Char, int, float, double, short, unsigned, long\n"); // lengkapi di sini. jawaban tidak dibatasi dalam 1 baris

    /* Nomor 2 [5 point] */
    printf("2. Sebutkan perbedaan fungsi dan prosedur!\n");
    printf("Jawaban:\n");
    printf("Fungsi mengembalikan return value, sedangkan prosedur tidak mengembalikan return value\n"); // lengkapi di sini. jawaban tidak dibatasi dalam 1 baris
    printf("Fungsi memiliki akses pada variabel global dan lokal, sedangkan prosedur hanya memiliki akses pada variabel lokal saja\n"); // lengkapi di sini. jawaban tidak dibatasi dalam 1 baris

    /* Nomor 3 [5 point] */
    int **val;
    printf("3. Apa tipe data dari deklarasi variabel di atas?");
    printf("Jawaban:\n");
    printf("double pointer, pointer yang menunjuk pointer lain yang menyimpan sebuah variabel dengan tipe data integer\n");

    return 0;
}