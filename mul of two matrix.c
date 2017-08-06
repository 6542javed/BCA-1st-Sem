#include<stdio.h>
#include<conio.h>
int i,j;
void read(int r,int c,int mat1[10][10],int mat2[10][10])
{
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
}
void display1(int r,int c,int mat1[][10],int mat2[][10])
{
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
}

void mul(int r,int c,int mat1[][10],int mat2[][10],int mat3[][10])
{
	int k;
	int sum=0;
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
}
void display2(int r,int c,int mat3[][10])
{
	printf("\n the Resultant matrix is: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",mat3[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int r=1,c=1;
	int mat1[10][10],mat2[10][10],mat3[10][10];
	printf("\n enter the size of rows: \n");
	scanf("%d",&r);
	printf("\n enter the size of columns: \n");
	scanf("%d",&c);
	read(r,c,mat1,mat2);
	display1(r,c,mat1,mat2);
	mul(r,c,mat1,mat2,mat3);
	display2(r,c,mat3);
	getch();
	return 0;
	
}
