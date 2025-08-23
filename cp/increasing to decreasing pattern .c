#include<stdio.h>
int main()
{
    int i,j,rows;
    printf("enter no of rows");
    scanf("%d",&rows);
    for(i=0;i<rows;i++){ 
    for(j=0;j<rows-i;j++){
        
        
        
        printf("   *  "); 

        
    }
    printf("\n"); 
    }
    }

 // for avoiding the 0 we will put j+1 , j for including the 0 value printf("%d",j); this might be workable
// for printing stars printf("*")