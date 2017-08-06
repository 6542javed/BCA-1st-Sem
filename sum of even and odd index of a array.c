#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n,so=0,se=0;
 int arr[n];
 printf("\n enter the size of the array \n");
 scanf("%d",&n);
 printf("\n enter the elements in the array \n");
 for(i=0;i<n;i++)
 {
 	scanf("%d",&arr[i]);
 }
 printf("\n the array elements are: \n");
 for(i=0;i<n;i++)
 {
 printf("%d\t",arr[i]);
 }

 printf("\nElements at even index are:\n");
 
 for(i=0;i<n;i=i+2)
 {
   printf("%d\t",arr[i]);
   se += arr[i];
 }

 printf("\nElements at odd index are:\n");
 
 for(i=1;i<n;i=i+2)
 {
    printf("%d\t",arr[i]);
    so += arr[i];
 }
 printf("\n Sum of the even index is: %d",se);
 
printf("\n Sum of the odd index is: %d",so);

 getch();
 return;
}

