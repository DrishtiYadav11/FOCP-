#include <stdio.h>

// Method 1: Using a temporary variable
void swapUsingTempVariable(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Method 2: Without using a temporary variable (Arithmetic method)
void swapUsingArithmetic(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

// Method 3: Using Bitwise XOR
void swapUsingXOR(int *a, int *b) {
    if (*a != *b) {
        *a = *a ^ *b;
        *b = *a ^ *b;
        *a = *a ^ *b;
    }
}

// Method 4: Using pointers (Address method)
void swapUsingPointers(int *a, int *b) {
    int *temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1, num2;

    // Accept two integer numbers from the user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Display the numbers before swapping
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Method 1: Using a temporary variable
    swapUsingTempVariable(&num1, &num2);
    printf("After swapping (using temporary variable): num1 = %d, num2 = %d\n", num1, num2);

    // Input the numbers again
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Method 2: Without using a temporary variable (Arithmetic method)
    swapUsingArithmetic(&num1, &num2);
    printf("After swapping (using arithmetic method): num1 = %d, num2 = %d\n", num1, num2);

    // Input the numbers again
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Method 3: Using Bitwise XOR
    swapUsingXOR(&num1, &num2);
    printf("After swapping (using XOR method): num1 = %d, num2 = %d\n", num1, num2);

    // Input the numbers again
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Method 4: Using pointers (Address method)
    swapUsingPointers(&num1, &num2);
    printf("After swapping (using pointer method): num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

