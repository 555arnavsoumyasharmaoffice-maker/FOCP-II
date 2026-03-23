/*Q40. A content-management system receives user-entered text that may contain inconsistent spacing, mixed 
letter cases, and invalid characters. 
For reliable storage and processing, the system must normalize and validate the input string. 
Develop a C++ program that performs the following tasks on a given input string: 
1. Remove leading, trailing, and extra spaces between words 
2. Convert the string to sentence case (first character uppercase, remaining lowercase) 
3. Count and display: 
o Total number of words 
o Total number of digits 
o Total number of special characters 
4. Validate that the final string contains only alphabets, digits, and spaces 
Display appropriate messages based on the validation result.*/
#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    // 1. Remove extra spaces
    string temp = "";
    int i = 0;

    // remove leading spaces
    while (i < input.length() && input[i] == ' ') {
        i++;
    }

    bool spaceFound = false;

    for (; i < input.length(); i++) {
        if (input[i] != ' ') {
            temp += input[i];
            spaceFound = false;
        } else if (!spaceFound) {
            temp += ' ';  // only one space
            spaceFound = true;
        }
    }

    // remove trailing space
    if (temp.length() > 0 && temp[temp.length() - 1] == ' ') {
        temp.erase(temp.length() - 1);
    }

    // 2. Convert to sentence case
    for (int i = 0; i < temp.length(); i++) {
        temp[i] = tolower(temp[i]);
    }

    if (temp.length() > 0) {
        temp[0] = toupper(temp[0]);
    }

    cout << "Normalized String: " << temp << endl;

    // 3. Counting
    int words = 0, digits = 0, special = 0;

    for (int i = 0; i < temp.length(); i++) {
        if (isdigit(temp[i])) {
            digits++;
        } else if (!isalpha(temp[i]) && temp[i] != ' ') {
            special++;
        }
    }

    // count words
    for (int i = 0; i < temp.length(); i++) {
        if (temp[i] == ' ') {
            words++;
        }
    }

    if (temp.length() > 0) {
        words = words + 1;
    }

    cout << "Total words: " << words << endl;
    cout << "Total digits: " << digits << endl;
    cout << "Total special characters: " << special << endl;

    // 4. Validation
    bool valid = true;

    for (int i = 0; i < temp.length(); i++) {
        if (!isalpha(temp[i]) && !isdigit(temp[i]) && temp[i] != ' ') {
            valid = false;
            break;
        }
    }

    if (valid) {
        cout << "String is valid." << endl;
    } else {
        cout << "String is invalid." << endl;
    }

    return 0;
}