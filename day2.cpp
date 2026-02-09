#include<iostream>
using namespace std;

int main(){
    int a;
    string s;
    getline(cin,s);
    cout<<"The name is : "<<s<<endl;

int num;
string name;

cin >> num;           // Reads number, leaves '\n' in buffer
cin.ignore();         // Removes the '\n'
getline(cin, name);   // Now reads the next line properly
cout<<"Number is : "<<num<<endl;
cout<<"The name is : "<<name<<endl;


    return 0;
}