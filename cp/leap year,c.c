//1. *Leap Year Checker*
//Write a C Programthat takes a year as input and checks whether it is a leap year or not

  #include <stdio.h>

int main() {
    int year;
    printf("enter year: ");
    scanf("%d", &year);

    if (year % 4 == 0) {
        if (year % 100 != 0) { // Corrected the if condition, != instead of !%==
            printf("leap year\n"); // Added newline for better output formatting
        } else {
            printf("no leap year");
        }
    }
}
