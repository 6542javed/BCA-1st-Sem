#include<stdio.h>
#include<conio.h>

int i,j;

void read(int r,int c,int mat1[20][20])
{

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
}
void display(int mat1[20][20],int r,int c)
{
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d \t",mat1[i][j]);
		}
		printf("\n");
	}
}
 void transpose(int r,int c,int mat1[20][20],int mat2[20][20])
 {
 	printf("\n the transpose of a matrix is: \n");
 	for(i=0;i<r;i++)
 	{
 		for(j=0;j<c;j++)
 		{
 			mat2[j][i]=mat1[i][j];
 		}
 	}
 }
 void main()
 {
 	int r=3,c=3;
 	int mat1[r][c],mat2[r][c];
 	printf("\n enter the size of rows: \n");
 	scanf("%d",&r);
 	printf("\n enter the size of the column: \n");
 	scanf("%d",&c);
 
 	printf("\nEnter the matrix:\n");
 	read(r,c,mat1);
 
 	printf("\nThe orginal matrix is\n");
 	display(mat1,r,c);
 
// 	printf("\nThe transpose matrix is\n");
// 	transpose(r,c,mat1,mat2);
// 	display(r,c,mat2);
 	getch();
 	return;
 }
