#include <stdio.h>
#include <string.h>
int main(){
  int length;
  char str1[10];
  char str2[10];
  printf("\n enter a first string[max:10 characters]:");
  scanf("%s",str1);
  printf("\n enter a second string[max:10 characters]:");
  scanf("%s",str2);
  int result=strcmp(str1,str2);
  if (result==0){
  printf("the given strings are equal.");
  }
  else if (result>1){
  printf("the first string is greater.");
  }
else{
  printf("the second string is greater.");
  return 0;
 }
}
