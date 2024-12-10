#include <stdio.h>

char board[3][3]; // 3x3 board

// Function to initialize the board
void initializeBoard() {
    char ch = '1';
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ch++;
        }
    }
}

// Function to display the board
void displayBoard() {
    printf("\nTic Tac Toe Board:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---|---|---\n");
    }
    printf("\n");
}

// Function to check if a player has won
int checkWin(char player) {
    // Check rows, columns and diagonals
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) return 1; // Row
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) return 1; // Column
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) return 1; // Diagonal
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) return 1; // Diagonal
    return 0;
}

// Function to check if the board is full (i.e., a draw)
int isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] != 'X' && board[i][j] != 'O') return 0;
        }
    }
    return 1;
}

// Function to make a player's move
void playerMove(char player) {
    int choice;
    printf("Player %c, Enter the position (1-9): ", player);
    scanf("%d", &choice);

    // Validate input
    if (choice < 1 || choice > 9 || board[(choice-1)/3][(choice-1)%3] == 'X' || board[(choice-1)/3][(choice-1)%3] == 'O') {
        printf("Invalid move! Try again.\n");
        playerMove(player);
    } else {
        board[(choice-1)/3][(choice-1)%3] = player;
    }
}

// Function for computer to make its move
void computerMove() {
    int choice;
    // Simple AI: Choose the first available space
    for (choice = 1; choice <= 9; choice++) {
        if (board[(choice-1)/3][(choice-1)%3] != 'X' && board[(choice-1)/3][(choice-1)%3] != 'O') {
            board[(choice-1)/3][(choice-1)%3] = 'O';
            break;
        }
    }
    printf("Computer plays at position %d\n", choice);
}

// Main function to control the game flow
int main() {
    char currentPlayer = 'X'; // Player 1 starts
    int gameOver = 0;

    initializeBoard();

    while (!gameOver) {
        displayBoard();
        
        if (currentPlayer == 'X') {
            playerMove(currentPlayer);
        } else {
            computerMove();
        }

        // Check for win
        if (checkWin('X')) {
            displayBoard();
            printf("Player X wins!\n");
            gameOver = 1;
        } else if (checkWin('O')) {
            displayBoard();
            printf("Player O (Computer) wins!\n");
            gameOver = 1;
        } else if (isBoardFull()) {
            displayBoard();
            printf("It's a draw!\n");
            gameOver = 1;
        }

        // Switch players
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}
