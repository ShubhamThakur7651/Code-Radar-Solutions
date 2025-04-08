#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);  // Input the number of rows

    for (int i = 1; i <= N; i++) {
        // Print spaces before numbers
        for (int s = 1; s <= N - i; s++) {
            printf("  ");
        }

        // Print numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}