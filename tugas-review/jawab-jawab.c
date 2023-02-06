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
    printf("char: tipe data untuk menyimpan karakter (1 byte)\n
            int: tipe data untuk menyimpan bilangan bulat (4 byte)\n
            float: tipe data untuk menyimpan bilangan pecahan dengan presisi rendah (4 byte)\n
            double: tipe data untuk menyimpan bilangan pecahan dengan presisi tinggi (8 byte)\n
            short int: tipe data untuk menyimpan bilangan bulat dengan ukuran yang lebih kecil dari int (2 byte)\n
            long int: tipe data untuk menyimpan bilangan bulat dengan ukuran yang lebih besar dari int (8 byte)\n
            unsigned int: tipe data untuk menyimpan bilangan bulat positif tanpa tanda (4 byte)\n
            signed int: tipe data untuk menyimpan bilangan bulat dengan tanda (4 byte)\n
            ");

    /* Nomor 2 [5 point] */
    printf("2. Sebutkan perbedaan fungsi dan prosedur!\n");
    printf("Jawaban:\n");
    printf("Fungsi: adalah bagian dari program yang dapat menghasilkan nilai return dan biasanya digunakan untuk melakukan tugas-tugas tertentu. Fungsi memiliki nama dan memiliki satu set argumen yang dapat diterima dan memprosesnya menjadi satu nilai yang direturn.\n
            Prosedur: adalah bagian dari program yang tidak menghasilkan nilai return, melainkan melakukan tugas-tugas tertentu seperti memproses data, menampilkan output, dan lain-lain. Prosedur memiliki nama dan memiliki satu set argumen yang dapat diterima, tetapi tidak direturn.\n
            Secara singkat, fungsi memiliki nilai return dan prosedur tidak memiliki nilai return.\n");

    /* Nomor 3 [5 point] */
    int **val;
    printf("3. Apa tipe data dari deklarasi variabel di atas?\n");
    printf("Jawaban:\n");
    printf("Tipe data dari deklarasi variabel "int **val" adalah pointer to pointer of type int.\n
            Artinya, "val" adalah sebuah variabel yang menyimpan alamat dari sebuah pointer yang menunjuk ke sebuah integer.\n");

    return 0;
}