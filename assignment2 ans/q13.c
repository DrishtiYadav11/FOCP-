#include <stdio.h>

void rotateArray(int arr[], int n) {
    int temp = arr[n - 1];  // Store the last element

    // Shift all elements to the right
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = temp;  // Move the last element to the front
}

void printArray(int arr[], int n) {
    printf("Array after rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
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

    // Print the array before rotation
    printf("Array before rotation: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Rotate the array
    rotateArray(arr, n);

    // Print the array after rotation
    printArray(arr, n);

    return 0;
}
