// Your code here...
#include <stdio.h>

struct Student {
    int rollNumber;
    char name[50];
    float marks;
};

int main() {
    int N;
    
    printf("Enter the number of students: ");
    scanf("%d", &N);
    
    struct Student students[N];
    
    // Input student details
    for (int i = 0; i < N; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Name: ");
        scanf(" %49[^\n]", students[i].name); // Accepts full name with spaces
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Find the student with the highest marks
    struct Student topStudent = students[0];
    
    for (int i = 1; i < N; i++) {
        if (students[i].marks > topStudent.marks) {
            topStudent = students[i];
        }
    }
    
    // Display the student with the highest marks
    printf("\nStudent with the highest marks:\n");
    printf("Roll Number: %d\n", topStudent.rollNumber);
    printf("Name: %s\n", topStudent.name);
    printf("Marks: %.2f\n", topStudent.marks);
    
    return 0;
}