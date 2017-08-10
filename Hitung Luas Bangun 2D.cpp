/*Kita mengenal berbagai bentuk geometri di bidang (2 dimensi) seperti: bujur sangkar, persegi panjang, 
segitiga, trapesium, jajaran genjang, dan lingkaran. Tulis program untuk menghitung luas bentuk 
geometri tersebut. 

Bujur sangkar: luas = sisi * sisi 
Persegi panjang: luas   =  panjang * lebar 
Segitiga: luas  = alas * tinggi / 2 
Trapesium : (sisi A+ sisiB) / 2 * tinggi 
Jajaran genjang: luas = alas * tinggi 
Lingkaran : luas = 3.14159 * radius * radius 

MASUKAN 
Masukan terdiri dari 6 baris bilangan, dapat berupa bilangan       pecah. Bilangan pada pertama 
adalah sisi bujur sangkar. Dua bilangan pada baris kedua adalah panjang dan lebar persegi 
panjang. Dua bilangan pada baris ketiga adalah sisi alas dan tinggi segitiga siku-siku. Tiga 
bilangan pada baris keempat adalah sisi alas, sisi atas, dan tinggi trapesium. Dua bilangan pada 
baris kelima adalah alas dan tinggi jajaran genjang. Bilangan pada baris terakhir adalah radius 
lingkaran 

KELUARAN 
Tampilkan luas bujur sangkar, luas persegi panjang, luas segitiga, luas trapesium, luas jajaran 
genjang, luas lingkaran, masing-masing pada baris sendiri, dengan ketelitian sampai 3 angka 
setelah titik desimal. 

CONTOH MASUKAN 
3 
4 5 
6 7 
8 9 10 
11 12 
20 

KELUARAN UNTUK CONTOH MASUKAN 
bujur sangkar: sisi = 3.000, luas = 9.000 
persegi panjang: panjang = 4.000, lebar = 5.000, luas = 20.000 
segitiga: alas = 6.000, tinggi = 7.000, luas = 21.000 
trapesium: sisi 1 = 8.000, sisi 2 = 9.000, tinggi = 10.000, luas = 85.000 
jajaran genjang: alas = 11.000, tinggi = 12.000, luas = 132.000 
lingkaran: radius = 20.000, luas = 1256.636 */

#include<stdio.h>

void main()
{
	float angka[20];
	printf("Bentuk Geometri 2D\n\n");
	printf("Luas Persegi.....\n");
	printf("Masukkan panjang sisi = ");
	scanf("%f", &angka[0]);
	fflush(stdin);
	angka[1]=angka[0]*angka[0];
	printf("Luas Persegi = %.2f\n", angka[1]);
	getchar();

	printf("Luas Persegi Panjang.....\n");
	printf("Masukkan panjang = ");
	scanf("%f", &angka[2]);
	fflush(stdin);
	printf("Masukkan lebar = ");
	scanf("%f", &angka[3]);
	fflush(stdin);
	angka[4]=angka[2]*angka[3];
	printf("Luas Persegi Panjang = %.2f\n", angka[4]);
	getchar();

	printf("Luas Segitiga.....\n");
	printf("Masukkan alas = ");
	scanf("%f", &angka[5]);
	fflush(stdin);
	printf("Masukkan tinggi = ");
	scanf("%f", &angka[6]);
	fflush(stdin);
	angka[7]=(angka[5]*angka[6])/2;
	printf("Luas Persegi Panjang = %.2f\n", angka[7]);
	getchar();

	printf("Luas Trapesium.....\n");
	printf("Masukkan sisi A = ");
	scanf("%f", &angka[8]);
	fflush(stdin);
	printf("Masukkan sisi B = ");
	scanf("%f", &angka[9]);
	fflush(stdin);
	printf("Masukkan tinggi = ");
	scanf("%f", &angka[10]);
	fflush(stdin);
	angka[11]=(angka[8]+angka[9])/2*angka[10];
	printf("\nLuas Trapesium = %.2f\n", angka[11]);
	getchar();

	printf("Luas Jajar Genjang.....\n");
	printf("Masukkan panjang = ");
	scanf("%f", &angka[12]);
	fflush(stdin);
	printf("\nMasukkan lebar = ");
	scanf("%f", &angka[13]);
	fflush(stdin);
	angka[14]=angka[12]*angka[13];
	printf("\nLuas Jajar Genjang = %.2f\n", angka[14]);
	getchar();

	printf("Luas Lingkaran.....\n");
	printf("Masukkan panjang = ");
	scanf("%f", &angka[15]);
	fflush(stdin);
//	angka[16]=3.14*angka[15]*angka[15];
	printf("Luas Lingkaran = %.2f\n", 3.14*angka[15]*angka[15]);
	getchar();



}