#include <stdio.h>

void printDuplicates(int arr[], int n) {
    int foundDuplicate = 0; // Flag to check if there are any duplicates

    // Traverse the array to find duplicates
    for (int i = 0; i < n; i++) {
        // If the element is already marked as visited, skip it
        if (arr[i] == -1) {
            continue;
        }

        // Count the frequency of the current element
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // If the element appears more than once, mark it as visited and print it
        if (count > 1) {
            if (arr[i] != -1) {  // If element is not already processed
                printf("%d ", arr[i]);
                // Mark all occurrences of this element as visited
                for (int k = 0; k < n; k++) {
                    if (arr[k] == arr[i]) {
                        arr[k] = -1;  // Mark as visited
                    }
                }
            }
            foundDuplicate = 1;  // Set flag to indicate that duplicates exist
        }
    }

    if (!foundDuplicate) {
        printf("-1");  // If no duplicates were found
    }
    printf("\n");
}

int main() {
    int n;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];  // Declare the array of size n

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Print the duplicates in the array
    printDuplicates(arr, n);

    return 0;
}
