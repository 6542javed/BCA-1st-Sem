#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,j;
	printf("\n enter the limit \n");
	scanf("%d",&i);
	printf("\n the order is: \n");
	for(i=1;i<=n;i++)
	{
		for(j=0;j<i;j++) 
		{
			printf("%d\t",i);
		}
		printf("\n");
      }
	
		if(i=4)
    	{
	    	printf("%d\t\t\t",i);
	    }
	    else if(i=3)
	    {
		   printf("%d\t\t",i);	
	    }
	    else if(i=2)
	   {
	    	printf("%d\t",i);	
	   }
	    else
	    {
	     printf("%d",i);
        }	
	
	
	getch();
	return;
}
