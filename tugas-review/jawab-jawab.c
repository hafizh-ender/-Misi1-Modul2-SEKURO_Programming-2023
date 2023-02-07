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
    printf(
        "1. int\n"
        "2. char\n"
        "3. float\n"
        "4. double\n"
        "5. short int\n"
        "6. unsigned int\n"
        "7. long int\n"
        "8. long long int\n"
        "9. unsigned long int\n"
        "10. unsigned long long int\n"

    ); // lengkapi di sini. jawaban tidak dibatasi dalam 1 baris

    /* Nomor 2 [5 point] */
    printf("2. Sebutkan perbedaan fungsi dan prosedur!\n");
    printf("Jawaban:\n");
    printf(
        "1. Function mengembalikan nilai, prosedur tidak\n"
        "2. Prosedur tidak mengambilikan nilai, tetapi biasanya digunakan untuk mengubah nilai dari suatu program atau menjalankan prosedur yang tidak mempengaruhi program sama sekali misalnya ngeprint sesuatu\n"
    ); // lengkapi di sini. jawaban tidak dibatasi dalam 1 baris

    /* Nomor 3 [5 point] */
    int **val;
    printf("3. Apa tipe data dari deklarasi variabel di atas?");
    printf("Jawaban:\n");
    printf(
        "Double pointer\n"
        "Merupakan pointer yang mengandung alamat dari pointer lain, yang pointer yang ditunjuk memiliki alamat dari sebuah variabel yang bertipe data int\n"
    );

    return 0;
}