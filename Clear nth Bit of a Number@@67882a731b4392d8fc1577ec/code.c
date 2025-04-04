// Your code here...
#include <stdio.h>

int clearNthBit(int num, int n) {
    return num & ~(1 << n);  // Create a mask with the nth bit cleared and use bitwise AND
}

int main() {
    int num, n;
    
    scanf("%d", &num);
    
    printf("Enter the bit position to clear (0-31): ");
    scanf("%d", &n);

    if (n < 0 || n > 31) {
        printf