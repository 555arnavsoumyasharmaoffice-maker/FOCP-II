#include<iostream>
#include<iomanip>  // Required for setw
using namespace std;

int main(){
    cout << setw(5) << 42 << endl;      // Output:    42 (right-aligned in 5 spaces)
    cout << setw(10) << "Hello" << endl; // Output: Hello      (5 spaces after)
    cout << setw(2) << 2.5 << endl;     // Output:     2.555555 (right-aligned)

    
    return 0;
}