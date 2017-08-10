#include<stdio.h>

int main()
{
	int b;
	int a[5]={15,7,18,35,21};
	int i,j;

	for (i=0;i<=4;i++)
		printf("%d ", a[i]);
	printf("\n\n");
	for (i=0;i<4;i++)
	{
		for (j=0;j<4;j++)
		{
			if (a[j]>a[j+1])
			{
				b=a[j];
				a[j]=a[j+1];
				a[j+1]=b;
			}
		}
	}
	for (i=0;i<=4;i++)
		printf("%d ", a[i]);
	getchar();

	return 0;
}