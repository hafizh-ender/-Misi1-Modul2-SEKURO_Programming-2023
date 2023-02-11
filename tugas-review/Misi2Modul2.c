#include <stdio.h>
#include <stdlib.h>

int pilihanDo(int name){
    int pilihan;
    printf("\n1. Lihat menu\n2. Beli makanan atau minuman\n3. Keluar\nKetik angka yang ingin dituju");
    scanf("%d\n", pilihan);
    if (pilihan == 1)
    {
        menu(name, pilihan);
    }
    else if (pilihan == 2) {
        beli(name, pilihan);
    }
    else {
        tutup;
    }
}

void beli(name, pilihan){
    int id, jlh, harga;
    printf("\nApa yang Anda ingin pesan?");
    scanf("%d", id);
    printf("\nBerapa jumlahnya?");
    scanf("%d", jlh);
    if (id == 1)
    {
        harga = 15000 * jlh;
    }
    else if (id == 2 || id == 4)
    {
        harga = 5000 * jlh;
    }
    else if (id == 3 || id == 5){
        harga = 10000 * jlh;
    }
    else if (id == 6 || id == 7 || id == 8 || id == 9 || id == 10){
        harga = 3000 * jlh;
    }
    else {
        harga = 0;
    }
    tutup(name, harga, jlh);
    
}

void menu(name, pilihan){
    int back;
    printf("\nMenu makanan :\n1. Nasi Goreng - 15.000\n2. Mie Goreng - 5.000\n3. Mie Goreng double - 10.000\n4. Mie rebus - 5.000\n5. Mie rebus double - 10.000\n6. telor - 3000\n7. kornet 3.000\nMenu Minuman\n1. Es teh manis - 3.000\n2. Teh manis - 3.000\n3. Es jeruk - 3.000");
    scanf("\nKetik 0 untuk kembali : %d", back);
    if (back == 0){
        pilihanDo(name);
    }
    else {
        pilihanDo(name);
    }
}

void tutup(name, harga, jlh){
    if (harga > 0){
        print("\n%c\nDengan jumlah : %d\nDengan harga total : %d", name, harga, jlh );
    }
    else {
        printf("\nTidak ada penjualan");
    }
}

int main() {
    int ownerShop;
    char name[20];
    scanf("1. Tutup\n2. Pelanggan masuk\nPilih nomor : %d", ownerShop);
    if (ownerShop == 1)
    {
        scanf("Nama : %s", name);
        pilihanDo(name);
    }
    else {
        tutup(name, harga, jlh);
    }
}