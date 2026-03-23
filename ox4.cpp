#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits.h>

using namespace std;

char board[3][3];

// Initialize board
void initializeBoard() {
    char ch = '1';
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            board[i][j] = ch++;
}

// Display board
void displayBoard() {
    cout << "\n";
    for(int i = 0; i < 3; i++) {
        cout << " " << board[i][0] << " | " << board[i][1] << " | " << board[i][2];
        if(i != 2)
            cout << "\n---|---|---\n";
    }
    cout << "\n\n";
}

// Check win
bool checkWin(char mark) {
    for(int i = 0; i < 3; i++) {
        if(board[i][0]==mark && board[i][1]==mark && board[i][2]==mark)
            return true;
        if(board[0][i]==mark && board[1][i]==mark && board[2][i]==mark)
            return true;
    }

    if(board[0][0]==mark && board[1][1]==mark && board[2][2]==mark)
        return true;
    if(board[0][2]==mark && board[1][1]==mark && board[2][0]==mark)
        return true;

    return false;
}

// Check moves left
bool isMovesLeft() {
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(board[i][j] != 'X' && board[i][j] != 'O')
                return true;
    return false;
}

// Evaluate board
int evaluate() {
    if(checkWin('O')) return 10;
    if(checkWin('X')) return -10;
    return 0;
}

// Minimax
int minimax(bool isMax) {
    int score = evaluate();

    if(score == 10 || score == -10)
        return score;

    if(!isMovesLeft())
        return 0;

    if(isMax) {
        int best = INT_MIN;
        for(int i=0;i<3;i++) {
            for(int j=0;j<3;j++) {
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
        int best = INT_MAX;
        for(int i=0;i<3;i++) {
            for(int j=0;j<3;j++) {
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

// Smart move
void bestMove() {
    int bestVal = INT_MIN;
    int bestRow=-1, bestCol=-1;

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            if(board[i][j] != 'X' && board[i][j] != 'O') {
                char temp = board[i][j];
                board[i][j] = 'O';
                int moveVal = minimax(false);
                board[i][j] = temp;

                if(moveVal > bestVal) {
                    bestRow = i;
                    bestCol = j;
                    bestVal = moveVal;
                }
            }
        }
    }

    board[bestRow][bestCol] = 'O';
}

// Random move
void randomMove() {
    int row, col;
    do {
        row = rand() % 3;
        col = rand() % 3;
    } while(board[row][col]=='X' || board[row][col]=='O');

    board[row][col] = 'O';
}

// 90% Smart AI
void aiMove() {
    int chance = rand() % 100;   // 0 to 99

    if(chance < 90)   // 90% smart
        bestMove();
    else              // 10% random
        randomMove();
}

// Player move
void playerMove() {
    int choice;
    cout << "Enter your move (1-9): ";
    cin >> choice;

    int row = (choice-1)/3;
    int col = (choice-1)%3;

    if(choice<1 || choice>9 || board[row][col]=='X' || board[row][col]=='O') {
        cout << "Invalid move! Try again.\n";
        playerMove();
    } else {
        board[row][col] = 'X';
    }
}

int main() {
    srand(time(0));
    initializeBoard();

    cout << "=== TIC TAC TOE (90% SMART AI) ===\n";

    while(true) {
        displayBoard();
        playerMove();

        if(checkWin('X')) {
            displayBoard();
            cout << "🎉 You Win!\n";
            break;
        }

        if(!isMovesLeft()) {
            displayBoard();
            cout << "Game Draw!\n";
            break;
        }

        aiMove();

        if(checkWin('O')) {
            displayBoard();
            cout << "🤖 Computer Wins!\n";
            break;
        }

        if(!isMovesLeft()) {
            displayBoard();
            cout << "Game Draw!\n";
            break;
        }
    }

    return 0;
}