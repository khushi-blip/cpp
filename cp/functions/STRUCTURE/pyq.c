#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, vowels = 0, conso = 0, specialsymbol = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // ✅ Safe input with spaces

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Check for vowels and consonants
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else {
                conso++;
            }
        }
        // Check for special characters (not alphabet or digit or space)
        else if (ch != ' ' && ch != '\n') {
            specialsymbol++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", conso);
    printf("Special symbols: %d\n", specialsymbol);

    return 0;
}
