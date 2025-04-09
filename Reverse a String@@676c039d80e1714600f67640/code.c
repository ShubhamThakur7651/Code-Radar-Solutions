// Your code here...
#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int length = strlen(str);
    int start = 0, end = length - 1;
    char temp;
    
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];
    
    scanf("%s", str);
    
    reverseString(str);
    
    printf("Reversed string: %s\n", str);
    
    return 0;
}