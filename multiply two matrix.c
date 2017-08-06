#include<stdio.h>
#include<conio.h>
void main()
{
	int mat1[10][10],mat2[10][10],mat3[10][10],i,j,k,r=2,c=2;
	int sum=0;	
	printf("\n enter the size of rows: \n");
	scanf("%d",&r);
	printf("\n enter the size of columns: \n");
	scanf("%d",&c);
	printf("\n enter the first matrix: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("\n enter the second matrix: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	printf("\n the first matrix is: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",mat1[i][j]);
		}
		printf("\n");
	}
	printf("\n the second matrix is: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",mat2[i][j]);
		}
			printf("\n");
	}
     for(i=0;i<2;i++)
	  {
		for(j=0;j<2;j++)
		{  
		    sum=0;
			for(k=0;k<2;k++)
			{
				sum=sum+mat1[i][k]*mat2[k][j];
			}	
		      mat3[i][j]=sum;
		}
	}
	printf("\n the Resultant matrix is: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",mat3[i][j]);
		}
		printf("\n");
	}
	getch();
	return;
}

