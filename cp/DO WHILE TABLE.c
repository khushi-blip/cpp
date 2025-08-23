#include<stdio.h>
int main()
{
    int i=1,a;
    printf("enter value :");
    scanf("%d",&a);
    do{
    printf("%d*%d=%d\n",a,i,a*i);
    i++;
    }while(i<=10);
}

