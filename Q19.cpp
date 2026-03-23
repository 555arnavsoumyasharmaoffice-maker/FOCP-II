/*A network security system generates prime numbers in a range for encryption key pools. Implement a 
solution to find all prime numbers within a given range.*/
#include<iostream>
using namespace std;
int main(){
    int lower, upper;
    cout<<"Enter the lower and upper bounds of the range: ";
    cin>>lower>>upper;
    cout<<"Prime numbers between "<<lower<<" and "<<upper<<" are: ";
    for(int i=lower; i<=upper; i++){
        bool isPrime=true;
        if(i<=1){
            isPrime=false;
        }
        else{
            for(int j=2; j<=i/2; j++){
                if(i%j==0){
                    isPrime=false;
                    break;
                }
            }
        }
        if(isPrime){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}