#include <stdio.h>
#include <math.h>
#include <string.h>

// Function to convert binary to decimal
int binaryToDecimal(char binary[]) {
    int decimal = 0;
    int length = strlen(binary);
    
    for (int i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimal += pow(2, length - 1 - i);
        }
    }
    return decimal;
}

// Function to convert decimal to binary
void decimalToBinary(int decimal) {
    if (decimal == 0) {
        printf("0");
        return;
    }
    
    int binary[32]; // To store the binary equivalent
    int index = 0;
    
    while (decimal > 0) {
        binary[index] = decimal % 2;
        decimal = decimal / 2;
        index++;
    }
    
    // Print the binary equivalent in reverse order
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
}

int main() {
    int choice;
    
    // Ask the user for their choice
    printf("Choose the conversion option:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        // Binary to Decimal
        char binary[32];
        printf("Enter a binary number: ");
        scanf("%s", binary);
        
        int decimal = binaryToDecimal(binary);
        printf("The decimal equivalent of %s is: %d\n", binary, decimal);
    } 
    else if (choice == 2) {
        // Decimal to Binary
        int decimal;
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);
        
        printf("The binary equivalent of %d is: ", decimal);
        decimalToBinary(decimal);
        printf("\n");
    } 
    else {
        printf("Invalid choice. Please enter 1 or 2.\n");
    }

    return 0;
}
