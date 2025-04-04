#include <stdio.h>

int main() {
    float temperature;
    scanf("%f", &temperature);
    if (temperature <= 0) {
        printf("Freezing \n", temperature);
    } else {
        printf("Above Freezing\n", temperature);
    }

    return 0;
}