// Your code here...
#include <stdio.h>

int set_nth_bit(int num, int n) {
    return num | (1 << n);
}

int main() {
    int number, bit_position;
    scanf("%d", &number);
    scanf("%d", &bit_position);
    
    // Validate bit position
    if (bit_position < 0 || bit_position >= sizeof(int) * 8) {
        printf("Error: Bit position must be between 0 and %lu\n", sizeof(int) * 8 - 1);
        return 1;
    }
    
    int result = set_nth_bit(number, bit_position);
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        printf("%d", (number >> i) & 1);
    }
    
    printf("%d (in binary: ", bit_position, result);
    // Print binary representation (optional)
    for (int i = sizeof(int) * 8 - 1; i >= 0; i--) {
        printf("%d", (result >> i) & 1);
    }
    printf(")\n");
    
    return 0;
}