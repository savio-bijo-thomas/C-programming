#include<stdio.h>
int main(){
  int limit,i,key,found=0;
  printf("\nenter the number of elements:");
  scanf("%d",&limit);
  int array[limit];
  printf("\nenter the %d elements:",limit);
  for(i=0;i<limit;i++){
    scanf("%d",&array[i]);
  }
  printf("\nenter the number to be searched:");
  scanf("%d",&key);
  for(i=0;i<limit;i++){
    if(key==array[i]){
    found=1;
    break;
    }
    }
    if (found==1){
    printf("\nThe given key found at position:%d",i+1);
  }
    else{
    printf("invalid key.");
    }
  return 0;
}
    
