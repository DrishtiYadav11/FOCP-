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

    // Variables to count how many students scored 99 and their positions
    int count = 0;

    // Loop through the array to find who scored 99
    for (int i = 0; i < n; i++) {
        if (marks[i] == 99) {
            count++;  // Increment the count for each student who scored 99
            printf("Student %d scored 99 marks.\n", i + 1);  // Output the student's position
        }
    }

    // Output the total count of students who scored 99
    if (count == 0) {
        printf("No student scored 99 marks.\n");
    } else {
        printf("Total number of students who scored 99: %d\n", count);
    }

    return 0;
}
