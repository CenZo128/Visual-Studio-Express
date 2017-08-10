#include<stdio.h>


int main()
{
	int x,i,j,k;
	printf("\t\t||================================||\n");
	printf("\t\t||=============DIAMOND============||\n");
	printf("\t\t||================================||\n\n\n");
	do
	{
	printf("Masukkan sebuah angka [1....20]: ");
	scanf("%d", &x); fflush(stdin);
	}while(x<1 || x>20);
	
	for (i=1;i<=x;i++)
	{
		
		for (j=i;j<x;j++)
		{
			printf(" ");
		}
		
		for (j=1;j<=i;j++)
		{
			printf("*");
		}
		for (k=1;k<=i-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	/*for (i=0;i<x-1;i++)
	{
		printf(" ");
		for (j=1;j<=i;j++)
		{
			printf(" ");
		}
		
		for (j=x-1;j>i;j--)
		{
			printf("*");
		}
		for (k=i;k<=x-3;k++)
		{
			printf("*");
		}

		printf("\n");
	}*/

	
	getchar();
	return 0;
}