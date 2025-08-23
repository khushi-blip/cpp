#include<stdio.h>
int main()
{
  int arr[20];
  int arraysize,max1,i,max2;
  printf("how many elements u wana eneterr");
  scanf("%d",&arraysize);
  printf("enter elements\n");

  for(i=0;i<arraysize;i++){   // taking values in array
    scanf("%d",&arr[i]);
  }
  max1=max2=0;

  for(i=0;i<arraysize;i++){
    if(arr[i]>max1){
      max2=max1;
      max1=arr[i];
    }
    else if(arr[i]>max2 && arr[i]<max1)// we update to max2 beacause arr[i] is greater than seconf element
    max2=arr[i];
  }
  printf("second largest element is %d\t",max2);


  
}