#include <stdio.h>

int main() {
    /* Pada file ini, kalian diminta untuk menjawab tiap soal */
    /* dengan menampilkan hasilnya pada layar */

    /* Contoh */
    printf("0. Sebutkan nama lengkap dari Kak Nigel!\n");
    printf("Jawaban: Nigel Sahl\n\n");

    /* Nomor 1 [5 point] */
    printf("1. Sebutkan jenis-jenis primitive data type di C!\n");
    printf("Jawaban:\n\n");
    printf("Tipe Integer:\n");
    printf("char: Tipe data yang menyimpan satu karakter huruf. Biasanya mengisi memori sebanyak 1 byte.\n");
    printf("int: Tipe data yang menyimpan bilangan bulat biasa. Biasanya mengisi memori sebanyak 2 sampai 4 bytes.\n");
    printf("short: Tipe data yang menyimpan bilangan bulat dengan rentang nilai yang lebih pendek daripada \"int\". Biasanya mengisi memori sebanyak 2 bytes.\n");
    printf("long: Tipe data yang menyimpan bilangan bulat dengan rentang nilai yang lebih panjang daripada \"int\". Biasanya mengisi memori sebanyak 4 bytes.\n");
    printf("long long: Tipe data yang menyimpan bilangan bulat dengan rentang nilai yang lebih panjang daripada \"long\". Biasanya mengisi memori sebanyak 8 bytes.\n\n");
    printf("Tipe Float:\n");
    printf("float: Tipe data yang menyimpan bilangan real hingga 7 angka dibelakang koma. Biasanya mengisi memori sebanyak 4 bytes.\n");
    printf("double: Tipe data yang menyimpan bilangan real hingga 15 angka dibelakang koma. Biasanya mengisi memori sebanyak 8 bytes.\n");
    printf("long double: Tipe data yang menyimpan bilangan real hingga 19 angka dibelakang koma. Biasanya mengisi memori sebanyak 10 bytes.\n\n");
    printf("Tipe Boolean:\n");
    printf("_Bool: Tipe data yang menyimpan nilai \"true\" atau \"false\". Biasanya mengisi memori sebanyak 1 byte.\n\n");

    /* Nomor 2 [5 point] */
    printf("2. Sebutkan perbedaan fungsi dan prosedur!\n");
    printf("Jawaban:\n\n");
    printf("Fungsi adalah suatu rangkaian perintah yang mengembalikan suatu nilai hasil.\n");
    printf("Sementara prosedur adalah suatu rangkaian perintah yang tidak mengembalikan nilai apapun.\n");
    printf("Deklarasi prosedur dalam bahasa C dan C++ pasti menggunakan return type void.\n");
    printf("Sementara deklarasi fungsi bisa menggunakan return type apapun selain void.\n\n");

    /* Nomor 3 [5 point] */
    int **val;
    printf("3. Apa tipe data dari deklarasi variabel di atas?\n");
    printf("Jawaban: Tipe data dari deklarasi variabel di atas adalah pointer terhadap pointer lain.\n");
    printf("Pointer adalah variabel yang menyimpan alamat memori dari variabel lain.\n");
    printf("Hal ini memungkinkan kita untuk mengubah variabel lain tersebut melalui pointer yang kita deklarasikan terhadap variabel tersebut.\n");
    printf("Tanda \'*\' pada bahasa C dan C++ menandakan kalau variabel tersebut adalah pointer. Jadi kalau ada dua tanda \'*\' maka hal itu mmenandakan kalau variabel tersebut adalah pointer terhadap pointer lain.");
    return 0;
}
