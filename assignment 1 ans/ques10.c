#include <stdio.h>

// Function to calculate factorial of a number
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to print Pascal's Triangle
void printPascal(int rows) {
    for (int i = 0; i < rows; i++) {
        // Print leading spaces for formatting
        for (int space = 1; space < rows - i; space++) {
            printf(" ");
        }

        // Print the elements of the current row
        for (int j = 0; j <= i; j++) {
            // Calculate binomial coefficient (i choose j) = i! / (j! * (i-j)!)
            long long value = factorial(i) / (factorial(j) * factorial(i - j));
            printf("%lld ", value);
        }

        // Move to the next line after each row
        printf("\n");
    }
}

int main() {
    int rows;
    
    // Ask the user to input the number of rows for Pascal's Triangle
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    // Print Pascal's Triangle
    printPascal(rows);

    return 0;
}
