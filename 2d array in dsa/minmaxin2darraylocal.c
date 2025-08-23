#include <stdio.h>

void createarr(int rows, int column, int arr[100][100]) {
    printf("Enter elements of %d rows and %d columns:\n", rows, column);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &arr[i][j]);  
        }
    }
}
int maxno(int arr[100][100],int row,int col){
    int i,j,max=arr[0][0];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    return max;
}
int minno(int arr[100][100],int row,int col){
    int i,j,min=arr[0][0];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }
    return min;
}

void printarr(int rows, int column, int arr[100][100]) {
    printf("Matrix elements are:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < column; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int arr[100][100];
    int rows, column;
    
    printf("Enter no. of rows: ");
    scanf("%d", &rows);
    printf("Enter no. of columns: ");
    scanf("%d", &column);

    createarr(rows, column, arr);
    printarr(rows, column, arr);
    int max=maxno(arr,rows,column);
    printf("maximum element is  %d\n",max);
    int min=minno(arr,rows,column);
    printf("minimun element is %d\n",min);

    return 0;
}