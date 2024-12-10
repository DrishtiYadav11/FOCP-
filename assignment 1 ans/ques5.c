 #include <stdio.h>

// Function to check if a number is a perfect number
int isPerfectNumber(int num) {
    int sum = 0;

    // Find divisors and calculate their sum
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {  // i is a divisor of num
            sum += i;
        }
    }

    // Check if the sum of divisors is equal to the number
    if (sum == num) {
        return 1; // It is a perfect number
    } else {
        return 0; // It is not a perfect number
    }
}

int main() {
    int num;

    // Accept user input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is perfect
    if (isPerfectNumber(num)) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}
