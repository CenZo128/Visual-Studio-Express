#include<stdio.h>
#include<string.h>
 
void main()
{
    char nama[100],flag=0;
    int i,x;
    printf("Masukkan Kata/Kalimat Alay : ");
    scanf("%[^\n]", nama); flushall();
    for(i=0;i<strlen(nama);i++)
    {
        if(nama[i]=='0')
        {
            nama[i]='o';
            flag++;
        }
        else if(nama[i]=='1' || nama[i]=='!')
        {
            nama[i]='i';
            flag++;
        }
        else if(nama[i]=='3')
        {
            nama[i]='e';
            flag++;
        }
        else if(nama[i]=='4' || nama[i]=='@')
        {
            nama[i]='a';
            flag++;
        }
        else if(nama[i]=='5' || nama[i]=='$')
        {
            nama[i]='s';
            flag++;
        }
        else if(nama[i]=='7')
        {
            nama[i]='j';
            flag++;
        }
        else if(nama[i]=='8' || nama[i]=='&')
        {
            nama[i]='b';
            flag++;
        }
        else if(nama[i]=='9' || nama[i]=='6')
        {
            nama[i]='g';
            flag++;
        }
    }
    for(i=0;i<strlen(nama);i++)
    {
        printf("%c", nama[i]);
    }
    if (flag>=0 && flag<=5)
        printf("\nAlay Level anda : Low");
    else if (flag>=6 && flag<=10)
        printf("\nAlay Level anda : Medium");
    else
        printf("\nAlay Level anda : High");
    getchar();
}