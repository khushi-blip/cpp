#include<stdio.h>
void table();
int a,i;
    void table(){
    printf("enter no from user");
    scanf("%d",&a);
    for(i=1;i<=10;i++){
    printf("%d*%d =%d\n",a,i,i*a);
    }
  }

int main()
{
  table();
  
}
