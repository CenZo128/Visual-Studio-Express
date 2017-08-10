#include<stdio.h>

void main()
{
	int x,i,j,k,l;
	printf("Masukkan X : ");
	scanf("%d", &x); fflush(stdin);
	printf("\n");
	for (i=1;i<=x;i++)
	{
		
		for (j=i;j<x;j++)
		{
			printf(" ");
		}
		
		for (j=1;j<=i+1;j++)
		{
			printf("*");
		}
		for(k=0;k<x*2;k++)
		{
			printf("*");
		}
		for (k=1;k<=i-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (i=2;i<=x;i++)
	{
		for (j=3;j<=i+1;j++)
		{
			printf(" ");
		}
		for (j=i;j<x;j++)
		{
			printf("*");
		}
		for(k=0;k<=x*2;k++)
		{
			printf("*");
		}
		for (k=i;k<=x;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	getchar();
}