#include <stdio.h>

int main() {
    int n;

    // Ask user for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    int marks[n];  // Declare an array to store student marks
    int sum = 0;   // Variable to store the sum of the marks

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

    // Output the total sum of marks
    printf("The total sum of all scores is: %d\n", sum);

    return 0;
}
