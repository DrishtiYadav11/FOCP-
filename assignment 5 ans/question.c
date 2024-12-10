#include <stdio.h>
#include <string.h>

// Function to check if the guessed letter is in the word
int checkGuess(char word[], char guess, char displayedWord[]) {
    int found = 0;
    for (int i = 0; i < strlen(word); i++) {
        if (word[i] == guess) {
            displayedWord[i] = guess;
            found = 1;
        }
    }
    return found;
}

int main() {
    char word[] = "hangman";  // The word to guess
    char displayedWord[] = "_______";  // Displays the guessed letters (initially hidden)
    char guess;  // To store the user's guessed character
    int chances = 3;  // Number of chances the player gets

    printf("Welcome to Hangman Game!\n");
    printf("Guess the word: %s\n", displayedWord);
    
    while (chances > 0) {
        printf("\nYou have %d chances left.\n", chances);
        printf("Enter a letter to guess: ");
        scanf(" %c", &guess);  // Taking input with a space to skip any leftover newline character
        
        // Check if the guess is correct
        if (checkGuess(word, guess, displayedWord)) {
            printf("Good guess! The word now looks like this: %s\n", displayedWord);
        } else {
            chances--;  // Deduct a chance if the guess is incorrect
            printf("Wrong guess! You have %d chances left.\n", chances);
        }

        // Check if the player has guessed the word completely
        if (strcmp(word, displayedWord) == 0) {
            printf("\nCongratulations! You've guessed the word: %s\n", word);
            break;  // End the game if the player has guessed the word correctly
        }
    }

    if (chances == 0) {
        printf("\nGame over! You've been hanged. The word was: %s\n", word);
    }

    return 0;
}
