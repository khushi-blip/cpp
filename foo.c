#include<stdio.h>
int foo(int s[],int size){
  if(size==0)return 0;
  if(size==1)return 1;
  
  if(s[0]!=s[1])return (1+foo(s+1,size-1));
  
  return (foo(s+1,size-1));
}
int main()
{
  int A[]={0,1,2,2,2,0,0,1,1};
  printf("%d",A+1);
printf("%d",foo(A,9));
}
