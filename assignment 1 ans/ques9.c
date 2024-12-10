#include <stdio.h>

int main() {
    // Number of rows in the pyramid
    int n = 9;

    // Loop through each row
    for (int i = 1; i <= n; i++) {
        // Determine whether the row should have a length of i or a combined pattern
        if (i == 8) {
            // Print the 10-character long row pattern
            for (int j = 1; j <= 10; j++) {
                if (j % 2 == 1) {
                    printf("0");
                } else {
                    printf("1");
                }
            }
        } else {
            // Print alternating 0's and 1's
            for (int j = 1; j <= i; j++) {
                if (j % 2 == 1) {
                    printf("0");
                } else {
                    printf("1");
                }
            }
        }
        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}
