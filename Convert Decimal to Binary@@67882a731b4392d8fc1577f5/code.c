// Your code here...
#include <stdio.h>
int main() {
    int decimal_num, binary_num[32], i = 0;
    printf("");
    scanf("%d", &decimal_num);
    if (decimal_num < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }
    while (decimal_num > 0) {
        binary_num[i] = decimal_num & 1;
        decimal_num >>= 1;
        i++;
    }
    if (i == 0) {
        printf("0\n");
    } else {
        printf("");
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binary_num[j]);
        }
        printf("\n");
    }
    return 0;
}