#include<stdio.h>

void main()
{
	int i,j,k,l,x;
	printf("Masukkan X = ");
	scanf("%d", &x);
	for (i=0;i<x;i++)
	{
		for (j=0;j<x;j++)
		{
			for (k=0;k<x;k++)
			{
				for (l=0;l<x;l++)
				{
					printf("*");
				}
				printf("\n");
			}
			
			printf("\n");
		
		}
		printf("\n");
	}

}