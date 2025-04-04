#include <stdio.h>

void checkMSB(int num) {
    if (num & (1 << 31)) {
        printf("Set (1)\n");
    } else {
        printf("Not Set (0)\n");
    }
}

int main() {
    int num;
    scanf("%d", &num);
    
    checkMSB(num);

    return 0;
}