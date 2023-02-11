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
    printf("Di bahasa pemrograman C, ada empat jenis primitive data type utama, yaitu:"); // lengkapi di sini. jawaban tidak dibatasi dalam 1 baris
    printf("integer (int) - digunakan untuk menyimpan nilai bilangan bulat.");
    printf("floating point (float) - digunakan untuk menyimpan nilai pecahan.");
    printf("character (char) - digunakan untuk menyimpan satu karakter, seperti huruf atau simbol.");
    printf("boolean (bool) - digunakan untuk menyimpan nilai benar (true) atau salah (false).");

    /* Nomor 2 [5 point] */
    printf("2. Sebutkan perbedaan fungsi dan prosedur!\n");
    printf("Jawaban:\n");
    printf("Tujuan: Fungsi memiliki tujuan untuk menghasilkan nilai yang dapat dikembalikan ke pemanggil. Sedangkan prosedur tidak mengembalikan nilai apa pun, tetapi hanya melakukan tugas tertentu.\n"); // lengkapi di sini. jawaban tidak dibatasi dalam 1 baris
    printf("Penggunaan: Fungsi digunakan untuk memecahkan masalah menjadi bagian-bagian yang lebih kecil dan memecahkan masalah menjadi bagian-bagian yang lebih mudah untuk diterima. Prosedur digunakan untuk memecahkan tugas-tugas yang berulang.");
    printf("Penulisan: Fungsi ditulis dengan menggunakan kata kunci 'return' , yang menandakan bahwa suatu nilai dikembalikan setelah tugas selesai dilakukan. Prosedur tidak menggunakan kata kunci 'return', karena tugas hanya dilakukan dan tidak ada nilai yang dikembalikan.");
    printf("Pengiriman parameter: Fungsi menerima parameter dan dapat mengembalikan nilai setelah melakukan tugas. Prosedur juga menerima parameter, tetapi tidak mengembalikan nilai setelah tugas selesai dilakukan.");
    
    /* Nomor 3 [5 point] */
    int **val;
    printf("3. Apa tipe data dari deklarasi variabel di atas?");
    printf("Jawaban:\n");
    printf("tipe data **val tidak ada di dalam bahasa C sehingga jika di-run akan terjadi error\n");

    return 0;
