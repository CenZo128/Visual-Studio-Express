#include<stdio.h>
#include<string.h>

void main()
{
	char nama[50];
	int i,menu;
	printf("Masukkan Nama : ");
	scanf("%[^\n]", nama); fflush(stdin);
	do
	{
		do
		{
		printf("\n\nMenu...\n");
		printf("1. Spell Horizontally\n");
		printf("2. Spell Vertically\n");
		printf("3. EXIT\n");
		printf("Pilih : ");
		scanf("%d", &menu);fflush(stdin);
		}while(menu<1 && menu>2);

		switch(menu)
		{
		case 1: 
			for(i=0;i<strlen(nama);i++)
			{
				printf("%c ", nama[i]);
			}
			break; 
		case 2: 
			for(i=0;i<strlen(nama);i++)
			{
				printf("%c\n", nama[i]);
			}
			break;
		}
	}while(menu!=3);
	getchar();
}