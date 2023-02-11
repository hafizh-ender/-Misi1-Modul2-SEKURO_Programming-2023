
# ***Operator Bitwise dalam C***
Nama: Angela Geraldine H. P.\
NIM: 18221158

### **& (AND)**
Operator & mengambil dua operan dan mengembalikan nilai 1 jika kedua operan bernilai 1.\
Contoh:
- 1 & 1 = 1
- 1 & 0 = 0
- 0 & 1 = 0
- 0 & 0 = 0
- 1001 & 0011 = 0001

### **| (OR)**
Operator | mengambil dua operan dan mengembalikan nilai 1 jika setidaknya ada satu operan bernilai 1.\
Contoh:
- 1 | 1 = 1
- 1 | 0 = 1
- 0 | 1 = 1
- 0 | 0 = 0
- 1001 | 0011 = 1011

### **^ (XOR)**
Operator ^ mengambil dua operan dan mengembalikan nilai 1 jika nilai kedua operan berbeda.\
Contoh:
- 1 ^ 1 = 0
- 1 ^ 0 = 1
- 0 ^ 1 = 1
- 0 ^ 0 = 0
- 1001 ^ 0011 = 1010

### **<< (Left Shift)**
Operator << mengambil dua operan dan menggeser bits operan pertama ke kiri. Banyaknya pergeseran bits ditentukan oleh operan kedua.\
Contoh:
- 0111 << 2 = 011100
- 1011 << 1 = 10110

### **>> (Right Shift)**
Operator >> mengambil dua operan dan menggeser bits operan pertama ke kanan. Banyaknya pergeseran bits ditentukan oleh operan kedua.\
Contoh:
- 0111 >> 2 = 0001
- 1011 >> 1 = 0101

### ~ (NOT)
Operator ~ mengambil satu operan dan membalikkan semua bits (0 menjadi 1, 1 menjadi 0).\
Contoh:
- ~0111 = 1000
- ~1011 = 0100
