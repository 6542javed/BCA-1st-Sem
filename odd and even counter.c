#include<stdio.h>
#include<conio.h>
void odd()
{
	int i=1,n;
	printf("\n enter the limit \n");
	scanf("%d",&n);
	printf("\n odd no counter:\n");
	for(i=1;i<10;i=i+2)
	{
		printf("%d\t",i);	
	}
	
}	

void even()
{
	int i,n;
	printf("\n enter the limit \n");
	scanf("%d",&n);
	printf("\n even no counter:\n");
	for(i=0;i<10;i=i+2)
	{
    printf("%d\t",i);
    }
	
}
void main()
{
	odd();
	even();
	getch();
	return;
}
