#include<stdio.h>

void main()
{
	char huruf[25];
	int i,a,b,c,d,e,f,g,h;
	printf("  Masukkan Nama : ");
	scanf("%c", huruf); fflush(stdin);
	printf("  Masukkan umur : ");
	scanf("%d", &i); fflush(stdin);
	printf("\n");
	printf("\n\t\tCake Shop...\n");
	printf("\t\t===============\n\n");

	printf("Special Cupcake @Rp. 15.000  : ");
	scanf("%d", &a); fflush(stdin);
	printf("Chocolate Cake @Rp. 50.000  : ");
	scanf("%d", &b); fflush(stdin);
	printf("Vanilla Fruit Cake @Rp. 60.000 : ");
	scanf("%d", &c); fflush(stdin);
	printf("Strawberry Cake @Rp. 55.000 : ");
	scanf("%d", &d); fflush(stdin);


	printf("\n\t\tCake Shop...\n");
	printf("\t\t===============\n");

	e=a+b+c+d;
	f=a*15000+b*50000+c*60000+d*55000;
	

	printf(" Total kue yang di beli : %d", e);
	printf("\n\n Jumlah harga kue yang di beli : %d\n", f);


}