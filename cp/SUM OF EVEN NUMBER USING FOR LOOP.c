/*Print the sum of all even numbers from 1 to 50*/

#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=1;i<=50;i++){
        if(i%2==0){
            sum+=i;
            printf("even no sum %d\n",i,sum);
        }
    }
}
