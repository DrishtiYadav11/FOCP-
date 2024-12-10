#include <stdio.h>
#include <math.h>  // For sqrt() and log() functions

// Function for performing addition
float add(float a, float b) {
    return a + b;
}

// Function for performing subtraction
float subtract(float a, float b) {
    return a - b;
}

// Function for performing multiplication
float multiply(float a, float b) {
    return a * b;
}

// Function for performing division
float divide(float a, float b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return -1;  // Return an error value
    }
    return a / b;
}

// Function for calculating square root
float squareRoot(float a) {
    if (a < 0) {
        printf("Error: Square root of negative number is not defined.\n");
        return -1;  // Return an error value
    }
    return sqrt(a);
}

// Function for calculating logarithmic value (base 10)
float logarithm(float a) {
    if (a <= 0) {
        printf("Error: Logarithm of zero or negative number is not defined.\n");
        return -1;  // Return an error value
    }
    return log10(a);  // log10() computes the log to the base 10
}

int main() {
    int choice;
    float num1, num2, result;

    while (1) {
        // Display the menu
        printf("\nSimple Calculator\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Logarithmic value (base 10)\n");
        printf("6. Square root\n");
        printf("7. Exit\n");

        // Ask the user to select an operation
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 7) {
            printf("Exiting the calculator.\n");
            break;  // Exit the loop if the user chooses to exit
        }

        switch (choice) {
            case 1:
                // Addition
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = add(num1, num2);
                printf("Result: %.2f\n", result);
                break;
                
            case 2:
                // Subtraction
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = subtract(num1, num2);
                printf("Result: %.2f\n", result);
                break;
                
            case 3:
                // Multiplication
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = multiply(num1, num2);
                printf("Result: %.2f\n", result);
                break;
                
            case 4:
                // Division
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = divide(num1, num2);
                if (result != -1)  // Check for division by zero
                    printf("Result: %.2f\n", result);
                break;
                
            case 5:
                // Logarithmic value
                printf("Enter a number: ");
                scanf("%f", &num1);
                result = logarithm(num1);
                if (result != -1)  // Check for invalid logarithm input
                    printf("Logarithm (base 10) of %.2f: %.2f\n", num1, result);
                break;
                
            case 6:
                // Square root
                printf("Enter a number: ");
                scanf("%f", &num1);
                result = squareRoot(num1);
                if (result != -1)  // Check for invalid square root input
                    printf("Square root of %.2f: %.2f\n", num1, result);
                break;
                
            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    }
    
    return 0;
}
