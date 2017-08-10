#include<stdio.h>
#include<string.h>

void ganjil(int x)
{
	int i;
	for (i=1;i<=x;i=i+2)
	{
		printf("%d ", i);
		x++;
	}
}

void genap(int x)
{ 
	int i;
	for (i=2;i<=x+1;i=i+2)
	{
		printf("%d ", i);
		x++;
	}
}


void main()
{
	int i,x;
	printf("Masukkan angka : ");
	scanf("%d", &x); fflush(stdin);
	printf("%d angka ganjil pertama : ", x);
	ganjil(x);
	printf("\n");
	printf("%d angka genap pertama : ", x);
	genap(x);
	printf("\n");

	getchar();
}