#include <stdio.h>

int main() {
    int n = 5;  // Number of rows in the pattern

    // Loop through each row
    for (int i = 1; i <= n; i++) {
        // Loop through each column in the row
        for (int j = 1; j <= i; j++) {
            // Print 1 if (i + j) is even, otherwise print 0
            if ((i + j) % 2 == 0) {
                printf("1");
            } else {
                printf("0");
            }
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
