#include <stdio.h>
int main()
{
  int arr[20];
  int arraysize,i,max;
      printf("how many elemts  u wanna enetr");
  scanf("%d", &arraysize);

  printf("eneter elemets %d\n", arraysize); // putting lements in array
  for (i = 0; i < arraysize; i++)
  {
    scanf("%d", &arr[i]);
  }
  max=arr[0];// we are putting max here because when we execute it so for max it might give garbage
  // value that is most big in nos but its noot max acc to ques
  for (i = 0; i < arraysize; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }
  }

  printf("The maximum value in the array is: %d\n", max);
}
