#include<stdio.h>
#include<string.h>

int main()
{
	int i,j;
	char b[100];
	char huruf[5][100]={"banana split","endeavour man","dude","apple","cherry"};

	for (i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if((strcmp(huruf[j],huruf[j+1]))>0)
			{
				strcpy(b,huruf[j]);
				strcpy(huruf[j],huruf[j+1]);
				strcpy(huruf[j+1],b);
			}
		}
	}
	for (i=0;i<=4;i++)
		printf("%s ", huruf[i]);
	getchar();
	return 0;
}