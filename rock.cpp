#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int player, computer;

    srand(time(0));  // seed for random number

    cout << "Rock Paper Scissors Game\n";
    cout << "1. Rock\n2. Paper\n3. Scissors\n";
    cout << "Enter your choice: ";
    cin >> player;

    computer = rand() % 3 + 1;

    cout << "Computer chose: ";
    if (computer == 1)
        cout << "Rock\n";
    else if (computer == 2)
        cout << "Paper\n";
    else
        cout << "Scissors\n";

    if (player == computer)
        cout << "Draw!\n";
    else if ((player == 1 && computer == 3) ||
             (player == 2 && computer == 1) ||
             (player == 3 && computer == 2))
        cout << "You Win!\n";
    else
        cout << "Computer Wins!\n";

    return 0;
}