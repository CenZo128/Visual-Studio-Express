#include<stdio.h>
#include<math.h>

int faktorial(int n)
{
	if (n==0)
		return 1;
	else 
		return n*faktorial(n-1);
}
int fak ( int n)
{
	if (n==1) {
		printf("1 ");
		return 1;}
	else {
		printf("%d. ", n);
		return n*fak(n-1);}
}
void main()
{
	int a,b,c,i,j=1;
	printf("Masukkan angka : ");
	scanf("%d", &a); fflush(stdin);

	b=faktorial(a);
	printf("%d! = ", a);
	for(i=a;i>=2;i--)
	{
		j*=i;
		printf("%d.", i);
	}
	printf("1 ");
	printf(" = %d", b);

	printf("\n");

	printf("Jadi hasil dari %d! = ", a);
	c=fak(a);
	printf("= %d", c);

	getchar();
}