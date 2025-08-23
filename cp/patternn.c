#include<stdio.h>
void hi(){
    int i,j,rows,a=2;
    printf("enter no of rows");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){ 
    for(j=1;j<=i;j++){
         printf("%d ",a); 
         a+=2;

       }
       printf("\n"); 
    }
    }
    int main()
    {
      hi();
    }

 