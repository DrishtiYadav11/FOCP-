#include <stdio.h>

int main() {
    int n;

    // Ask user for the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];  // Declare an array to store the elements

    // Input array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Edge case: If there is only one element, it's a peak
    if (n == 1) {
        printf("The peak element is: %d\n", arr[0]);
        return 0;
    }

    // Check the first element (edge case)
    if (arr[0] >= arr[1]) {
        printf("The peak element is: %d\n", arr[0]);
        return 0;
    }

    // Check the last element (edge case)
    if (arr[n - 1] >= arr[n - 2]) {
        printf("The peak element is: %d\n", arr[n - 1]);
        return 0;
    }

    // Check the middle elements
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            printf("The peak element is: %d\n", arr[i]);
            return 0;
        }
    }

    // If no peak element is found (which is unlikely), print this message
    printf("No peak element found.\n");
    return 0;
}
