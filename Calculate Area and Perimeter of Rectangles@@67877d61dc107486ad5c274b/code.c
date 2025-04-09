// Your code here...
#include <stdio.h>

struct Rectangle {
    float length;
    float breadth;
};

float calculateArea(struct Rectangle r) {
    return r.length * r.breadth;
}

float calculatePerimeter(struct Rectangle r) {
    return 2 * (r.length + r.breadth);
}

int main() {
    int N;

    printf("Enter the number of rectangles: ");
    scanf("%d", &N);

    struct Rectangle rectangles[N];

    // Input rectangle 
    }

    // Display area and perimeter for each rectangle
    printf("\nRectangle Details:\n");
    for (int i = 0; i < N; i++) {
        printf("Rectangle %d:", i + 1);
        printf("Area: %.2f", calculateArea(rectangles[i]));
        printf("Perimeter: %.2f", calculatePerimeter(rectangles[i]));
    }

    return 0;
}