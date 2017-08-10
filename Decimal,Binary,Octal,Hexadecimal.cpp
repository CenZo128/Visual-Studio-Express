#include<stdio.h>
#include<string.h>
#include<math.h>


void binary(int x)
{
	if (x<=0)
		return;
	binary(x/2);
	printf("%d", x%2);
}
void octal(int x)
{
	if (x<=0)
		return;
	octal(x/8);
		printf("%d", x%8);
}
void main()
{
	int i,a,menu;
	printf("Enter the Decimal Number : ");
	scanf("%d", &a); fflush(stdin);
	do
	{
		do
		{
			for(i=0;i<=25;i++)
				printf("\n");
			printf("1. Show Data\n");
			printf("2. Convert to Binary Number\n");
			printf("3. Convert to Octal Number\n");
			printf("4. Convert to Hexadecimal Number\n");
			printf("5. EXIT\n");
			printf("Your Choice : ");
			scanf("%d", &menu); fflush(stdin);
		}while(menu<1 || menu>5);
			switch(menu)
			{
			case 1:
				printf("The data is %d\n", a);
				getchar();
				break;
			case 2:
				printf("The Binary Number is : ");
				binary(a);
				printf("\n");
				getchar();
				break;
			case 3:
				printf("The Octal Number is : ");
				octal(a);
				printf("\n");
				getchar();
				break;
			case 4:
				printf("The Hexadecimal Number is : %X\n", a);
				getchar();
				break;
			case 5:
				printf("Gud Luck Yoo Mamen.....!!!!!\n");
				break;
			}
	}while(menu!=5);
	
	getchar();
}