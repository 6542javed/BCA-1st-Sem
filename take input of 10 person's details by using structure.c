#include<stdio.h>
#include<conio.h>
#include<string.h>
typedef struct person
{
	char name[10];
	char address[30];
	int age;
	int ph_no;
	char email[20];
}info;
void main()
{
	int n=2;
	info x[n];
	int i;
	printf("\n enter the following information of 10 person \n");
	for(i=0;i<n;i++)
	{
		printf("\n enter the name:");
		scanf("%s",x[i].name);
		printf("\n enter the address:");
		scanf("%s",x[i].address);
		printf("\n enter the age:");
		scanf("%d",&x[i].age);
		printf("\n enter the ph.no:");
		scanf("%d",&x[i].ph_no);
		printf("\n enter the email:");
		scanf("%s",x[i].email);
	}
	printf("\n display the following information of 10 person \n");
	for(i=0;i<n;i++)
	{
		printf("\n the name,adress,age,ph.no and email values are: \n");
		printf("%s\t",x[i].name);
		printf("%s\t",x[i].address);
		printf("%d\t",x[i].age);
		printf("%d\t",x[i].ph_no);
		printf("%s\t",x[i].email);
	}
	getch();
	return;
}
