#include<stdio.h>
int power(int base,int pow){
  if(pow==0){
    return 1;
    }
  else{
  return base*power(base,pow-1);
  }
  }

  int main(){
  int base,pow;
  printf("enter the base number:");
  scanf("%d",&base);
  printf("enter the exponent:");
  scanf("%d",&pow);
  printf("answer is %d:",power(base,pow));
  return 0;
  }
