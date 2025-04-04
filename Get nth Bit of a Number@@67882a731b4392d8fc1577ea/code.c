// Your code here...
#include <stdio.h>

int getNthBit(int num, int n) {
    return (num >> n) & 1;  // Shift the number right by n bits and check the least significant bit
}

int main() {
    int num, n;
    
    scanf("%d", &num);
    
    scanf("%d", &n);

    if (n < 0 || n > 31) {
        printf("Invalid bit position! Please enter a value between 0 and 31.\n");
    } else {
        printf("%d\n", n, getNthBit(num, n));
    }
    
    return 0;
}