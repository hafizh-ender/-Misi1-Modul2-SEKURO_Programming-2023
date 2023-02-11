#include <stdio.h>

int main() {
    /* Pada file ini, kalian diminta untuk menjawab tiap soal */
    /* dengan menampilkan hasilnya pada layar */

    /* Contoh */
    printf("0. Sebutkan nama lengkap dari Kak Nigel!\n");
    printf("Jawaban: Nigel Sahl\n\n");

    /* Nomor 1 [5 point] */
    printf("1. Sebutkan jenis-jenis primitive data type di C!\n");
    printf("Jawaban:\n");
    printf("- Integer (int, short int, unsigned short int, unsigned int, long int, unsigned long int, long long int, unsigned long long int),\n"); // lengkapi di sini. jawaban tidak dibatasi dalam 1 baris
    printf("- Character (char, signed char, unsigned char),\n");
    printf("- Floating point (float),\n");
    printf("- Double (double, long double),\n");
    printf("- Void (void)\n\n");

    /* Nomor 2 [5 point] */
    printf("2. Sebutkan perbedaan fungsi dan prosedur!\n");
    printf("Jawaban:\n");
    printf("- Fungsi akan mengembalikan (return) sebuah nilai (value)\n"); // lengkapi di sini. jawaban tidak dibatasi dalam 1 baris
    printf("  sedangkan prosedur secara default tidak mengembalikan nilai.\n");
    printf("- Fungsi tidak bisa memanggil prosedur\n");
    printf("  sedangkan prosedur bisa memanggil fungsi.\n");
    printf("- Fungsi hanya bisa membaca (read) data\n");
    printf("  sedangkan prosedur bisa membaca sekaligus mengubah data (read and modify)\n\n");

    /* Nomor 3 [5 point] */
    int **val;
    printf("3. Apa tipe data dari deklarasi variabel di atas?\n");
    printf("Jawaban:\n");
    printf("double pointer to int atau pointer to pointer to int\n\n");

    return 0;
}
