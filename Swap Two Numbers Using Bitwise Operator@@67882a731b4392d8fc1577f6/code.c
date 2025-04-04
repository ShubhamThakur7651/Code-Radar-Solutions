#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    printf("%d %d\n", a, b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("%d %d\n", a, b);

    return 0;
}