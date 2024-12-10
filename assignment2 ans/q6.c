#include <stdio.h>

int main() {
    int n;

    // Ask user for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    int marks[n];  // Declare an array to store student marks
    int sum = 0;   // Variable to store the sum of the marks
    float average; // Variable to store the average score

    // Input marks for each student
    printf("Enter the marks of %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter mark for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Calculate the sum of all scores
    for (int i = 0; i < n; i++) {
        sum += marks[i];  // Add each mark to the sum
    }

    // Calculate the average score
    average = (float)sum / n;

    // Output the average score
    printf("The average score of all students is: %.2f\n", average);

    return 0;
}
