#include <iostream>
using namespace std;

int main() {
    int n = 4;

    // Upper half
    for(int i = 1; i <= n; i++) {

        // Spaces
        for(int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Stars (hollow)
        for(int k = 1; k <= 2*i - 1; k++) {
            if(k == 1 || k == 2*i - 1)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }

    // Lower half
    for(int i = n - 1; i >= 1; i--) {

        // Spaces
        for(int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Stars (hollow)
        for(int k = 1; k <= 2*i - 1; k++) {
            if(k == 1 || k == 2*i - 1)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}