#include<stdio.h>

int main()
{
	int a[2][2];
	int b[2][2];
	int c[2][2];
	int i,j;

	printf("Masukkan Matrix Pertama... \n");
	printf("1st rows & 1st column : ");
	scanf("%d", &a[0][0]); fflush(stdin);
	printf("1st rows & 2nd column : ");
	scanf("%d", &a[0][1]); fflush(stdin);
	printf("2nd rows & 1st column : ");
	scanf("%d", &a[1][0]); fflush(stdin);
	printf("2nd rows & 2nd column : ");
	scanf("%d", &a[1][1]); fflush(stdin);

	printf("\n");

	printf("Masukkan Matrix Kedua... \n");
	printf("1st rows & 1st column : ");
	scanf("%d", &b[0][0]); fflush(stdin);
	printf("1st rows & 2nd column : ");
	scanf("%d", &b[0][1]); fflush(stdin);
	printf("2nd rows & 1st column : ");
	scanf("%d", &b[1][0]); fflush(stdin);
	printf("2nd rows & 2nd column : ");
	scanf("%d", &b[1][1]); fflush(stdin);

	getchar();

	printf("A = \n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	printf("B = \n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	c[0][0]=(a[0][0]*b[0][0]+a[0][1]*b[1][0]);
	c[0][1]=(a[0][0]*b[0][1]+a[0][1]*b[1][1]);
	c[1][0]=(a[1][0]*b[0][0]+a[1][1]*b[1][0]);
	c[1][1]=(a[1][0]*b[0][1]+a[1][1]*b[1][1]);
	printf("C = \n");
	for (i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}


	getchar();

	return 0;
}