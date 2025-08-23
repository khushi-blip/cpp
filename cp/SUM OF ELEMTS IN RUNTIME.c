#include <stdio.h>
int main()
{
  int arr[20];
  int arraysize,i,sum=0;
  printf("how many elments u wanna enter");
  scanf("%d",&arraysize);
  printf("enter eleemnts\n");

  for (int i = 0; i < arraysize; i++) // taking value in runtime
  {

        
        
        scanf("%d",&arr[i]);
  }
  for(i=0;i<arraysize;i++){
    sum+=arr[i];
  }
  printf("sum of elemnst %d",sum);
}

  
  /*for(i=0;i<arraysize;i++){
  printf("%d\t",arr[i]);
}*/
