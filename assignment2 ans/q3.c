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

    // Loop through the array to find the first student who scored 99
    int found = 0;  // Flag to check if we found a student with 99 marks
    for (int i = 0; i < n; i++) {
        if (marks[i] == 99) {
            printf("Student %d scored 99 marks.\n", i + 1);  // Output the student's position
            found = 1;
            break;  // Stop after finding the first occurrence
        }
    }

    if (!found) {
        printf("No student scored 99 marks.\n");
    }

    return 0;
}
