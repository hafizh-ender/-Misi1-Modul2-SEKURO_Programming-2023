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
    printf("Privitive data type utama C:\n1) int\n2) char\n3) float\n4) double\nModifier primitive data types:\n1) long (long int, long long int, etc)\n2) short (short int, etc)\n3) unsigned (unsigned int, unsigned long int, etc)\n4) signed (default use)\n"); // lengkapi di sini. jawaban tidak dibatasi dalam 1 baris

    /* Nomor 2 [5 point] */
    printf("2. Sebutkan perbedaan fungsi dan prosedur!\n");
    printf("Jawaban:\n");
    printf("Function adalah subprogram yang mengembalikan suatu value\nProcedure adalah subprogram mengubah suatu state dari program dan tidak mengembalikan value\n"); // lengkapi di sini. jawaban tidak dibatasi dalam 1 baris

    /* Nomor 3 [5 point] */
    int **val;
    printf("3. Apa tipe data dari deklarasi variabel di atas?");
    printf("Jawaban:\n");
    printf("Pointer yang menunjuk ke suatu pointer yang menunjuk ke suatu integer\n");

    return 0;
}