#include<stdio.h>
#include<conio.h>
int main()
{
	int k,n,r;
  printf("\n Enter the value of n");
  scanf("%d",&n);
  for(k=1;k<=n;k++){
    r = k%7;
    if(r!=0){
      printf("%d is not divisible by 7 \n ", k);
    }else{
      printf("\n %d is divisible by 7 \n", k);
    }
  }
	getch();
	return 0;
}


