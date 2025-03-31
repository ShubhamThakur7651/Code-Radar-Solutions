#include <stdio.h>

int main() {
    int n, i, space, j;
    scanf("%d", &n);
    // Loop through rows
    for (i = 1; i <= n; i++) {
        // Print spaces before stars
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print stars for each row
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}