#include<stdio.h>
void hello(){
    int i,j,rows;
    printf("enter no of rows");
    scanf("%d",&rows);
    for(i=0;i<rows;i++){ 
    for(j=0;j<rows-i;j++){
     
    

     printf("*"); 

        
    }
    printf("\n"); 
    }
  }
  int main(){
    hello();
  }
    

 