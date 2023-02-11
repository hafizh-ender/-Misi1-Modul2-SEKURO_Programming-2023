<h1>Operator BitWise di C</h1>

<p>Operator bitWise adalah operator untuk bilangan biner. Berikut adalah berbagai operator bitwise yang tersedia pada bahasa C : </p>

<ol>
    <li><h3> AND Operator</h3></li>
        <ul>
            <li>Sintaks operator : &</li>
            <li>Deskripsi proses : menerima dua angka dan melakukan operasi AND pada setiap bit dua angka tersebut. Operasi AND menghasilkan 1 jika semua bit bernilai 1.</li>
            <li>Contoh penggunaan: 3 & 7 = (011 & 111) = (011) = 3 </li>
        </ul>
    <li><h3> OR Operator </h3></li>
        <ul>
            <li>Sintaks operator : |</li>
            <li>Deskripsi proses : menerima dua angka dan melakukan operasi OR pada setiap bit dua angka tersebut. Operasi OR menghasilkan 1 jika ada salah satu bit yang bernilai 1.</li>
            <li>Contoh penggunaan: 3 | 7 = (011 | 111) = (111) = 7 </li>
        </ul>
    <li><h3> XOR Operator</h3></li>
        <ul>
            <li>Sintaks operator : |</li>
            <li>Deskripsi proses : menerima dua angka dan melakukan operasi XOR pada setiap bit dua angka tersebut. Operasi XOR menghasilkan 1 jika bit yang bernilai 1 berjumlah ganjil, sisanya bernilai 0.</li>
            <li>Contoh penggunaan: 3 ^ 7 = (011 ^ 111) = (100) = 4 </li>
        </ul>
    <li><h3> Left Shift Operator</h3></li>
        <ul>
            <li>Sintaks operator : << </li>
            <li>Deskripsi proses : menerima dua angka , menggeser bit angka pertama ke kiri sebanyak angka kedua.</li>
            <li>Contoh penggunaan: 5 << 1 = (101 => 1010) = 10  </li>
        </ul>
    <li><h3> Right Sift operator</h3></li>
        <ul>
            <li>Sintaks operator : >> </li>
            <li>Deskripsi proses : menerima dua angka , menggeser bit angka pertama ke kanan sebanyak angka kedua.</li>
            <li>Contoh penggunaan: 5 >> 1 = (101 => 010) = 2  </li>
        </ul>
    <li><h3> NOT operator </h3></li>'
        <ul>
            <li>Sintaks operator : ~ </li>
            <li>Deskripsi proses : menerima satu angka dan membalikkan nilai setiap bit.</li>
            <li>Contoh penggunaan: ~7  = ~(111) = (000) = 0  </li>
        </ul>
</ol>