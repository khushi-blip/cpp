include<stdio.h>
#include<string.h>

int main() {
    char ch[] = "hello";  
    printf("Original string is = %s\n", ch);
    
    strupr(ch);  
    
    printf("String is upper case = %s\n", ch);  
    
    return 0;
}
void strupr(char *s) {
    int i = 0;
    while (s[i] != '\0') { 
        if (s[i] >= 97 && s[i] <= 122) {  
            s[i] = s[i] - 32; 
        }
        i++;
    }
}
