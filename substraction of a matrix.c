#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,r1=1,c1=1,r2=1,c2=1;
	int mat1[r1][c1];
	int mat2[r2][c2];
	int sub[r1][c1];
	printf("\n enter the number of row and column of a first matrix \n");
	scanf("%d %d",&r1,&c1);
	printf("\n enter the number of row and column of a second matrix \n");
	scanf("%d %d",&r2,&c2);
    printf("\n enter the element in matrix 1 \n");
    for(i=0;i<r1;i++)
    {
     for(j=0;j<c1;j++)
     {
     	scanf("%d",&mat1[i][j]);
     }
    }
     printf("\n enter the element in matrix 2 \n");
    for(i=0;i<r2;i++)
    {
     for(j=0;j<c2;j++)
     {
     	scanf("%d",&mat2[i][j]);
     }
    }
	printf("\n the 1st matrix is:\n");
    for(i=0;i<r1;i++)
    {
     for(j=0;j<c1;j++)
     {
       printf("%d\t",mat1[i][j]);
     }
        printf("\n");
    }
	
      printf("\n the 2nd matrix is:\n");
    for(i=0;i<r2;i++)
    {
     for(j=0;j<c2;j++)
     {
       printf("%d\t",mat2[i][j]);
     }
     printf("\n");
    }
    printf("\n the sum of two matrix is: \n");
    for(i=0;i<r1;i++)
    {
     for(j=0;j<c1;j++)
     {
     sub[i][j]=(mat1[i][j] - mat2[i][j]);
     printf("%d\t",sub[i][j]);
     }
     printf("\n");
    }
	getch();
	return;
 }
