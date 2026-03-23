#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

char board[3][3];

// Function to initialize board
void initializeBoard() {
    char ch = '1';
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            board[i][j] = ch++;
        }
    }
}

// Function to display board
void displayBoard() {
    cout << "\n";
    for(int i = 0; i < 3; i++) {
        cout << " " << board[i][0] << " | " << board[i][1] << " | " << board[i][2];
        if(i != 2)
            cout << "\n---|---|---\n";
    }
    cout << "\n\n";
}

// Function to check win
bool checkWin(char mark) {
    // Rows and Columns
    for(int i = 0; i < 3; i++) {
        if(board[i][0] == mark && board[i][1] == mark && board[i][2] == mark)
            return true;
        if(board[0][i] == mark && board[1][i] == mark && board[2][i] == mark)
            return true;
    }

    // Diagonals
    if(board[0][0] == mark && board[1][1] == mark && board[2][2] == mark)
        return true;
    if(board[0][2] == mark && board[1][1] == mark && board[2][0] == mark)
        return true;

    return false;
}

// Function to check draw
bool checkDraw() {
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            if(board[i][j] != 'X' && board[i][j] != 'O')
                return false;
    return true;
}

// Player move
void playerMove() {
    int choice;
    cout << "Enter your move (1-9): ";
    cin >> choice;

    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;

    if(choice < 1 || choice > 9 || board[row][col] == 'X' || board[row][col] == 'O') {
        cout << "Invalid move! Try again.\n";
        playerMove();
    } else {
        board[row][col] = 'X';
    }
}

// Computer move (random)
void computerMove() {
    int row, col;

    do {
        row = rand() % 3;
        col = rand() % 3;
    } while(board[row][col] == 'X' || board[row][col] == 'O');

    board[row][col] = 'O';
    cout << "Computer placed O\n";
}

int main() {
    srand(time(0));
    initializeBoard();

    cout << "=== TIC TAC TOE (Player vs Computer) ===\n";

    while(true) {
        displayBoard();

        playerMove();
        if(checkWin('X')) {
            displayBoard();
            cout << "🎉 You Win!\n";
            break;
        }
        if(checkDraw()) {
            displayBoard();
            cout << "Game Draw!\n";
            break;
        }

        computerMove();
        if(checkWin('O')) {
            displayBoard();
            cout << "💻 Computer Wins!\n";
            break;
        }
        if(checkDraw()) {
            displayBoard();
            cout << "Game Draw!\n";
            break;
        }
    }

    return 0;
}