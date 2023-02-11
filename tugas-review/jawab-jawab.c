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
    printf("| DataType |    Size    |    Memory Range    |penjelasan                                            |\n"); // lengkapi di sini. jawaban tidak dibatasi dalam 1 baris
    printf("|   char   |   1 byte   |   -128 to +127     | menyimpan satu karakter atau simbol                  |\n");
    printf("|   int    | 2 / 4 byte | -32,768 to 32,767  | menyimpan suatu integer / bilangan bulat             |\n");
    printf("|  float   |   4 byte   | 1.2E-38 to 3.4E+38 | menyimpan bilangan real atau bilangan floating-point |\n");
    printf("|   void   |   1 byte   |         -          | tidak menyimpan apapun                               |\n\n");

    /* Nomor 2 [5 point] */
    printf("2. Sebutkan perbedaan fungsi dan prosedur!\n");
    printf("Jawaban:\n");
    printf(" -> Fungsi adalah program kecil atau subprogram yang menerima input (disebut argumen), melakukan proses tertentu,\n    lalu mengembalikkan nilai tertentu atau menghasilkan output.\n -> sedangkan Prosedur adalah program kecil atau subprogram yang menerima input (disebut argumen) lalu melakukan proses tertentu terhadap argumen tersebut,\n    tetapi tidak mengembalikan nilai tertentu atau tidak memberikan output.\n -> Mudahnya, prosedur adalah fungsi tanpa output\n\n"); // lengkapi di sini. jawaban tidak dibatasi dalam 1 baris

    /* Nomor 3 [5 point] */
    int **val;
    printf("3. Apa tipe data dari deklarasi variabel di atas?");
    printf("Jawaban:\n");
    printf("integer\n");

    return 0;
}