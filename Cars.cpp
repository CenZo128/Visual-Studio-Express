#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>



struct data
{
	char nama[15];
	char plat[10];
	struct data *next,*prev;
}*head,*curr,*head1,*curr1;

char nama[15];
	char plat[9];

void push(char nama[],char plat[])
{	
	curr= (struct data*) malloc(sizeof(struct data));
	strcpy(curr->nama,nama);
	strcpy(curr->plat,plat);
	

	if(head==NULL)
	{
		head=curr;
		curr->next=NULL;
	}
	else
	{
		head->prev=curr;
		curr->next=head;
		head=curr;
		
	
	}
	head->prev=NULL;

}

void pop()
{	
	if(head==NULL)
	{
		  printf("No Car at Garage\n");
			getchar();
	}
	else if(head->next==NULL)
	{
		free(head);
		head=curr=NULL;
	}
	else{
	curr=head;
	head=head->next;
	head->prev=NULL;
	free(curr);
	}
}

void pop1()
{
	while(head1)
	{
	push(head1->nama,head1->plat);
	curr1=head1;
	head1=head1->next;
	free(curr1);
	}

}	

void push1(char nama[],char plat[])
{	
	curr1= (struct data*) malloc(sizeof(struct data));
	if (nama==NULL || plat==NULL)
	{
		
	}
	else
	{
	strcpy(curr1->nama,nama);
	strcpy(curr1->plat,plat);
	}

	if(head1==NULL)
	{
		head1=curr1;
		curr1->next=NULL;
	}
	else
	{
		head1->prev=curr1;
		curr1->next=head1;
		head1=curr1;
		
	
	}
	head1->prev=NULL;

}

void add()
{	
	do{
	printf("\ninput owner name: ");
	
	scanf("%[^\n]",nama);
	fflush(stdin);
	}while(strlen(nama)<5 || strlen(nama)>15);
	
	srand(time(NULL));
	plat[0]='B';
	plat[1]=' ';
	plat[2]=rand() %10+48;
	plat[3]=rand() %10+48;
	plat[4]=rand() %10+48;
	plat[5]=rand() %10+48;
	plat[6]=' ';
	plat[7]=rand() %26 +65;
	plat[8]=rand() %26 +65;
	push(nama,plat);

}

void cetak()

{	curr=head;
	curr1=head1;
		printf("-GARAGE-\n");
	if(head==NULL) printf("no car\n\n");
	else 
	{	
		while(curr)
		{
			printf("%-10s | %s\n",curr->plat,curr->nama);
			curr=curr->next;
		}
		printf("=====================================\n");
		printf("Plate Number    | Owner Name\n\n");
	}
	printf("-PARKING LOT-\n");
	if(head1==NULL) printf("no car\n\n");
	else 
	{	
		while(curr1)
		{
			printf("%-10s | %s\n",curr1->plat,curr1->nama);
			curr1=curr1->next;
		}
		printf("=====================================\n");
		printf("Plate Number    | Owner Name\n\n");
	}
	printf("Press ENTER to continue...\n");
	getchar();
}
void menu()
{
printf("-CAR LOT-\n");
printf("1. Add New Car To Garage\n");
printf("2. Move Car To Parking Lot\n");
printf("3. Return All Cars From Parking Lot\n");
printf("4. View All Cars\n");
printf("5. Exit\n");
printf("Enter your choice : ");
}
void main()
{	
	
	int pilih;
do{
	system("cls");
	menu();
	scanf("%d",&pilih);
	fflush(stdin);
system("cls");
	switch(pilih)
	{
	case 1:add();
		break;
	case 2:push1(head->nama,head->plat);pop();
		break;
	case 3:
		pop1();
		break;
	case 4:cetak();
		break;
	
	}
}while(pilih!=5);
}