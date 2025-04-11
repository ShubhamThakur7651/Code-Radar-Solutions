#include <stdio.h>

// Function to calculate factorial of a number
long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    
    long long result = 1;
    for (int i = 2; i <= n; i++)
        result *= i;
    
    return result;
}

// Function to print the factorial of each number in the given range
void print_factorial_range(int start, int end) {
    if (start > end) {
        printf("Invalid range! Start should be <= End.\n");
        return;
    }

    for (int i = start; i <= end; i++)
        printf("Factorial of %d is %lld\n", i, factorial(i));
}

int main() {
    int start, end;
    
    // User input for range
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);
    
    // Printing factorials in the range
    print_factorial_range(start, end);
    
    return 0;
}