#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("enter the two numberss");
	scanf("%d %d",&a,&b);
	printf("values before swapping a=%d\t b=%d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("values after swappping a=%d\t b=%d\n",a,b);
	getch();
	return;
}



