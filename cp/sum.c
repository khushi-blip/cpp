/*Print the sum of all even numbers from 1 to 50*/


#include <stdio.h>

int main() {
    int i, sum = 0;

    // Loop through numbers from 1 to 50
    for(i = 1; i <= 50; i++) {
        if(i % 2 == 0) {
            // If the number is even, add it to the sum
            sum = sum + i;
        } else {
            // If the number is odd, just print it
            printf("%d\n", i);
        }
    }

    // After the loop, print the sum of even numbers
    printf("Sum of even numbers = %d\n", sum);

    return 0;
}
