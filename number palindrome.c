#include<stdio.h>
#include<conio.h>
void main()
{
int n,num,rem=0,rev=0;
printf("\n enter the number \n");
scanf("%d",&n);
num = n;
while(num!=0)
{
	rem=num%10;
	rev=rev*10+rem;
	num=num/10;
}
if(rev==n)
{
 printf("\n%d the number is palindrome \n",n);
}
else
{
	printf("\n%d the number is not palindrome \n",n);
}
getch();
return;
}
