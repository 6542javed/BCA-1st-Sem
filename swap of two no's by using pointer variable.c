#include<stdio.h>
#include<conio.h>
void exchange(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("\n The values after swapping a=%d,b=%d \n",a,b);
}
int main()
{
	int a,b;
	printf("\n Enter the two no's: \n");
	scanf("%d %d ",&a,&b);
	printf("\n  The values before swapping a=%d,b=%d",a,b);
	exchange(&a,&b);
	getch();
	return 0;
}
