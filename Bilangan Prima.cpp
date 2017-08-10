#include<stdio.h>

//Dengan Function

int prima(int b)
{
	int l=0,k;
	for (k=1;k<=b;k++)
	{
		if (b%k==0)
		{
			l++;
		}
	}
	if (l==2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int x;
	printf("Masukkan Angka = ");
	scanf("%d", &x); fflush(stdin);

	if (prima(x)==1)
		printf("Angka %d adalah Bilangan Prima", x);
	else
		printf("Angka %d adalah Bukan Bilangan Prima",x);
	getchar();

	return 0;
}











// Tanpa Function
/*int main()
{
	int i,j=0,x;
	printf("Masukkan Angka = ");
	scanf("%d", &x); fflush(stdin);

	for (i=1;i<=x;i++)
	{
		if (x%i==0)
		{
			printf("Angka %d adalah faktor dari %d\n", i,x);
			j++;
		}
	}
	printf("Jumlah faktor dari %d adalah %d", x,j);
	printf("\n");
	if (j==2)
	{
		printf("Dan %d adalah Bilangan Prima", x);
	}
	else
	{
		printf("Dan %d adalah Bukan Bilangan Prima", x);
	}
	getchar();
	return 0;
}*/