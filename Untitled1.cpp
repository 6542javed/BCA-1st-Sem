#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b;
 printf("enter the first number");
 scanf("d",&a);
 printf("enter the second number");
 scanf("%d",&b);
 printf("value of a and b before swapping is %d\n %d",a,b); 
 
 a=a+b;
 b=a-b;
 a=a-b;
 printf("\n value of a and b after swapping is %d\n %d",a,b);
 getch();
 return;
}


