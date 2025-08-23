#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Input number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is less than or equal to 1
    if (num <= 1) {
        isPrime = 0;  // Not prime if it's less than or equal to 1
    } else {
        // Check divisibility from 2 to sqrt(num)
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;  // num is divisible by i, hence not prime
                break;
            }
        }
    }

    // Output the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
