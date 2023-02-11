#include <iostream>

using namespace std;

/* Tugas Eksplorasi: Binary Representation 

Pengertian Operator Bitwise dalam Bahasa C/C++

Bitwise adalah operator khusus untuk menangani operasi logika bilangan biner dalam bentuk bit. 
Bilangan biner sendiri merupakan jenis bilangan yang hanya terdiri dari 2 jenis angka, yakni 0 dan 1. */

// Shift Left (<<)
// 0perator yang akan menggeser bentuk bilangan biner ke kiri. Operator ini mengubah bilangan desimal menjadi biner, lalu menggeser angka dari bilangan biner tersebut ke kiri, setelah itu akan mengubahnya kembali ke bilangan desimal.

// Shift Right (>>)
// Operator Bitwise Shift Right (>>) adalah operator yang akan mengeser nilai dalam bentuk bilangan biner ke kanan. Operator ini akan mengubah bilangan desimal menjadi bilangan biner setelah itu menggeser angka dari dari bilangan biner tersebut ke kanan dan pada akhirnya akan mengubahnya kembali ke bilangan desimal.

// AND (&)
// Operator yang akan membandingkan dua operand dalam bentuk bilangan biner. Operator ini akan mengubah bilangan desimal menjadi bilangan biner lalu membandingkanya dengan operand dari sisi lain.

// OR (|)
// Operator yang akan membandingkan dua operand dalam bentuk bilangan biner. Operator ini akan mengubah bilangan desimal menjadi bilangan biner lalu membandingkanya dengan operand dari sisi lain.

// XOR (^)
// Operator yang akan membandingkan dua operand dalam bentuk bilangan biner. Operator ini akan mengubah bilangan desimal menjadi bilangan biner lalu membandingkanya dengan operand dari sisi lain.

// NOT (~)
// Operator ini bersifat unary yang akan membalikan nilai di dalam bentuk bilangan biner. Operator ini akan mengubah bilangan desimal menjadi bilangan biner lalu membalikan nilai dari bit ke bit (angka ke angka).

int main (){
    //Variabel
    int a=201, b=100; //bil biner 1100 1001 = 201, 0110 0100 = 100
    int hasilAnd, hasilOr, hasilXor, hasilNot, hasilShl, hasilShr;
 
    //Operasi Bitwise
    hasilAnd=a&b; 
    /* 1100 1001 = 201
      0110 0100 = 100
      -------------------------- AND
      0100 0000 = 64
    */
  
    hasilOr=a|b;
    /* 1100 1001 = 201
       0110 0100 = 100
      ------------------------OR
       11101101 = 237 */
      
    hasilXor=a^b;
    /* 1100 1001 = 201
       0110 0100 = 100
       -----------------------XOR
       1010 1101 = 137 */
    
    hasilNot=~a;
    /* 1100 1001 = 201, diubah menjadi 0011 0110 = -202
    
    */
    hasilShl=a<<1;  
    /* 0000 0000 1100 1001 = 201
    menggeser 1 bit ke kiri, Dibagian kanan disisipkan 0, sebanyak bit yang digeser
     0000 0001 1001 0010 = 402
    */
  
    hasilShr=a>>1;
    /* 0000 0000 1100 1001 = 201
      digeser 1 bit ke kanan, Dibagian kanan disisipkan 0, sebanyak bit yang digeser dan pada bagian paling kiri akan hilang
      0000 0000 0110 0100 = 100
    */
 
    //Output
    cout<<hasilAnd<<endl;
    cout<<hasilOr<<endl;
    cout<<hasilXor<<endl;
    cout<<hasilNot<<endl;
    cout<<hasilShl<<endl;
    cout<<hasilShr<<endl;
 
    return 0;
} 
