#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

struct simpul{
	int angka;
	struct simpul *next;
	};
simpul *p, *first, *last;

void cetak()
{
	char string[10];
	int j;
	string[0]='X';
	string[1]='Y';
	string[2]=' ';
	string[3]=rand() %10+48;
	string[4]=rand() %10+48;
	string[5]=rand() %10+48;
	string[6]=rand() %10+48;
	string[7]=' ';
	string[8]=rand() %10+65;
	string[9]=rand() %10+65;

	printf("String : ");
		for (j=0;j<10;j++)
			{
				printf("%c", string[j]);
			}

}
void main()
{
	int a,i,j;
	char string[10];
	srand(time(NULL));

	a=rand() %10;
	printf("A : %d", a);
	printf("\n");

	/*string[0]='X';
	string[1]='Y';
	string[2]=' ';
	string[3]=rand() %10+48;
	string[4]=rand() %10+48;
	string[5]=rand() %10+48;
	string[6]=rand() %10+48;
	string[7]=' ';
	string[8]=rand() %10+65;
	string[9]=rand() %10+65;*/

	for (i=0;i<3;i++)
	{
		cetak();
		printf("\n");
	}
	getchar();

}