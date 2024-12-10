#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to determine the winner
void determineWinner(int userChoice, int computerChoice) {
    // Print choices
    printf("\nYou chose: ");
    switch(userChoice) {
        case 0: printf("Rock\n"); break;
        case 1: printf("Paper\n"); break;
        case 2: printf("Scissors\n"); break;
    }

    printf("Computer chose: ");
    switch(computerChoice) {
        case 0: printf("Rock\n"); break;
        case 1: printf("Paper\n"); break;
        case 2: printf("Scissors\n"); break;
    }

    // Determine the winner
    if (userChoice == computerChoice) {
        printf("It's a draw!\n");
    } else if ((userChoice == 0 && computerChoice == 2) || 
               (userChoice == 1 && computerChoice == 0) || 
               (userChoice == 2 && computerChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
}

int main() {
    int userChoice, computerChoice;
    
    // Seed the random number generator
    srand(time(0));

    // Display options for user
    printf("Rock Paper Scissors Game\n");
    printf("Enter your choice:\n");
    printf("0. Rock\n");
    printf("1. Paper\n");
    printf("2. Scissors\n");
    
    // Get user's choice
    printf("Enter 0, 1, or 2: ");
    scanf("%d", &userChoice);
    
    // Validate user's choice
    if (userChoice < 0 || userChoice > 2) {
        printf("Invalid input! Please choose 0 for Rock, 1 for Paper, or 2 for Scissors.\n");
        return 0;
    }

    // Generate computer's choice (random number between 0-100)
    computerChoice = rand() % 101;
    
    // Map the random number to one of the three choices
    if (computerChoice >= 0 && computerChoice <= 33) {
        computerChoice = 0; // Rock
    } else if (computerChoice >= 34 && computerChoice <= 66) {
        computerChoice = 1; // Paper
    } else {
        computerChoice = 2; // Scissors
    }

    // Determine the winner
    determineWinner(userChoice, computerChoice);

    return 0;
}
