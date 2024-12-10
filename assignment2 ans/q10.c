#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;  // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) {  // Check divisibility up to sqrt(num)
        if (num % i == 0) {
            return false;  // If divisible by any number other than 1 and itself
        }
    }
    return true;  // Prime number
}

int main() {
    int n;

    // Ask the user for the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];  // Declare an array to store the elements

    // Input array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    int primeCount = 0;  // Variable to count prime numbers

    // Loop through the array and check for prime numbers
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            primeCount++;  // Increment the count if the number is prime
        }
    }

    // Output the count of prime numbers
    printf("The number of prime numbers in the array is: %d\n", primeCount);

    return 0;
}
