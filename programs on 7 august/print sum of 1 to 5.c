#include<stdio.h>
#include<conio.h>
int main()
{
  int i,sum;
  sum = 0;
  for(i=1;i<6;i++){
    sum = sum + i;
  }
  printf("%d is the sum of 1 to 5.", sum);
  getch();
  return 0;
}
