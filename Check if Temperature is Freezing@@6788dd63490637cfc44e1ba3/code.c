#include <stdio.h>

int main() {
    float temperature;
    scanf("%f", &temperature);
    if (temperature <= 0) {
        printf("%.2f°C Freezing \n", temperature);
    } else {
        printf("%.2f°C Above Freezing\n", temperature);
    }

    return 0;
}