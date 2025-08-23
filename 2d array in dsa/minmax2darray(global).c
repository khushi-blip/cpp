#include<stdio.h>
int arr[100][100];
int col,row;
void creatarray() {
    printf("Enter row size: ");
    scanf("%d", &row); 
    printf("Enter column size: ");
    scanf("%d", &col); 

    printf("Enter elements: \n");
    for(int i = 0; i < row; i++) {
        for(int j = 0; j<col; j++){
            scanf("%d", &arr[i][j]);
        }
    }
}           
void minelement(){
    int min;
    for(int i=0;i<row ; i++)
    {
        for (int j= i;j<col;j++){
            if(arr[i][j]<min)
            min=arr[i][j];

        }
    }
printf(" minimum element is %d\n",min);
}
void maxelement(){
    int i,j,max=arr[0][0];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    
}

void printArray() {
    printf("Array elements:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]); 
        }
        printf("\n");
    }
}
void updatearray(){
  int rowpos,colpos;
  printf("enter row position");
  scanf("%d",&rowpos);
  if(rowpos>row||rowpos<0){
    printf("invalid");
  }
  else{
    printf("enter position of column in row %d",rowpos);
    scanf("%d",&colpos);
    if(colpos>col || colpos<0){
      printf("invalid");
    }
    else{
      printf("enter value to update");
      int value;
      scanf("%d",&value);
    
    arr[rowpos-1][colpos-1]=value;
    printf("value updates successfully");

  }
}
}

int main() {
    
    creatarray();
    printArray();
    minelement();
    maxelement();
    updatearray();
    printArray();
 
}