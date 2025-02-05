#include<stdio.h>
int main(){
  int limit,i,j,temp;
  printf("\n enter the limit:");
  scanf("%d",&limit);
  int numbers[limit];
  printf("enter the elements:");
  for(i=0;i<limit;i++){
  scanf("%d",&numbers[i]);
  }
  for(i=0;i<limit-1;i++){
    for(j=0;j<limit-i;j++){
      if(numbers[j]>numbers[j+1]){
        temp=numbers[j];
        numbers[j]=numbers[j+1];
        numbers[j+1]=temp;
      }
     }
  }
  printf("\n the sorted array:");
  for(int i=0;i<limit;i++){
    printf("%d\t",numbers[i]);
    }
  return 0;
}
      
    
  
