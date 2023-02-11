<h1>Tugas Eksplorasi</h1>

<p>
    operator ++ 
    menambah 1 sebuah bilangan atau variabel 
    contoh = 
    a = 1
    a++ 
    a = 2
</p>

<p>
    operator -- mengurangi 1 sebuah bilangan atau variabel 
    contoh = 
    a = 2
    a-- 
    a = 1
</p>
<p>
    operator + 
    merupakan operator penjumlahan 
    contoh = 
    2 + 3 = 5
</p>
<p>
    operator - 
    merupakan operator pengurangan 
    contoh = 
    3 - 2 = 1
</p>
<p>
    operator * 
    merupakan operator perkalian 
    contoh = 
    2 * 3 = 6
</p>
<p>
    operator / 
    merupakan operator pembagian 
    contoh = 
    6/3 = 2
</p>
<p>
    operator % atau modulo 
    merupakan operator bagi tapi yang ditampilkan adalah sisa bilangan 
    contoh = 
    5 % 2 = 1 karena 5 dibagi 2 bersisa 1
</p>
<h2> Binary Operator</h2>
<p>
    operator <, >
    merupakan operator yang biasanya digunakan untuk mengecek bool 
    contoh = 
    2 < 3
    hasil keluarannya bisa true
</p>
<p>
    operator <=, >=
    sama seperti operator di atas. Akan tetapi, pada operator ini ada tanda sama dengan di dalamnya sehingga bilangan yang sama akan termasuk true jika memenuhi syarat 
    contoh = 
    2 >= 2 
    hasil keluaran true
</p>
<p>
    operator ==, != 
    == : adalah membandingkan nilai 2 variabel jika sama maka akan keluar true jika tidak false 
    != : sama dengan di atas hanya saja jika tidak sama keluarannya adalah true. sebaliknya, jika sama maka keluarannya false. 
</p>
<p>
    operator && 
    operator ini biasanya digunakan di if else 
    && ini maksudnya adalah "and" atau "dan" 
    contoh =
    if(a >= 5 && a<=10)
    maksudnya jika a lebih besar sama dengan 5 "dan" a kurang dari sama dengan 10
</p>
<p>
    operator || 
    seperti di atas operator ini biasa digunakan di dalam if else. || disini maksudnya adalah "or" atau "atau" 
    contoh = 
    if(a > 5 || a==5)
    maksudnya jika a lebih besar dari 5 "atau" a sama dengan 5. 
</p>
<p>
    operator !
    operator not biasa digunakan dalam sebuah logical program sama seperti && dan || 
    contoh = 
    a = true
    if(!a)
    maksudnya jalankan program jika a bernilai false
</p>
<p>
    operator += 
    operator ini menjumlakan sebuah variabel dengan variabel itu sendiri ditambah dengan variabel, bilangan, kata, atau sesuatu yang setipe. 
    contoh = 
    a += 5 
    maksudnya a = a + 5
    tambahkan a dengan 5 lalu masukkan hasilnya atau perbarui ke dalam a yang sama. 
</p>
<p>
    operator -= 
    hampir sama dengan di atas, tetapi ini mengurangi 
    contoh = 
    a -= 5
    bentuk yang sama a = a - 5
    kurang a dengan 5 lalu masukkan ke variabel a yang sama. 
</p>
<p>
    operator *= 
    melakukan perkalian dengan bilangan itu sendiri dan variabel atau bilangan yang lain. 
    contoh = 
    a *= 5
    bentuk lain a = a * 5
    maksudnya, kalikan a dengan 5 lalu masukkan hasilnya ke dalam variabel a yang sama. 
</p>
<p>
    operator /= 
    melakukan pembagian dengan bilangan itu sendiri dan variabel atau bilangan yang lain. 
    contoh = 
    a /= 5
    bentuk lain a = a / 5
    maksudnya, bagi a dengan 5 lalu masukkan hasilnya ke dalam variabel a yang sama. 
</p>
<p>
    operator %= 
    melakukan pembagian dengan bilangan itu sendiri dan variabel atau bilangan yang lain. 
    contoh = 
    a /= 5
    bentuk lain a = a / 5
    19 %= 5
    keluarannya 4
    maksudnya, bagi a dengan 5 lalu masukkan sisa bagi ke dalam variabel a yang sama. 
</p>

<p>
    Operator & (AND bitwise)  membutuhkan dua buah angka sebagai operand dan melakukan AND pada setiap bit dari dua angka tersebut. Hasil dari AND adalah 1 hanya jika kedua bit bernilai 1.
    contoh = 
    5 & 3 akan menghasilkan 1
<p>
    Operator | (OR bitwise) membutuhkan dua buah angka sebagai operand dan melakukan OR pada setiap bit dari dua angka tersebut. Hasil dari OR adalah 1 jika salah satu dari dua bit bernilai 1.
    contoh =
    5 | 3 akan menghasilkan 7
<p>
    Operator ^ (XOR bitwise) membutuhkan dua buah angka sebagai operand dan melakukan XOR pada setiap bit dari dua angka tersebut. Hasil dari XOR adalah 1 jika kedua bit bernilai berbeda.
    contoh 5 ^ 3 akan menghasilkan 6
<p>
    Operator << (left shift) membutuhkan dua buah angka, melakukan left shift pada bit dari operand pertama, operand kedua menentukan jumlah tempat shift.
    contoh =
    5 << 2 akan menghasilkan 20
    dalam biner 5 = 00000101 lalu digeser ke kiri 2 kali karena operator left shift menjadi 00010100 (20)
<p>
    Operator >> (right shift) membutuhkan dua buah angka, melakukan right shift pada bit dari operand pertama, operand kedua menentukan jumlah tempat shift.
    contoh =
    20 >> 2 akan menghasilkan 5
    dalam biner 20 = 00010100 lalu digeser ke kanan 2 kali karena operator right shift menjadi 00000101 (5)
<p>
    Operator ~ (NOT bitwise) membutuhkan satu buah angka dan membalikkan nilai dari setiap bit dari angka tersebut.
    contoh =
    ~5 akan menghasilkan 250
    dalam biner 5 = 00000101 lalu terjadi not maka bentuknya menjadi 11111010

</p>
