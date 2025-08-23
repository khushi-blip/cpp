#include<stdio.h>
int main()
{
  int arr[30][30],i,j,trans[30][30],row,column,m1[30][30],m2[30][30];
  printf("enter no of rows:");
  scanf("%d",&row);
  printf("enter no of column");
  scanf("%d",&column);
  // for taking value of row 
  for(i=0;i<row;i++){
    for(j=0;i<column;j++){
      scanf("%d",&arr[i][j]);
    }
  }
  // for loop matrix 1
  printf("enter matrix1:");
  for(i=0;i<row;i++){
    for(j=0;i<column;j++){
      scanf("%d",&m1[i][j]);
    }
  }
  // for loop matrix 2
  printf("enter value of matrix2");
  for(i=0;i<row;i++){
    for(j=0;i<column;j++){
      scanf("%d",&m2[i][j]);
    }
  }
  // printing matrix 1
  for(i=0;i<row;i++){
    for(j=0;i<column;j++){
      printf("%d\t",m1[i][j]);
    }
  }
  // printig matrix 2
  for(i=0;i<row;i++){
    for(j=0;i<column;j++){
      printf("%d\t",m2[i][j]);
    }
  }
  // for transpose
  for(i=0;i<row;i++){
    for(j=0;i<column;j++){
      trans[j][i]=m1[i][j];
      m1[i][j]=m2[j][i];
      m2[j][i]=trans[j][i];

    }
  }
  // for pritng transpose
  for(i=0;i<row;i++){
    for(j=0;i<column;j++){
      printf("%d\t",trans[j][i]);
    }
    printf("\n");
  }
}


                                   
                
                