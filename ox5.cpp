#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char board[3][3];

// Initialize board
void initBoard() {
    char ch = '1';
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            board[i][j] = ch++;
        }
    }
}

// Print board
void printBoard() {
    cout << "\n";
    for(int i = 0; i < 3; i++) {
        cout << " " << board[i][0] << " | " 
             << board[i][1] << " | " 
             << board[i][2] << endl;
        if(i < 2) cout << "---|---|---\n";
    }
    cout << "\n";
}

// Check winner
bool checkWin(char player) {
    for(int i = 0; i < 3; i++) {
        if(board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;
        if(board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return true;
    }
    if(board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;
    if(board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;

    return false;
}

// Check draw
bool isDraw() {
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            if(board[i][j] != 'X' && board[i][j] != 'O')
                return false;
    return true;
}

// Minimax algorithm
int minimax(bool isAI) {
    if(checkWin('O')) return 10;
    if(checkWin('X')) return -10;
    if(isDraw()) return 0;

    if(isAI) {
        int best = -1000;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                if(board[i][j] != 'X' && board[i][j] != 'O') {
                    char temp = board[i][j];
                    board[i][j] = 'O';
                    best = max(best, minimax(false));
                    board[i][j] = temp;
                }
            }
        }
        return best;
    } else {
        int best = 1000;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                if(board[i][j] != 'X' && board[i][j] != 'O') {
                    char temp = board[i][j];
                    board[i][j] = 'X';
                    best = min(best, minimax(true));
                    board[i][j] = temp;
                }
            }
        }
        return best;
    }
}

// Best move using Minimax
void bestMove() {
    int bestVal = -1000;
    int row = -1, col = -1;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(board[i][j] != 'X' && board[i][j] != 'O') {
                char temp = board[i][j];
                board[i][j] = 'O';

                int moveVal = minimax(false);

                board[i][j] = temp;

                if(moveVal > bestVal) {
                    row = i;
                    col = j;
                    bestVal = moveVal;
                }
            }
        }
    }

    board[row][col] = 'O';
}

// Random move
void randomMove() {
    int row, col;
    do {
        row = rand() % 3;
        col = rand() % 3;
    } while(board[row][col] == 'X' || board[row][col] == 'O');

    board[row][col] = 'O';
}

// Medium AI (50% smart)
void aiMove() {
    int chance = rand() % 100;
    if(chance < 50)
        bestMove();
    else
        randomMove();
}

int main() {
    srand(time(0));
    initBoard();

    cout << "TIC TAC TOE (Medium AI)\n";
    cout << "You are X | Computer is O\n";

    while(true) {
        printBoard();

        int choice;
        cout << "Enter position (1-9): ";
        cin >> choice;

        int row = (choice - 1) / 3;
        int col = (choice - 1) % 3;

        if(choice < 1 || choice > 9 || board[row][col] == 'X' || board[row][col] == 'O') {
            cout << "Invalid move! Try again.\n";
            continue;
        }

        board[row][col] = 'X';

        if(checkWin('X')) {
            printBoard();
            cout << "You Win!\n";
            break;
        }

        if(isDraw()) {
            printBoard();
            cout << "It's a Draw!\n";
            break;
        }

        aiMove();

        if(checkWin('O')) {
            printBoard();
            cout << "Computer Wins!\n";
            break;
        }

        if(isDraw()) {
            printBoard();
            cout << "It's a Draw!\n";
            break;
        }
    }

    return 0;
}