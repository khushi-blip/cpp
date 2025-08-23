#include <stdio.h>

int main() {
    int i;

    // Loop through the numbers 1 to 10
    for(i = 1; i <= 10; i++) {
        if(i % 2 == 0) {
            // If the number is even, print its cube
            printf("Cube of %d (even) = %d\n", i, i * i * i);
        } else {
            // If the number is odd, print its square
            printf("Square of %d (odd) = %d\n", i, i * i);
        }
    }

    return 0;
}
