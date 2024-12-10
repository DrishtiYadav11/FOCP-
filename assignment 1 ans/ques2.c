#include <stdio.h>

// Function to calculate HCF using Euclidean algorithm
int calculateHCF(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    int num1, num2;

    // Reading input from the user
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate HCF
    int hcf = calculateHCF(num1, num2);

    // Output the result
    printf("The HCF of %d and %d is: %d\n", num1, num2, hcf);

    return 0;
}
