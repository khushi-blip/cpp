#include<stdio.h>
int main()
{
    int i=1;
    printf("enter value from user");
    scanf("%d",%i);
    do{
        printf("%d",i);
        i++;
    }while(i<=50);
}
