#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,l,m,n,sp;
	
	printf("\n enter the limit:\n");
	scanf("%d",&n);
	sp=n;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<sp;j++)
		{
			printf("   ");
		}
		sp--;
		m=i;
		for(k=1;k<=i;k++)
		{
			printf("%d",m);
			m++;
		}
		m=m-2;
		for(l=1;l<i;l++)
		{
			printf("%d",m);
			m--;
		}
		printf("\n \n");
	}
	getch();
	return;
}
