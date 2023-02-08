# Bitwise Operator
## Pengertian
Merupakan operator yang bekerja pada tingkat bit

## Operator
### **AND** (&) 
Mengambil dua angka operand dan melakukan operasi AND pada setiap bitnya. Hasil dari AND adalah 1 hanya jika kedua bits adalah 1.
### **OR** ( | ) 
Mengambil dua angka operand dan melakukan operasi OR pada setiap bitnya. Hasil dari OR adalah 1 hanya jika salah satu dari bits adalah 1.
### **XOR** (^)  
Mengambil dua angka operand dan melakukan operasi XOR pada setiap bitnya. Hasil dari XOR adalah 1 hanya jika kedua bits tidak sama.
### **left shift** (<<)  
Mengambil dua angka operand menggeser kekiri operand pertama. Operand kedua menentukan jumlah tempat yang digeser.
### **right shift** (>>)  
Mengambil dua angka operand menggeser kekanan operand pertama. Operand kedua menentukan jumlah tempat yang digeser.
### **NOT** (~)  
Mengambil satu angka dan meng-invert semua bitsnya.

## Contoh Penggunaan
    a = 5(00000101), b = 9(00001001)

    a & b   = 1     (00000001)
    a|b     = 13    (00001101)
    a^b     = 12    (00001100)
    ~a      = 250   (11111010)
    b<<1    = 18    (00010010)
    b>>1    = 4     (00000100)
