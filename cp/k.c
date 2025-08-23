#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Ask user for input
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate the sum
    sum = num1 + num2;

    // If the numbers are the same, return triple their sum
    if (num1 == num2) {
        sum = 3 * sum;
    }

    // Display the result
    printf("The result is: %d\n", sum);

    return 0;
}

