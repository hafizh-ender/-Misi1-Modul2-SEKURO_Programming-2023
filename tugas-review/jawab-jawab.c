#include <stdio.h>

int main() {
    /* Pada file ini, kalian diminta untuk menjawab tiap soal */
    /* dengan menampilkan hasilnya pada layar */

    /* Contoh */
    printf("0. Sebutkan nama lengkap dari Kak Nigel!\n");
    printf("Jawaban: Nigel Sahl\n");

    /* Nomor 1 [5 point] */
    printf("1. Sebutkan jenis-jenis primitive data type di C!\n");
    printf("Jawaban: Primitive data terbagi menjadi dua cabang utama, yakni boolean dan numeric.\n");
    printf("Tipe data numeric terbagi lagi menjadi character, yang menyimpan satu huruf, dan integral.\n"); 
    printf("Tipe data integral dibagi lagi menjadi integer dan floating point.\n");
    printf("integer dibagi lagi menjadi 3 bagian, short, int, dan long berdasarkan panjang datanya. \n");
    printf("floating point dibagi menjadi float dan double juga berdasarkan panjang datanya.\n");

    /* Nomor 2 [5 point] */
    printf("2. Sebutkan perbedaan fungsi dan prosedur!\n");
    printf("Jawaban: Perbedaan prosedur dan fungsi ada di pengembalian nilai.\n" );
    printf ("Pada prosedur nilai yang diproses tidak dikembalikan atau diubah, nilai hanya diproses didalam prosedur dan kembali kepada keadaan semula ketika keluar dari prosedur.\n" );
    printf("Sedangkan pada fungsi, nilai yang diproses akan berubah dan memiliki nilai keluaran.\n") ;
    printf("Bisa kita disimpulkan bahwa prosedur itu hanya berisi metode, langkah-langkah atau tahap-tahap penyelesaian masalah.\n" ) ;
    printf("sedangkan fungsi adalah berisi metode yang memproses nilai dan mengubah nilai itu sendiri.\n");


    /* Nomor 3 [5 point] */
    int **val;
    printf("3. Apa tipe data dari deklarasi variabel di atas?");
    printf("Jawaban: Pointer yang meng point ke Pointer yang bertipe integer \n");
    printf("Pointer sendiri berfungsi untuk menyimpan alamat memory.\n");

    return 0;
}
