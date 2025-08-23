#include <stdio.h>
int main()
{
  int arr[10];
  int arraysize, sum = 0;
  printf("hoe many elemts u wanna enetr");
  scanf("%d", &arraysize);
  printf("enter elemts\n");
  for (int i = 0; i < arraysize; i++) // taking value in runtime
  {
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < arraysize; i++)

  {
    if (arr[i] % 2 == 0)
    {
      sum = sum + arr[i];
    }
  }
  printf("%d\t", sum);
}