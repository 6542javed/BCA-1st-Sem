#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("enter the three numbers");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&b>c)
{
	printf("%d is the largest",a);
}
else if(b>a&&b>c)
{
printf("%d is the largest",b);
}
else
{
	printf("%d is the largest",c);
}
getch();
return;
}
