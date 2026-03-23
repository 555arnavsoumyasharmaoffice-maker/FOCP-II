/*Q25. A security system generates list of prime keys within given range. Implement a solution to display all 
prime numbers between two limits. 
A web-based application enforces strong password policies during user registration to improve account security. 
The system requires that every password must satisfy the following conditions: 
• Contain at least one uppercase letter (A–Z) 
• Contain at least one lowercase letter (a–z) 
• Contain at least one digit (0–9) 
• Contain at least one special character from the set 
@ # $ % ! & * 
You are required to develop the code so that the password validation logic can be implemented in the application.*/
#include<iostream>
using namespace std;
int main(){
    string password;
    cout<<"Enter a password: ";
    cin>>password;
    bool hasUpper=false, hasLower=false, hasDigit=false, hasSpecial=false;
    for(char c : password){
        if(c>='A' && c<='Z'){
            hasUpper=true;
        }
        else if(c>='a' && c<='z'){
            hasLower=true;
        }
        else if(c>='0' && c<='9'){
            hasDigit=true;
        }
        else if(c=='@' || c=='#' || c=='$' || c=='%' || c=='!' || c=='&' || c=='*'){
            hasSpecial=true;
        }
    }
    if(hasUpper && hasLower && hasDigit && hasSpecial){
        cout<<"Password is valid."<<endl;
    }
    else{
        cout<<"Password is invalid. It must contain at least one uppercase letter, one lowercase letter, one digit, and one special character."<<endl;
    }
    return 0;
}