#include <stdio.h>

void printArray(int arr[], int n) {
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, pos, value, choice;

    // Ask user for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n + 1];  // Declare an array with one extra space for insertion

    // Input array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Print the array before insertion
    printArray(arr, n);

    // Ask user for the type of insertion
    printf("Choose the insertion type:\n");
    printf("1. Insert at Front\n");
    printf("2. Insert at Any Position\n");
    printf("3. Insert at End\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Insert at Front
            printf("Enter the value to insert at the front: ");
            scanf("%d", &value);
            
            // Shift all elements to the right
            for (int i = n; i > 0; i--) {
                arr[i] = arr[i - 1];
            }
            arr[0] = value;  // Insert value at the front
            n++;  // Increase the size of the array
            break;

        case 2:
            // Insert at Any Position
            printf("Enter the position to insert (0 to %d): ", n);
            scanf("%d", &pos);
            if (pos < 0 || pos > n) {
                printf("Invalid position\n");
                return 1;
            }
            printf("Enter the value to insert at position %d: ", pos);
            scanf("%d", &value);
            
            // Shift elements from position to the right
            for (int i = n; i > pos; i--) {
                arr[i] = arr[i - 1];
            }
            arr[pos] = value;  // Insert value at the specified position
            n++;  // Increase the size of the array
            break;

        case 3:
            // Insert at End
            printf("Enter the value to insert at the end: ");
            scanf("%d", &value);
            arr[n] = value;  // Insert value at the end
            n++;  // Increase the size of the array
            break;

        default:
            printf("Invalid choice\n");
            return 1;
    }

    // Print the array after insertion
    printArray(arr, n);

    return 0;
}
