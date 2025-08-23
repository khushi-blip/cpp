#include<stdio.h>
int main()
{
  int arr[20];
  int arraysize,min,i;
  printf("how many elements u wana eneterr");
  scanf("%d",&arraysize);
  printf("enter elements\n");

  for(i=0;i<arraysize;i++){   // taking values in array
    scanf("%d",&arr[i]);
  }
  min=arr[0];

  for(i=0;i<arraysize;i++){
    if(arr[i]<min){
      min=arr[i];
    }
  }
  printf("the minimuum value of array is %d\t",min);


  
}