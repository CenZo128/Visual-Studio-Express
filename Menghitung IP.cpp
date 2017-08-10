#include<stdio.h>
#include<math.h>

void clr()
{
	int i;
	for (i=0;i<10;i++)
	{
		printf("\n");
	}
}

float ip(float a, float b, float c, float d, float e, float f)
{
	float x;
	x=((a*2+b*4+c*6+d*4+e*2+f*2)/20.0);
	return x;
}
int main()
{
	int a,b,c,d,e,f;
	float y;
	clr();
	printf("<<<<<<<<<<<<<<<<<<<< PROGRAM MENGHITUNG IP >>>>>>>>>>>>>>>>>>>>");
	printf("\n\n");
	printf("Masukkan Grade dari...\n");
	do{
	printf("1. Aljabar Linear			: ");
	scanf("%d", &a); fflush(stdin);}while(a<1 || a>4);
	do{
	printf("2. Matematika Diskrit			: ");
	scanf("%d", &b); fflush(stdin);}while(b<1 || b>4);
	do{
	printf("3. Algoritma & Pemrograman		: ");
	scanf("%d", &c); fflush(stdin);}while(c<1 || c>4);
	do{
	printf("4. Pengantar Teknologi Informasi	: ");
	scanf("%d", &d); fflush(stdin);}while(d<1 || d>4);
	do{
	printf("5. English Entrant			: ");
	scanf("%d", &e); fflush(stdin);}while(e<1 || e>4);
	do{
	printf("6. Character Building 1			: ");
	scanf("%d", &f); fflush(stdin);}while(f<1 || f>4);
	getchar();

	clr();
	printf("===========================================================================\n");
	printf("I   Mata Kuliah				I   SKS   I   Grade   I   Total   I\n");
	printf("---------------------------------------------------------------------------\n");
	printf("I 1. Aljabar Linear			I    2    I     %d     I     %d     I\n", a,a*2);
	printf("I 2. Matematika Diskrit			I    4    I     %d     I     %d    I\n", b,b*4);
	printf("I 3. Algoritma & Pemrograman		I    6    I     %d     I     %d    I\n", c,c*6);
	printf("I 4. Pengantar Teknologi Informasi	I    4    I     %d     I     %d    I\n", d,d*4);
	printf("I 5. English Entrant			I    2    I     %d     I     %d     I\n", e,e*2);
	printf("I 6. Character Building 1		I    2    I     %d     I     %d     I\n", f,f*2);
	printf("---------------------------------------------------------------------------\n");
	getchar();
	
	y=ip(a,b,c,d,e,f);
	printf("Nilai IP : %.2f ", y);
	return 0;
}