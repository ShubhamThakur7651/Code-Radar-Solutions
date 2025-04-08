// Your code here...
#include <stdio.h>
int countTrailingZeros(int n) {
    int count = 0;
    while ((n & 1) == 0 && n > 0) {
        count++;
        n >>= 1;
    }
    return count;
}
int main() {
    int num;
    printf("");
    scanf("%d", &num);
    printf("%d\n", countTrailingZeros(num));
    return 0;
}