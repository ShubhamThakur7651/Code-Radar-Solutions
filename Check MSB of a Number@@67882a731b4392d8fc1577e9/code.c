#include <stdio.h>

void checkMSB(int num) {
    if (num & (1 << 31)) {
        printf("Set \n");
    } else {
        printf("Not Set \n");
    }
}

int main() {
    int num;
    scanf("%d", &num);
    
    checkMSB(num);

    return 0;
}