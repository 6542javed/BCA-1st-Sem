#include<stdio.h>
#include<conio.h>
void main()
{
 int r,c,i,j;
 int mat[20][20];
 printf("\n enter the size of the row \n");
 scanf("%d",&r);
 printf("\n enter the size of the column \n");
 scanf("%d",&c);
 printf("\n enter the elements in the matrix \n");
 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
  	scanf("%d",&mat[i][j]);
  }
}
 printf("\n the matrix is:\n");

 for(i=0;i<r;i++)
 {
  for(j=0;j<c;j++)
  {
  printf("%d\t",mat[i][j]);
  }
  printf("\n");
}

printf("\n display the major diagonal elements of the matrix: \n");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		if(i==j)
		printf("%d\t",mat[i][j]);
	}
	  printf("\n");
}

printf("\n display the minor diagonal elements of the matrix: \n");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		if(j==r-1-i)
	    printf("%d\t",mat[i][j]);
	}
	 printf("\n");
}

 getch();
 return;
}
