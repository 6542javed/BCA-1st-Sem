#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
 { int a,b,c,d;
 float r1,r2,x,y;
 printf("\n enter the value of three no \n");
 scanf("%d%d%d",&a,&b,&c);
 d=(b*b-(4*a*c));
 if(d>=0)
 {
 	r1=(-b+sqrt (d))/(2*a);
	r2=(-b-sqrt (d))/(2*a);
    printf("\n  the roots of the quadratic eq are %f%f \n",r1,r2);
 }
 else
 {
  d=-d;
  x=(-b+sqrt (d))/(2*a);
  y=(-b-sqrt (d))/(2*a);
 	printf("\n the roots are imaginary \n",x,y);
 }
 getch();
 return;
 }
