#include <stdio.h>
#include <string.h>

int main() {
    int i, count = 1;  // Start with count as 1 to count the first word
    char ch[] = "hello friend how are you";

    // Start the loop from i = 0 to print the entire string
    for (i = 0; ch[i] != '\0'; i++) {
        printf("%c", ch[i]);

        // Increment the word count when a space is found
        if (ch[i] == ' ') {
            count++;
        }
    }
    
    // Print the total number of words
    printf("\nTotal words: %d\n", count);

    return 0;
}
