#include <stdio.h>

int main() {
    int n;

    // Ask user for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    int marks[n];  // Declare an array to store student marks

    // Input marks for each student
    printf("Enter the marks of %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter mark for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Determine the grade for each student based on their marks
    printf("\nGrades of the students:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        
        // Check the marks and assign grades
        if (marks[i] >= 75) {
            printf("A Grade\n");
        } else if (marks[i] >= 60) {
            printf("B Grade\n");
        } else if (marks[i] >= 40) {
            printf("C Grade\n");
        } else {
            printf("D Grade\n");
        }
    }

    return 0;
}
