#include <stdio.h>
#include <stdlib.h>
void reallocx(int *,int *);
void reallocx(int *q,int*p)
{
  p = (int *)malloc(4 * sizeof(int));//first allocate
  q = (int *)realloc(p, sizeof(int) * 4);// then reallocate
  if (q != NULL)
  {

    printf("memory reallocated suucess\n");
  }
  else
  {
    printf("error");
  }
  printf("%p\n", q);
  free(q);
  printf("hello");
  if (q == NULL)
  {
    printf("memoery deallocted");
  }
}
int main()
{
  int *q,*p;
  reallocx(q,p);
}