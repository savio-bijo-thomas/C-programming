#include<stdio.h>
int main(){
  int row,col;
  printf("\n enter number of row and column:");
  scanf("%d %d",&row,&col);
  int matrix [row][col];
  printf("\n enter the elements:");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      scanf("%d",&matrix [i][j]);
    }
   }
   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      printf("matrix:%d\t",matrix[i][j]);
     }
    printf("\n");
    }
    return 0;
  }
