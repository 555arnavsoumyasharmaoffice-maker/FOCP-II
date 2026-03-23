/*Q21. A CAD tool generates rectangular hollow frames. Implement a solution to display: 
******** 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
********/
#include <iostream>
using namespace std;

int main() {
    int rows = 8;
    int cols = 8;

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= cols; j++) {
            
            // Border condition
            if(i == 1 || i == rows || j == 1 || j == cols) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}