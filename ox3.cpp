#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits.h>

using namespace std;

char board[3][3];
int difficulty;

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
    }
    else {
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

// Best AI move
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

// Random move (Easy mode)
void randomMove() {
    int row, col;
    do {
        row = rand() % 3;
        col = rand() % 3;
    } while(board[row][col]=='X' || board[row][col]=='O');

    board[row][col] = 'O';
}

// Medium move
void mediumMove() {
    if(rand()%2 == 0)
        bestMove();
    else
        randomMove();
}

// Hint
int findHint() {
    int bestVal = INT_MAX;
    int bestPos = -1;

    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            if(board[i][j] != 'X' && board[i][j] != 'O') {
                char temp = board[i][j];
                board[i][j] = 'X';
                int moveVal = minimax(true);
                board[i][j] = temp;

                if(moveVal < bestVal) {
                    bestVal = moveVal;
                    bestPos = i*3 + j + 1;
                }
            }
        }
    }

    return bestPos;
}

// Player move
void playerMove() {
    int choice;
    cout << "Enter move (1-9) or 0 for Hint: ";
    cin >> choice;

    if(choice == 0) {
        int hint = findHint();
        cout << "💡 Suggested move: " << hint << endl;
        playerMove();
        return;
    }

    int row = (choice-1)/3;
    int col = (choice-1)%3;

    if(choice<1 || choice>9 || board[row][col]=='X' || board[row][col]=='O') {
        cout << "Invalid move! Try again.\n";
        playerMove();
    }
    else
        board[row][col] = 'X';
}

// Computer move
void computerMove() {
    if(difficulty == 1)
        randomMove();
    else if(difficulty == 2)
        mediumMove();
    else
        bestMove();
}

int main() {
    srand(time(0));

    cout << "=== TIC TAC TOE (FULL VERSION) ===\n";
    cout << "Select Difficulty:\n";
    cout << "1. Easy\n2. Medium\n3. Hard\n";
    cin >> difficulty;

    initializeBoard();

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

        computerMove();

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