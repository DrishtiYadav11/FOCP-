#include <stdio.h>

void printArray(int arr[], int n) {
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, pos, choice;

    // Ask user for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];  // Declare an array with the size of n

    // Input array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Print the array before deletion
    printArray(arr, n);

    // Ask user for the type of deletion
    printf("Choose the deletion type:\n");
    printf("1. Delete at Front\n");
    printf("2. Delete at Any Position\n");
    printf("3. Delete at End\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Delete at Front
            if (n == 0) {
                printf("Array is empty, nothing to delete.\n");
                return 1;
            }
            // Shift all elements to the left by 1
            for (int i = 0; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;  // Decrease the size of the array
            break;

        case 2:
            // Delete at Any Position
            printf("Enter the position to delete (0 to %d): ", n - 1);
            scanf("%d", &pos);
            if (pos < 0 || pos >= n) {
                printf("Invalid position\n");
                return 1;
            }
            // Shift elements from the position to the left
            for (int i = pos; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;  // Decrease the size of the array
            break;

        case 3:
            // Delete at End
            if (n == 0) {
                printf("Array is empty, nothing to delete.\n");
                return 1;
            }
            n--;  // Just reduce the size of the array
            break;

        default:
            printf("Invalid choice\n");
            return 1;
    }

    // Print the array after deletion
    printArray(arr, n);

    return 0;
}
