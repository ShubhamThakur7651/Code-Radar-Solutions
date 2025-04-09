// Your code here...
#include <stdio.h>

void convertToUppercase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') { // Check if it's a lowercase letter
            str[i] = str[i] - ('a' - 'A'); // Convert to uppercase using ASCII values
        }
    }
}

int main() {
    char str[100];
    
    scanf("%s", str); // Reads string without spaces
    
    convertToUppercase(str);
    
    printf("%s\n", str);
    
    return 0;
}