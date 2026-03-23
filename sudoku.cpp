#include <iostream>
using namespace std;

#define N 9

void printBoard(int board[N][N])
{
    cout << "\nSudoku Board:\n";
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            if(board[i][j]==0)
                cout << ". ";
            else
                cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool isSafe(int board[N][N], int row, int col, int num)
{
    for(int i=0;i<9;i++)
        if(board[row][i]==num || board[i][col]==num)
            return false;

    int sr = row - row%3;
    int sc = col - col%3;

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(board[sr+i][sc+j]==num)
                return false;

    return true;
}

bool isFull(int board[N][N])
{
    for(int i=0;i<9;i++)
        for(int j=0;j<9;j++)
            if(board[i][j]==0)
                return false;

    return true;
}

int main()
{
    int board[N][N] =
    {
        {5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}
    };

    int row,col,num;

    while(true)
    {
        printBoard(board);

        if(isFull(board))
        {
            cout<<"Sudoku Solved!\n";
            break;
        }

        cout<<"\nEnter row col number (1-9): ";
        cin>>row>>col>>num;

        row--; 
        col--;

        if(board[row][col]!=0)
        {
            cout<<"Cell already filled!\n";
            continue;
        }

        if(isSafe(board,row,col,num))
        {
            board[row][col]=num;
        }
        else
        {
            cout<<"Wrong move!\n";
        }
    }

    return 0;
}
