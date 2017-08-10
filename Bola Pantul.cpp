#include<stdio.h>

void main()
{
	int n,x,y,z;
	printf("Masukkan N = ");
	scanf("%d", &n);
	if (n>1) printf("o\n");
	for (x=1;x<n-1;x++)
	{
		printf("o");
		for (y=1;y<n-x-1;y++) printf(" ");
		printf("o");
		for (y=0;y<2*x-2;y++)
		{
			if (y%2==0)
			{
				for (z=0;z<2*x-y-3;z++) printf(" ");
				printf("o");
			}
			else if (y%2==1)
			{
				for(z=0;z<2*(n-x)-3;z++) printf(" ");
				printf("o");
			}
		}
		printf("\n");
	}
	printf("o");
	for (x=2*n-5;x>=1;x=x-2)
	{
		for (y=0;y<x;y++) printf(" ");
		printf("o");
	}
	getchar();
	getchar();
} 