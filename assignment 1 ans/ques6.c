#include <stdio.h>

// Function to determine the quadrant of a given point
void findQuadrant(int x, int y) {
    if (x > 0 && y > 0) {
        printf("The coordinate point (%d,%d) lies in the First quadrant.\n", x, y);
    } else if (x < 0 && y > 0) {
        printf("The coordinate point (%d,%d) lies in the Second quadrant.\n", x, y);
    } else if (x < 0 && y < 0) {
        printf("The coordinate point (%d,%d) lies in the Third quadrant.\n", x, y);
    } else if (x > 0 && y < 0) {
        printf("The coordinate point (%d,%d) lies in the Fourth quadrant.\n", x, y);
    } else if (x == 0 && y == 0) {
        printf("The coordinate point (%d,%d) lies at the origin.\n", x, y);
    } else if (x == 0) {
        printf("The coordinate point (%d,%d) lies on the Y-axis.\n", x, y);
    } else if (y == 0) {
        printf("The coordinate point (%d,%d) lies on the X-axis.\n", x, y);
    }
}

int main() {
    int x, y;

    // Accepting coordinates of the point
    printf("Enter the coordinates of the point (x, y): ");
    scanf("%d %d", &x, &y);

    // Find and print the quadrant
    findQuadrant(x, y);

    return 0;
}
