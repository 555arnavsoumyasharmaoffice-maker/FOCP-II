/*A String-matching tool validates if IDs are palindromes. Implement 
a solution to check whether a given ID is a palindrome. */
#include<iostream>
using namespace std;
int main(){
    string id;
    cout<<"Enter an ID: ";
    cin>>id;
    string reversed_id="";
    for(int i=id.length()-1; i>=0; i--){
        reversed_id+=id[i];
    }
    if(id==reversed_id){
        cout<<"The ID is a palindrome."<<endl;
    }
    else{
        cout<<"The ID is not a palindrome."<<endl;
    }
    return 0;
}