// Your code here...
#include <stdio.h>

// Function to compute factorial
unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;

    unsigned long long result = 1;
    for (int i = 2; i <= n; ++i)
        result *= i;

    return result;
}

// Function to print factorials in a given range
void printFactorials(int start, int end) {
    if (start > end) {
        printf("Invalid range: start > end\n");
        return;
    }

    for (int i = start; i <= end; ++i) {
        printf("Factorial of %d is: %llu\n", i, factorial(i));
    }
}

// Example usage
int main() {
    int start = 0;
    int end = 10;

    printFactorials(start, end);

    return 0;
}
