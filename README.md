# Praktikum_5

# Latihan 1 (Susun algoritma untuk menginput bilangan sebanyak-banyaknya sampai kondisi dimasukkan angka 0, Kemudian cetak Nilai terbesar dari Bilangan tersebut )

Algoritma 
1. Mendeklarasikan variable int a,max=0; sebagai variable input
2. Memasukkan bilangannya dengan perintah perulangan do
3.Menentukan bilangan yang terbesar dengan rumus if (a>max) max=a;
4. Memeriksa bilangan yang kita masukkan dengan perintah while (a!=0);  
5. Memasukkan angka 0,maka perintah perulangan akan berhenti
6. Menampilkan hasil nilai terbesar kelayar dengan kode: cout << max;

Berikut Programnya:










![alt text](https://github.com/etrianmartianto/Praktikum_5/blob/master/Latihan%201/Program_Lat1.png)

Berikut Pseudocodenya:

1. a= ... a <--
2. while (a!=0)
3. Do.. if (a>max) (max=a)
4. WRITE (max)

Berikut Flowchartnya














![alt text](https://github.com/etrianmartianto/Praktikum_5/blob/master/Latihan%201/Flowchart_Lat1.png)

Berikut Hasil Percobaan
![alt text](https://github.com/etrianmartianto/Praktikum_5/blob/master/Latihan%201/Hasil_Lat1.png)

# Latihan 2 (Susun algoritma untuk menginput tiga buah bilangan. Cetak perkataan "BENAR", bila salah satu bilangan merupakan jumlah dari dua buah bilangan yang lain.,selainnya (bila tidak) cetak perkataan "SALAH". Gunakan kondisi OR)

Algoritma
1. Mendeklarasikan variable int A,B,C; sebagai variable input 

2. Memasukkan bilangannya dengan perintah:
cout << "Masukkan nilai pertama :"; cin >> A;

cout << "Masukkan nilai kedua :"; cin >> B;

cout << "Masukkan nilai ketiga :"; cin >> C;

3. Menentukan hasil nilai BENAR atau SALAH dengan rumus: 
if ( (A+B==C) || (A+C==B) || (B+C==A) 
*Pernyataan BENAR apabila salah satu bilangan merupakan jumlah dari dua bilangan yang lain *Pernyataan SALAH apabila tidak ada bilangan yang merupakan jumlah dari dua bilangan yang lain.

4. Menampilkan hasil nilai BENAR atau SALAH kelayar dengan kode: 
if ( (A+B==C) || (A+C==B) || (B+C==A))
 {cout << "BENAR";}

 else
 {cout << "SALAH";}

Berikut Programnya












![alt text](https://github.com/etrianmartianto/Praktikum_5/blob/master/Latihan%202/Program_Lat2.png)

Berikut Pseudocodenya

1. A =.... A <--
2. B =.... B <--
3. C =.... C <--
4. if((A+B==C || A+C==B || B+C==A))
5. WRITE (BENAR)
6. else
7. WRITE(SALAH)

Berikut Flowchartnya












![alt text](https://github.com/etrianmartianto/Praktikum_5/blob/master/Latihan%202/Flowchart_Latihan2.png)

Berikut Hasil Percobaan

1. Pernyataan BENAR
![alt text](https://github.com/etrianmartianto/Praktikum_5/blob/master/Latihan%202/Hasil_Benar_Lat2.png)

2. Pernyataan SALAH
![alt text](https://github.com/etrianmartianto/Praktikum_5/blob/master/Latihan%202/Hasil_Salah_Lat2.png)