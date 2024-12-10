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

    // Initialize max and min to the first student's mark
    int max = marks[0];
    int min = marks[0];

    // Loop through the array to find the maximum and minimum scores
    for (int i = 1; i < n; i++) {
        if (marks[i] > max) {
            max = marks[i];  // Update max if a larger score is found
        }
        if (marks[i] < min) {
            min = marks[i];  // Update min if a smaller score is found
        }
    }

    // Output the maximum and minimum scores
    printf("The maximum score is: %d\n", max);
    printf("The minimum score is: %d\n", min);

    return 0;
}

