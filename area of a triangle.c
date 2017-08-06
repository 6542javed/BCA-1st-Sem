#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int a,b,c;
	float s,A;
	printf("\n Enter the three sides of the triangle: \n");
	scanf("%d %d %d",&a,&b,&c);
	{
	 s=(a+b+c)/2;
	 A=sqrt(s*(s-a)*(s-b)*(s-c));
    }
	printf("\n the area of the triangle is: %f",A);
	getch();
	return;
}


