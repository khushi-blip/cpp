#include <stdio.h>
int main()
{
  int a[10] = {10, 32, 13, 42}, sum = 0;
  for (int i = 0; i < 10; i++)
  {
    if (a[i] % 2 == 1)
    {
      sum = sum + a[i];
    }
  }
  printf("%d\t", sum);
}