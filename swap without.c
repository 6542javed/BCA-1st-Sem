#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b;
	printf("enter the two numbers");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("values after swapping a=%d\t, b=%d\n",a,b);
	getch();
	return;
}

