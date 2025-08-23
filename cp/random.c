#include <stdio.h>

int main() {
    int sum_even = 0;

    // Loop through numbers from 2 to 50 (inclusive) with a step of 2
    for (int num = 2; num <= 50; num += 2) {
        sum_even += num;
    }

    // Print the sum
    printf("Sum of even numbers from 1 to 50: %d\n", sum_even);
    return 0;
}
