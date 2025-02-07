/*
Author:Savio Bijo Thomas
purpose:To find the sum of 2 matrix
*/

#include<stdio.h>
int main(){
  int row,col;
  printf("\n enter the number of rows and column:");
  scanf("%d%d",&row,&col);
  int m1 [row][col];
  int m2 [row] [col];
  int m3 [row] [col];
  int sum=0;
  printf("\n enter the elements of first matrix:");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      scanf("%d",&m1 [i] [j]);
    }
  }
printf("\n enter the elements of second matrix:");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      scanf("%d",&m2 [i] [j]);
      }
    }
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      m3[i][j]= m1 [i] [j]+m2 [i] [j];
      }
    }
    printf("\nThe result of matrix addition is:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", m3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
