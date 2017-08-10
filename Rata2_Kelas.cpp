#include<stdio.h>

int main()
{
	int i;
	int grade;
	int total;
	int x;
	int average;

	total=0;
	i = 1;
	printf("Enter the amount of data = ");
	scanf("%d", &x);
	fflush(stdin);

	printf("================================================================================");

	while (i <= x )
	{
		printf("Enter grade = ");
		scanf("%d", &grade);
		fflush(stdin);
		total = total + grade;
		i++;
	}

	average = total/x;

	printf("The average is = %d", average);
	getchar();
	return 0;
}