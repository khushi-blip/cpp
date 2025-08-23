#include<stdio.h>  
int main()
{
    int i,j,rows;
    printf("enter no of rows");
    scanf("%d",&rows);
    for(i=0;i<=rows;i=i+2){
    for(j=0;j<=i;j++){
        printf("* ");
    }
    printf("\n");
    }
}