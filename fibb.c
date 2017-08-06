#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,first=0,second=1,next;
	printf("enter the limit");
	scanf("%d",&n);
	printf("the fibbonace seriese is %d\t %d\t %d\t",first,second);
	for(i=1;i<n-1;i++)
	{
		next=first+second;
		printf("%d\t",next);
		first=second;
		second=next;
	}
	getch();
	return;
}

	

