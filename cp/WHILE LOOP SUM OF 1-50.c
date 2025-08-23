/*Print the sum of all even numbers from 1 to 50*/
#include <stdio.h>

int main()
{
    int i=1,sum = 0;
    while (i <= 50) {
        sum = sum+i;
        i = i+2;
    }

    printf("sum of even numbers:%d\n",sum);

}
