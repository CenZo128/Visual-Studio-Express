#include<stdio.h>

void main()
{
	int i,faktor=0,x;
	printf("Masukkan Angka : ");
	scanf("%d", &x); fflush(stdin);
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			faktor++;
		}
	}
	if(faktor==2)
	{
		printf("Bilangan Prima");
	}
	else 
		printf("Bukan Bilangan Prima");
	getchar();
}