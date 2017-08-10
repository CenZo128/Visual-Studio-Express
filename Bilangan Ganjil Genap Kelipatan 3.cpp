#include<stdio.h>

void main()
{
	int i,x;
	printf("Masukkan angka : ");
	scanf("%d", &x);fflush(stdin);
	for(i=1;i<=x;i++)
	{
		if ((i%2==1 || i%2==0) && i%3==0)
		{
			if(i%2==1 )
			{
				printf("%d	adalah Bilangan Ganjil dan Kelipatan 3\n", i);
			}
			else if(i%2==0)
			{
				printf("%d	adalah Bilangan Genap dan Kelipatan 3\n", i);
			}
		}
		else
		{
			if(i%2==1 )
			{
				printf("%d	adalah Bilangan Ganjil\n", i);
			}
			else if(i%2==0)
			{
				printf("%d	adalah Bilangan Genap\n", i);
			}
		}
	}
	getchar();
}