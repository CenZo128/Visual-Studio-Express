#include<stdio.h>

int fibo(int x)
{
	int k,a=0,b=1,c=0;
	if (x==1)
		return 0;
	else if (x==2)
		return 1;
	for (k=0;k<x-2;k++)
	{
		c=a+b;
		a=b;
		b=c;
	}
	return c;
}

int main()
{
	int i,x;
	printf("Masukkan Angka Perulangan = ");
	scanf("%d", &x); fflush(stdin);
	
	/*printf("%d ", a);	
	printf("%d ", b);*/

	for (i=1;i<=x;i++)
	{
	printf("%d ", fibo(i));
	}
 return 0;
}



//int main()
//{
//	int i,x,a=0,b=1,c;
//	printf("Masukkan Angka Perulangan = ");
//	scanf("%d", &x); fflush(stdin);
//	
//	printf("%d ", a);
//	
//	printf("%d ", b);
//
//	for (i=0;i<x-2;i++)
//	{
//		c=a+b;
//		a=b;
//		b=c;
//		printf("%d ", c);
//	}
//	getchar();
//	return 0;
//}

