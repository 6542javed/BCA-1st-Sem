#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	printf("enter the character");
	scanf("%c",&c);
	if(c>=65 && c<=91)
	{
		printf("equivalent char %c", c+=32);
	}
	else if(c>=97&&c<=123)
	{
		printf("equivalent char %c", c-=32);
	}
	getch();
	return;
}
