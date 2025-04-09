#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0; // 0 and 1 are not prime
    if (num == 2) return 1; // 2 is the only even prime number
    
    for (int i = 2; i * i <= num; i++) { // Check up to sqrt(num) for efficiency
        if (num % i == 0) {
            return 0; // Number is divisible, so it's not prime
        }
    }
    
    return 1; // If no divisors found, it's prime
}

int main() {
    int num;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    
    return 0;
}