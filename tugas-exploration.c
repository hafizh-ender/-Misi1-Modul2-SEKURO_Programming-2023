#include <stdio.h>

int main() {
    int angka1;
    int angka2;
    int jumlah = angka1 + angka2;
    int selisih = angka1 - angka2;
    int perkalian = angka1 * angka2;
    int pembagian = angka1 / angka2;

    printf("masukkan angka pertama = ");
    scanf("%d" , &angka1);

    printf("masukkan angka kedua = ");
    scanf("%d", &angka2);

    printf("penjumlahan = %d \n" , jumlah);
    printf("pengurangan = %d \n" , selisih);
    printf("perkalian = %d \n" , perkalian);
    printf("pembagian = %d \n" , pembagian);

   
    if (angka1 > angka2){
        printf("angka1 > angka2 \n");
    }
    else if (angka1 < angka2){
        printf("angka1 < angka2 \n");
    }
    else if(angka1 == angka2){
        printf("bilangan sama \n");
    }

    if (angka1 %2 == 0){
        printf("angka1 genap \n");
    }
    else {
        printf("angka1 ganjil \n");
    }

     if (angka2 %2 == 0){
        printf("angka2 genap \n");
    }
    else {
        printf("angka2 ganjil \n");
    }
    return 0;
}
