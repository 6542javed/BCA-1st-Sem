#include<stdio.h>
#include<conio.h>
void main()
{
 int i,n;
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
 printf("\nIndex\n");
 printf("\nElements at even index are:\n");
 for(i=0;i<n;i=i+2)
 {
 	printf("%d \t",arr[i]);
 }

 printf("\nElements at odd index are:\n");
 
 for(i=1;i<n;i=i+2)
 {
 	printf("%d \t",arr[i]);
 }

 printf("\nValue\n");
 printf("\nEven Elements  are:\n");
 for(i=0;i<n;i++)
 {
 	if(arr[i]%2==0)
 	printf("%d \t",arr[i]);
 }

 printf("\nOdd Elements  are:\n");
 for(i=0;i<n;i++)
 {
 	if(arr[i]%2!=0)
 	printf("%d \t",arr[i]);
 }


 getch();
 return;
}
