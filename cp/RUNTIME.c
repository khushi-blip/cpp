#include<stdio.h>
int main(){
  int arr[100];
  int arraysize,i;

  printf("how many elments u wanna enter");
  scanf("%d",&arraysize);
  printf("enter elements");
  for(i=0;i<arraysize;i++){   // array ke andr data jara taking value in runtime
    scanf("%d",&arr[i]);      // taking input from user n storing it in array
   
  } 
  printf("the elements are:\n");
  for(i=0;i<arraysize;i++){   // for printing the array
  printf("%d\t",arr[i]);
  
}

}