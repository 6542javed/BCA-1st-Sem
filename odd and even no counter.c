#include<stdio.h>
#include<conio.h>
void odd()
{
	int i,n,oc=0;
	printf("\nEnter the limit: ");
	scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
    	oc = oc + 1;
    }

	printf("\nOdd no counter: %d",oc);

}	

void even()
{
	int i=0,n,m;
	printf("\n enter the limit \n");
	scanf("%d",&n);
	printf("\n odd no counter:\n");
for(i=0;i<=10;i++)
m=i%2;
if(m==0)
{
printf("%d\t",i);
}
	
}
void main()
{
	odd();
	//even();
	getch();
	return;
}
