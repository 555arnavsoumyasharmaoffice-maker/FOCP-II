/*A text editor auto-detects whether an input letter is a vowel, a consonant or a number. Implement a 
solution to classify the symbol. */
#include<iostream>
using namespace std;
int main(){
    char symbol;
    cout<<"Enter a symbol: ";
    cin>>symbol;
    if((symbol>='a' && symbol<='z') || (symbol>='A' && symbol<='Z')){
        if(symbol=='a' || symbol=='e' || symbol=='i' || symbol=='o' || symbol=='u' ||
           symbol=='A' || symbol=='E' || symbol=='I' || symbol=='O' || symbol=='U'){
            cout<<"The symbol is a vowel."<<endl;
        }
        else{
            cout<<"The symbol is a consonant."<<endl;
        }
    }
    else if(symbol>='0' && symbol<='9'){
        cout<<"The symbol is a number."<<endl;
    }
    else{
        cout<<"The symbol is neither a vowel, consonant nor a number."<<endl;
    }
    return 0;
}