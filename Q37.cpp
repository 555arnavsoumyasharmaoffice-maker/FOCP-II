/* A registration system rejects usernames that contain spaces or special characters. Write a C++ 
program to validate whether a given string can be accepted as a username.*/
#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;
bool isValidUsername(const string &username) {
    for (char c : username) {
        if (!isalnum(c)) { // Check if the character is not alphanumeric
            return false; // Invalid username
        }
    }
    return true; // Valid username
}
int main() {
    string username;
    cout << "Enter a username: ";
    cin >> username;
    
    if (isValidUsername(username)) {
        cout << "Username is valid." << endl;
    } else {
        cout << "Username is invalid. It should not contain spaces or special characters." << endl;
    }
    
    return 0;
}