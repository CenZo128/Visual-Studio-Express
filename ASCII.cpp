#include<stdio.h>

void main()
{
	int i;

	for(i=0;i<256;i++)
		printf("ASCII of %d is %c\n", i,i);
	getchar();
}