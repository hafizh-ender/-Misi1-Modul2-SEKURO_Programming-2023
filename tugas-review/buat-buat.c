#include <stdio.h>

#define SIZE_OF_ARRAY 4

/* Pada file ini, kalian diminta untuk melengkapi fungsi/prosedur di bawah ini  */
/* sesuai dengan spesifikasi yang diberikan */

/* Contoh */
// Sebelum:
// void printArray(/* parameter */){
//     /* aksi */
// }
// Setelah:
void printArray(int array[], int size) {
    printf("[ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("]");
}

/* Nomor 1 [5 poin] */
void swap(int *a, int *b) {
    int tempt;
	tempt = *a;
	*a = *b;
	*b = tempt; 
}

/* Nomor 2 [10 poin] */
void isKabisat() {
	if (tahun %100 == 0 && tahun %400 != 0){ /*untuk tahun > 1582 M
		/* print aksi */
	}
	
	if (tahun %4 == 0){ /*untuk tahun < 1582 M
		print aksi */
	}
}

/* Nomor 3 [15 point] */
void transformArray(int array[], int lenght, int value, int new) {
    int i;
    for (i = 0; i < length; i ++){
        if (array[i] == value){
            array[i] = new;
        }
    }
}

int main() {
    /* Program berikut bisa dipakai untuk memeriksa jawaban kalian */
    
    /* Nomor 1 [5 poin] */
    /* Lengkapi prosedur swap() yang menukarkan value dua variabel integer */
    int x = 10;
    int y = 20;

    printf("Sebelum: x = %d, y = %d\n", x, y);
	
    int tempt = a;
	a = b;
	b = tempt;
	
    printf("Setelah: x = %d, y = %d\n", x, y);

    // Expected Output:
    // Sebelum: x = 10, y = 20
    // Setelah: x = 20, y = 10

    printf("\n");


    /* Nomor 2 [10 poin] */
    /* Lengkapi fungsi isKabisat() yang mengembalikan apakah tahun yang dimasukkan merupakan tahun kabisat atau bukan */
    /* Informasi: Pada awal pembentukan kalender masehi, semua tahun yang dapat dibagi 4 merupakan tahun kabisat. Namun, sejak tahun 1582 M, tahun kelipatan 100 yang bukan kelipatan 400 tidak lagi disebut kabisat. */
    /* Output hanya berupa Y (jika kabisat) dan G (jika tidak) */
    int year1 = 2020;
    int year2 = 1400;
    int year3 = 1800;
	
	if (year1 %100 == 0  && year1 %400 != 0 ){
        	printf("Apakah %d tahun kabisat? G \n", year1);
    }
    	else {
		printf("Apakah %d tahun kabisat? Y \n", year1);
        
    }
	if (year2 %4 == 0){
		printf("Apakah %d tahun kabisat? Y \n", year2);
	}
	else{
		printf("Apakah %d tahun kabisat? G \n", year2);
	}
    if (year3 %100 == 0  && year3 %400 != 0 ){
        	printf("Apakah %d tahun kabisat? G \n", year3);
    }
    	else {
		printf("Apakah %d tahun kabisat? Y \n", year3);
        
    }
    
    
 
    
    // Expected Output:
    // Apakah 2020 tahun kabisat? Y
    // Apakah 1400 tahun kabisat? Y
    // Apakah 1800 tahun kabisat? G
    

    printf("\n");

    /* Nomor 3 [15 poin] */
    /* Lengkapi prosedur checkArray() yang mengubah isi sebuah array of integer */
    /* Jika elemen dari array tersebut bilangan ganjil, maka nilai elemen tersebut berubah menjadi 0 */
    void replace(int array[], int lenght, int value, int new) {
    int i;
    for (i = 0; i < length; i ++){
        if (array[i] == value){
            array[i] = new;
        }
    }
}elemen dari array tersebut bilangan genap, maka nilai elemen tersebut berubah menjadi 1 
	
    int array[] = {19, 62, 31, 1};
	int main() {
    int array[] = {19, 62, 31, 1};
    int length = 4;
    int i;
    int genap;
    int ganjil;

    printf("Sebelum: ");
    for (i = 0; i < length; i++){
        printf("%d" ,array[i]);
    }
    printf("\n");

    replace(array, length, 19, 0);
    replace(array, length, 62, 1);
    replace(array, length, 31, 0);
    replace(array, length, 1, 0);

    printf("Setelah: ");
    for (i = 0; i < length; i++){
        printf("%d" ,array[i]);
    }
    printf("\n");
    return 0;
}

   
    // Expected Output:
    // Sebelum: [ 19 62 31 1 ]
    // Setelah: [ 0 1 0 0 ]

    return 0;
}
