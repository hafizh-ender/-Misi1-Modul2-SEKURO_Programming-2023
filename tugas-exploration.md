# Rangkuman Operator Bitwise C 

### Nama : Arvyno Pranata Limahardja
### NIM : 19622125

<p>&nbsp;</p>

1. Pengetahuan yang perlu dimiliki sebelum bisa memahami operator bitwise C adalah sistem bilangan biner. Bilangan biner memiliki 2 basis, sedangkan dalam bilangan desimal memiliki 8 basis. 

    a. Konversi bilangan biner ke bilangan desimal
    
        Jumlah 2 pangkat x dari masing-masing digit yang dimulai dari digit paling kanan ke paling kiri.

    b. Konversi bilangan desimal ke bilangan biner

        Mencari nilai bilangan 2 pangkat x yang paling mendekati bilangan yang akan dikonversi. Jika bersisa, maka dapat dicari nilai bilangan 2 pangkat x yang mendekati sisa pembagian bilangan. 

2. Terdapat 6 jenis operator bitwise yang didukung oleh bahasa C:
    
    a. & (AND)
        
        Jika kedua bit sama-sama 1, maka hasilnya juga 1. Selain itu, nilai akhirnya adalah 0.

        Contoh: 1010 (10) & 1100 (12) = 1000 (8)

    b. | (OR)

        Jika kedua bit bernilai 0, maka hasilnya akan bernilai 0. Selain itu, nilai akhirnya menjadi 1.

        Contoh: 1010 (10) | 1100 (12) = 1110 (14)

    c. ^ (XOR)

        Jika kedua bit berlainan, maka hasilnya akan bernilai 1. Selain itu, maka hasilnya 0.

        Contoh: 1010 (10) ^ 1100 (12) = 0110 (6)

    d. ~ (NOT)

        Operasi not membalikkan seluruh bit. Namun, hasilnya dalam bilangan desimal akan memiliki nilai dengan rumus ~ a = - a - 1

        Contoh: ~ 1010 (10) = 0101 (-11)

    e. << (LEFT SHIFT)

        Operator left shift menggeser nilai biner ke arah kiri sebanyak digit yang diperlukan, sehingga digit yang paling kanan akan ditambah dengan 0. Nilai biner setelah dioperasikan dengan left shift akan memiliki dua kali nilai desimal sebelumnya.

        Contoh : 1010 (10) << 1 = 10100 (20)

    f. >> (RIGHT SHIFT)

        Operator right shift menggeser nilai biner ke arah kanan sebanyak digit yang diperlukan, sehingga digit yang paling kanan akan dihapus. Nilai biner setelah dioperasikan dengan right shift akan memiliki setengah kali nilai desimal sebelumnya. 

        Contoh : 1010 >> 1 = 101 (5)        