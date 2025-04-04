#include <stdio.h>

void checkMSB(int num) {
    if (num & (1 << 31)) {
        printf("MSB is set (1)\n");
    } else {
        printf("MSB is not set (0)\n");
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    checkMSB(num);

    return 0;
}