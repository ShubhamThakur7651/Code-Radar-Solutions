#include <stdio.h>

char is_prime(int n) {
    if (n <= 1) {
        return 'e';  // Numbers less than or equal to 1 are not prime
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 'e';  // If divisible by any number other than 1 and itself
        }
    }

    return '1';  // The number is prime
}

int main() {
    int number;
    scanf("%d", &number);

    // Check if the number is prime
    char result = is_prime(number);
    if (result == '1') {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
