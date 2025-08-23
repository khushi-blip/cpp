/*Program to print the sqaure of all odd numbers from 1-100*/
#include<stdio.h>
int main()
{
    int i=1;
    while(i<=100){
        if(i%2==1)
        printf(" sqaure of  odd no %d = %d\n",i,i*i);
        i++;
        }

}
