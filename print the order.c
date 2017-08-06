#include<stdio.h>
#include<conio.h>
void printorder()
{
	int i,j;
	printf("\n enter the limit \n");
	scanf("%d",&i);
	printf("\n the order is: \n");
	for(i=1;i<=4;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("%d\t",i);
	
		}
		printf("\n");
    }
}
    int main()
    {
    	printorder();
    	getch();
    	return 0;
    }

