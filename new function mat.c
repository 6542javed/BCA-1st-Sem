#include<stdio.h>
#include<conio.h>
 int i,j;
 void read(int r,int c,int mat1[20][20])
{
    
    printf("\n enter the elements one by one \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
}
void display(int r,int c,int mat1[20][20])
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
 int main()
 {
 	int r=1,c=1;
 	int mat1[r][c],mat2[r][c];
 	printf("\n enter the size of rows: \n");
 	scanf("%d",&r);
 	printf("\n enter the size of the column: \n");
 	scanf("%d",&c);
 
 	read(r,c,mat1);
 	display(r,c,mat1);
    transpose(r,c,mat1,mat2);
    display(r,c,mat2);

 	getch();
 	return 0;
 }
