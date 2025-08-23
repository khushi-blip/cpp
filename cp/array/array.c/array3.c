#include <stdio.h>
int main()
{
  int arr[10] = {10, 12, 50, 31, 5, 61, 41, 21, 9, 11}, i;
  for (i = 0; i < 10; i++)// TO print array elemnts
  {
    if (i % 2 == 0)
    {
      int x = arr[i];
      arr[i] = x + ((x * 10) / 100);
    }
    else
    {
      int x = arr[i];
      arr[i] = x + ((x * 15) / 100);
    }
  }
  for (i = 0; i < 10; i++){ // to print
  
    printf("%d\t", arr[i]);

  }
  // print only the values present on the even index of the array
}