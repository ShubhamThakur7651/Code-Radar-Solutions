// Your code here...
include <stdio.h>

// Function prototype
void printDiamond(int N);

int main() {
    int N;
    printf("");
    scanf("%d", &N);
    printDiamond(N);
    return 0;
}

// Function to print the diamond pattern
void printDiamond(int N) {
    // Upper half of the diamond
    for (int i = 1; i <= N; i++) {
        // Printing spaces
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Printing stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
printf("\n");
    }

    // Lower half of the diamond
    for (int i = N - 1; i >= 1; i--) {
        // Printing spaces
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }
        // Printing stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

