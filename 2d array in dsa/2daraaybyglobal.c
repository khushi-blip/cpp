#include<stdio.h>
#define MAX 100// macros
int arr[100][100];
int row,col;
void createarray(){
  printf("enter row size");
  scanf("%d",&row);
  printf("enter column size");
  scanf("%d",&col);
  printf("enter elements");
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      scanf("%d",&arr[i][j]);
    }
  }
}
void printarray(){
  for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
      printf("%d\t",arr[i][j]);
    }
    printf("\n");
  }

}
int main(){
  
  createarray();
  printarray();

}