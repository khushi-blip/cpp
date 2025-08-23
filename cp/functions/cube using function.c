//Write a C program to input any number from user and find cube of the given number using function. 
#include <stdio.h>

// Function to calculate the cube of a number
int cube(int num) {
    return num * num * num;
}

int main() {
    int n, result;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Function call to calculate cube
    result = cube(n);

    // Output the result
    printf("Cube of %d is %d\n", n, result);

    return 0;
}
