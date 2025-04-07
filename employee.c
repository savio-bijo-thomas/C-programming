/*
Program to print n employee details using structure
Author:Kevin P Tom
Date:02-04-2025
*/
#include<stdio.h>
typedef struct{
  char name[20];
  int id;
  float salary;
}student;
int main(){
  int limit;
  printf("Enter the number of the employee:");
  scanf("%d",&limit);
  student s[limit];
  for(int i=0;i<limit;i++){
    printf("Enter the name of the employee:");
    getchar();
    gets(s[i].name);
    printf("\nEnter the id:");
    scanf("%d",&s[i].id);
    printf("\nEnter the salary:");
    scanf("%f",&s[i].salary);
  }
  for(int i=0;i<limit;i++){
    printf("\nName:%s,Id:%d,Salary:%f",s[i].name,s[i].id,s[i].salary);
  }
  return 0;
}
